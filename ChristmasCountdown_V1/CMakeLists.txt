cmake_minimum_required(VERSION 3.5)

project(ChristmasCountdown_V1 VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(OpenCV_DIR ${CMAKE_SOURCE_DIR}/../Include/opencv) # Adjust this path accordingly


find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)
find_package(Qt6 REQUIRED COMPONENTS Multimedia)
find_package(Qt6 REQUIRED COMPONENTS MultimediaWidgets)
#find_package(OpenCV REQUIRED)
find_package(OpenCV REQUIRED PATHS ${OpenCV_DIR})

find_package(OpenSSL REQUIRED)
set(PROJECT_SOURCES
        main.cpp
        mainwindow.cpp
        mainwindow.h
        mainwindow.ui
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(ChristmasCountdown_V1
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}

        day2window.cpp day2window.h day2window.ui day3window.cpp day3window.h day3window.ui
        day1window.h day1window.cpp
        day1window.ui
        day5window.h day5window.cpp day5window.ui
        day4window.h day4window.cpp day4window.ui
        day6window.h day6window.cpp day6window.ui
        day10window.h day10window.cpp day10window.ui
        day8window.h day8window.cpp day8window.ui
        day9window.h day9window.cpp day9window.ui
        day7window.h day7window.cpp day7window.ui
        day11window.h day11window.cpp day11window.ui
        day12window.h day12window.cpp day12window.ui

    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET ChristmasCountdown_V1 APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
    if(ANDROID)
        add_library(ChristmasCountdown_V1 SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(ChristmasCountdown_V1
            ${PROJECT_SOURCES}
        )
    endif()
endif()

target_link_libraries(ChristmasCountdown_V1 PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)
target_link_libraries(ChristmasCountdown_V1 PRIVATE Qt${QT_VERSION_MAJOR}::Multimedia)
target_link_libraries(ChristmasCountdown_V1 PUBLIC Qt${QT_VERSION_MAJOR}::MultimediaWidgets)
target_link_libraries(ChristmasCountdown_V1 PUBLIC OpenSSL::SSL)
target_link_libraries(ChristmasCountdown_V1 PUBLIC ${OpenCV_LIBS})

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
if(${QT_VERSION} VERSION_LESS 6.1.0)
  set(BUNDLE_ID_OPTION MACOSX_BUNDLE_GUI_IDENTIFIER com.example.ChristmasCountdown_V1)
endif()
set_target_properties(ChristmasCountdown_V1 PROPERTIES
    ${BUNDLE_ID_OPTION}
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)


include(GNUInstallDirs)
install(TARGETS ChristmasCountdown_V1
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(ChristmasCountdown_V1)
endif()
