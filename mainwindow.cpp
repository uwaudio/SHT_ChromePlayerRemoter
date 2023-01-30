#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QProcess>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    osascript = "/usr/bin/osascript";
    processArguments << "-l" << "AppleScript";
}

MainWindow::~MainWindow()
{
    delete ui;
}


//void MainWindow::on_btn_test_clicked()
//{
//    QString aScript =
//            "tell application \"System Events\"\n"
//            "    tell process \"Google Chrome\"\n"
//            "        set frontmost to true\n"
//            "    end tell\n"
//            "    keystroke space\n"
//            "end tell\n";

//    QString osascript = "/usr/bin/osascript";
//    QStringList processArguments;
//    processArguments << "-l" << "AppleScript";

//    QProcess p;
//    p.start(osascript, processArguments);
//    p.write(aScript.toUtf8());
//    p.closeWriteChannel();
//    p.waitForFinished();
//}


void MainWindow::on_btn_playPause_clicked()
{
    aScript =
                "tell application \"System Events\"\n"
                "    tell process \"Google Chrome\"\n"
                "        set frontmost to true\n"
                "    end tell\n"
                "    keystroke space\n"
                "end tell\n";

    QProcess p;
    p.start(osascript, processArguments);
    p.write(aScript.toUtf8());
    p.closeWriteChannel();
    p.waitForFinished();
}


void MainWindow::on_btn_left_clicked()
{
    aScript =
                "tell application \"System Events\"\n"
                "    tell process \"Google Chrome\"\n"
                "        set frontmost to true\n"
                "    end tell\n"
                "    key code 123\n"
                "end tell\n";

    QProcess p;
    p.start(osascript, processArguments);
    p.write(aScript.toUtf8());
    p.closeWriteChannel();
    p.waitForFinished();
}


void MainWindow::on_btn_right_clicked()
{
    aScript =
                "tell application \"System Events\"\n"
                "    tell process \"Google Chrome\"\n"
                "        set frontmost to true\n"
                "    end tell\n"
                "    key code 124\n"
                "end tell\n";

    QProcess p;
    p.start(osascript, processArguments);
    p.write(aScript.toUtf8());
    p.closeWriteChannel();
    p.waitForFinished();
}


void MainWindow::on_btn_up_clicked()
{
    aScript =
                "tell application \"System Events\"\n"
                "    tell process \"Google Chrome\"\n"
                "        set frontmost to true\n"
                "    end tell\n"
                "    key code 126\n"
                "end tell\n";

    QProcess p;
    p.start(osascript, processArguments);
    p.write(aScript.toUtf8());
    p.closeWriteChannel();
    p.waitForFinished();
}


void MainWindow::on_btn_down_clicked()
{
    aScript =
                "tell application \"System Events\"\n"
                "    tell process \"Google Chrome\"\n"
                "        set frontmost to true\n"
                "    end tell\n"
                "    key code 125\n"
                "end tell\n";

    QProcess p;
    p.start(osascript, processArguments);
    p.write(aScript.toUtf8());
    p.closeWriteChannel();
    p.waitForFinished();
}


void MainWindow::on_btn_y2b_nextVideo_clicked()
{
    aScript =
                "tell application \"System Events\"\n"
                "    tell process \"Google Chrome\"\n"
                "        set frontmost to true\n"
                "    end tell\n"
                "    key code 45 using {shift down}\n"
                "end tell\n";

    QProcess p;
    p.start(osascript, processArguments);
    p.write(aScript.toUtf8());
    p.closeWriteChannel();
    p.waitForFinished();
}


void MainWindow::on_btn_y2b_fullscreen_clicked()
{
    aScript =
                "tell application \"System Events\"\n"
                "    tell process \"Google Chrome\"\n"
                "        set frontmost to true\n"
                "    end tell\n"
                "    key code 3\n"
                "end tell\n";

    QProcess p;
    p.start(osascript, processArguments);
    p.write(aScript.toUtf8());
    p.closeWriteChannel();
    p.waitForFinished();
}


void MainWindow::on_btn_y2b_theater_clicked()
{
    aScript =
                "tell application \"System Events\"\n"
                "    tell process \"Google Chrome\"\n"
                "        set frontmost to true\n"
                "    end tell\n"
                "    key code 17\n"
                "end tell\n";

    QProcess p;
    p.start(osascript, processArguments);
    p.write(aScript.toUtf8());
    p.closeWriteChannel();
    p.waitForFinished();
}


void MainWindow::on_btn_y2b_mute_clicked()
{
    aScript =
                "tell application \"System Events\"\n"
                "    tell process \"Google Chrome\"\n"
                "        set frontmost to true\n"
                "    end tell\n"
                "    key code 46\n"
                "end tell\n";

    QProcess p;
    p.start(osascript, processArguments);
    p.write(aScript.toUtf8());
    p.closeWriteChannel();
    p.waitForFinished();
}


void MainWindow::on_btn_bLive_stopLive_clicked()
{
    aScript =
                "tell application \"System Events\"\n"
                "    tell process \"Google Chrome\"\n"
                "        set frontmost to true\n"
                "    end tell\n"
                "    key code 13 using {command down}\n"
                "end tell\n";

    QProcess p;
    p.start(osascript, processArguments);
    p.write(aScript.toUtf8());
    p.closeWriteChannel();
    p.waitForFinished();
}


void MainWindow::on_btn_bLive_restartLast_clicked()
{
    aScript =
                "tell application \"System Events\"\n"
                "    tell process \"Google Chrome\"\n"
                "        set frontmost to true\n"
                "    end tell\n"
                "    key code 17 using {command down, shift down}\n"
                "end tell\n";

    QProcess p;
    p.start(osascript, processArguments);
    p.write(aScript.toUtf8());
    p.closeWriteChannel();
    p.waitForFinished();
}

