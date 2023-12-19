#include "day1window.h"
#include "ui_day1window.h"




Day1Window::Day1Window(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Day1Window)
{
    ui->setupUi(this);
    ui->video_title->setStyleSheet("QLabel { background-color : lightblue}");
    ui->video_title->setText("<font color='white'>Day1: Funny Cat Videos!!!!");
    //Setting up background

    QPixmap bkgnd("../BackgroundImages/day1_background.jpg");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Window, bkgnd);
    this->setPalette(palette);

    //Setting up title colour
    //QPalette palette_2 = ui->video_title->palette();
    //palette_2.setColor(ui->video_title->backgroundRole(), Qt::blue);
    //palette_2.setColor(ui->video_title->foregroundRole(), Qt::blue);
    //ui->video_title->setPalette(palette_2);

    //QLabel* video_title=new QLabel;




    //Setting up video stuff


    player=new QMediaPlayer(this);
    //connect(player,SIGNAL(videoOutputChanged()),this,SLOT(new_video()));


    audioOutput = new QAudioOutput(this);
    vw=new QVideoWidget(this);
    ui->gridLayout_3->addWidget(vw,1,0,-1,-1);
    //vw->lower();
    QSize size=this->size();
    //qDebug()<<size.width();
    vw->setGeometry(0,int(size.height()*0.1),size.width(),200);

    player->setAudioOutput(audioOutput);
    player->setVideoOutput(vw);




}

Day1Window::~Day1Window()
{
    delete ui;
}

QString Day1Window::day_extension(int day)
{
    QString dayExtension;
    switch(day)
    {
    case(1):
        dayExtension="st";
        break;
    case(2):
        dayExtension="nd";
        break;
    case(3):
        dayExtension="rd";
        break;
    default:
        dayExtension="th";
        break;
    }

    return dayExtension;
}

QString Day1Window::catvideo_display(int videonum)
{
    QString videoTitle;
    switch(videonum)
    {
    case(1):
        videoTitle="<font color='white'>Video 1: Cat wants his ball! :)";
        break;
    case(2):
        videoTitle="<font color='white'>Video 2: Found a cat criminal";
        break;
    case(3):
        videoTitle="<font color='white'>Video 3: Party cat! Woot-woot.";
        break;
    case(4):
        videoTitle="<font color='white'>Video 4: Fuzzy cat boyz!";
        break;
    case(5):
        videoTitle="<font color='white'>Video 5: Dancy cats!";
        break;
    case(6):
        videoTitle="<font color='white'>Video 6: Just a super cute guy.";
        break;
    case(7):
        videoTitle="<font color='white'>Video 7: Another cute one, with a cute meow!";
        break;
    case(8):
        videoTitle="<font color='white'>Video 8: Wait for the last one lol.";
        break;
    case(9):
        videoTitle="<font color='white'>Video 9: Squishy cat!";
        break;
    case(10):
        videoTitle="<font color='white'>Video 10: Garfield?";
        break;
    case(11):
        videoTitle="<font color='white'>Video 11: Jumpy cat!";
        break;
    case(12):
        videoTitle="<font color='white'>Video 12: Kurt is a legend, and the narration is great!";
        break;
    default:
        videoTitle="<font color='white'>Not sure what video this is lol!";
        break;
    }

    return videoTitle;

}

void Day1Window::on_start_day1_clicked()
{
    VideoNumber+=1;
    player->stop();
    qInfo()<<QString::number(VideoNumber);

    if(VideoNumber<=NUMBEROFVIDEOS){
        disconnect(ui->pause_day1,SIGNAL(clicked()),player,SLOT(pause()));
        disconnect(ui->play_day1,SIGNAL(clicked()),player,SLOT(play()));
        //QString vid_file="../Videos/video"+std::to_string(VideoNumber)+".mp4";
        QString vid_file="../Videos/video"+QString::number(VideoNumber)+".mp4";

        player=new QMediaPlayer(this);
        audioOutput = new QAudioOutput(this);

        player->setAudioOutput(audioOutput);
        player->setVideoOutput(vw);

        player->setSource(QUrl::fromLocalFile(vid_file));
        qDebug() << player->mediaStatus();

        audioOutput->setVolume(50);
        player->setLoops(1);
        vw->show();
        player->play();

        connect(ui->pause_day1,SIGNAL(clicked()),player,SLOT(pause()));
        connect(ui->play_day1,SIGNAL(clicked()),player,SLOT(play()));


        //Updating text on the start button

        if(VideoNumber<NUMBEROFVIDEOS)
        {
            QString dayEtension=day_extension(VideoNumber+1);
            QString newText="Start "+QString::number(VideoNumber+1)+dayEtension+" Video";

            ui->start_day1->setText(newText);
        }

        else
        {
            QString newText="That's the end of the videos";

            ui->start_day1->setText(newText);
        }

        //Updating the video title
        QString videoTitle=catvideo_display(VideoNumber);
        ui->video_title->setText(videoTitle);


    }





}


/*
void Day1Window::new_video()
{
    qInfo()<<player->playbackState();
    qInfo()<<player->mediaStatus();
    //qInfo()<<QString::number(player->playbackState()==QMediaPlayer::PausedState);

    qInfo()<<QString::number(isPlaying);
    qInfo()<<QString::number(isPaused);
    if(false){
        disconnect(player,&QMediaPlayer::playingChanged,this,&Day1Window::new_video);
        //disconnect(ui->pause_day1,SIGNAL(clicked()),player,SLOT(pause()));
        //disconnect(ui->play_day1,SIGNAL(clicked()),player,SLOT(play()));
        VideoNumber+=1;
        player->stop();
        if(VideoNumber<3){
            //QString vid_file="../Videos/video"+std::to_string(VideoNumber)+".mp4";
            QString vid_file="../Videos/video"+QString::number(VideoNumber)+".mp4";
            player=new QMediaPlayer(this);
            audioOutput = new QAudioOutput(this);
            player->setAudioOutput(audioOutput);
            player->setVideoOutput(vw);

            player->setSource(QUrl::fromLocalFile(vid_file));
            qDebug() << player->mediaStatus();

            audioOutput->setVolume(50);
            player->setLoops(1);
            vw->show();
            player->play();
            connect(ui->pause_day1,SIGNAL(clicked()),player,SLOT(pause()));
            connect(ui->play_day1,SIGNAL(clicked()),player,SLOT(play()));
            connect(player,&QMediaPlayer::playingChanged,this,&Day1Window::new_video);


        }
    }


}
*/


/*
void Day1Window::delay(int milliseconds)
{
    clock_t goal = milliseconds + clock();
    while(goal>clock());
    return;

}
*/


//void Day1Window::on_play_day1_clicked()
//{
 //   isPlaying=true;
 //   isPaused=false;
  //  player->play();
//}


//void Day1Window::on_pause_day1_clicked()
//{
 //   isPlaying=false;
 //   isPaused=true;
 //   player->pause();

//}

