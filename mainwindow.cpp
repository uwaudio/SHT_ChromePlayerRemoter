#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QProcess>
#include <QHttpServerRouter>
#include <QHttpServerRouterRule>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    osascript = "/usr/bin/osascript";
    processArguments << "-l" << "AppleScript";

    isLocalMode = 1;
    isServerMode = 0;
    ui->cBox_nodeSelect->setEnabled(0);

    initialMyAppleScriptList();


}



MainWindow::~MainWindow()
{
    myAppleScriptKeyList.clear();
    p.close();
    myHttpServer->deleteLater();
    delete ui;
}

void MainWindow::controlActionByHttp(int _i)
{
    controlActions(generateMyAppleScript(_i));
}



void MainWindow::on_btn_playPause_clicked()
{
//    aScript =
//                "tell application \"System Events\"\n"
//                "    tell process \"Google Chrome\"\n"
//                "        set frontmost to true\n"
//                "    end tell\n"
//                "    keystroke space\n"
//                "end tell\n";

//    QProcess p;
//    p.start(osascript, processArguments);
//    p.write(aScript.toUtf8());
//    p.closeWriteChannel();
//    p.waitForFinished();
    controlActions(generateMyAppleScript(0));
}


void MainWindow::on_btn_left_clicked()
{
//    aScript =
//                "tell application \"System Events\"\n"
//                "    tell process \"Google Chrome\"\n"
//                "        set frontmost to true\n"
//                "    end tell\n"
//                "    key code 123\n"
//                "end tell\n";

//    QProcess p;
//    p.start(osascript, processArguments);
//    p.write(aScript.toUtf8());
//    p.closeWriteChannel();
//    p.waitForFinished();
    controlActions(generateMyAppleScript(1));
}


void MainWindow::on_btn_right_clicked()
{
//    aScript =
//                "tell application \"System Events\"\n"
//                "    tell process \"Google Chrome\"\n"
//                "        set frontmost to true\n"
//                "    end tell\n"
//                "    key code 124\n"
//                "end tell\n";

//    QProcess p;
//    p.start(osascript, processArguments);
//    p.write(aScript.toUtf8());
//    p.closeWriteChannel();
//    p.waitForFinished();
    controlActions(generateMyAppleScript(2));
}


void MainWindow::on_btn_up_clicked()
{
//    aScript =
//                "tell application \"System Events\"\n"
//                "    tell process \"Google Chrome\"\n"
//                "        set frontmost to true\n"
//                "    end tell\n"
//                "    key code 126\n"
//                "end tell\n";

//    QProcess p;
//    p.start(osascript, processArguments);
//    p.write(aScript.toUtf8());
//    p.closeWriteChannel();
//    p.waitForFinished();
    controlActions(generateMyAppleScript(3));
}


void MainWindow::on_btn_down_clicked()
{
//    aScript =
//                "tell application \"System Events\"\n"
//                "    tell process \"Google Chrome\"\n"
//                "        set frontmost to true\n"
//                "    end tell\n"
//                "    key code 125\n"
//                "end tell\n";

//    QProcess p;
//    p.start(osascript, processArguments);
//    p.write(aScript.toUtf8());
//    p.closeWriteChannel();
//    p.waitForFinished();
    controlActions(generateMyAppleScript(4));
}


void MainWindow::on_btn_y2b_nextVideo_clicked()
{
//    aScript =
//                "tell application \"System Events\"\n"
//                "    tell process \"Google Chrome\"\n"
//                "        set frontmost to true\n"
//                "    end tell\n"
//                "    key code 45 using {shift down}\n"
//                "end tell\n";

//    QProcess p;
//    p.start(osascript, processArguments);
//    p.write(aScript.toUtf8());
//    p.closeWriteChannel();
//    p.waitForFinished();
    controlActions(generateMyAppleScript(5));
}


void MainWindow::on_btn_y2b_fullscreen_clicked()
{
//    aScript =
//                "tell application \"System Events\"\n"
//                "    tell process \"Google Chrome\"\n"
//                "        set frontmost to true\n"
//                "    end tell\n"
//                "    key code 3\n"
//                "end tell\n";

//    QProcess p;
//    p.start(osascript, processArguments);
//    p.write(aScript.toUtf8());
//    p.closeWriteChannel();
//    p.waitForFinished();
    controlActions(generateMyAppleScript(6));
}


void MainWindow::on_btn_y2b_theater_clicked()
{
//    aScript =
//                "tell application \"System Events\"\n"
//                "    tell process \"Google Chrome\"\n"
//                "        set frontmost to true\n"
//                "    end tell\n"
//                "    key code 17\n"
//                "end tell\n";

//    QProcess p;
//    p.start(osascript, processArguments);
//    p.write(aScript.toUtf8());
//    p.closeWriteChannel();
//    p.waitForFinished();
    controlActions(generateMyAppleScript(7));
}


void MainWindow::on_btn_y2b_mute_clicked()
{
//    aScript =
//                "tell application \"System Events\"\n"
//                "    tell process \"Google Chrome\"\n"
//                "        set frontmost to true\n"
//                "    end tell\n"
//                "    key code 46\n"
//                "end tell\n";

//    QProcess p;
//    p.start(osascript, processArguments);
//    p.write(aScript.toUtf8());
//    p.closeWriteChannel();
//    p.waitForFinished();
    controlActions(generateMyAppleScript(8));
}


void MainWindow::on_btn_bLive_stopLive_clicked()
{
//    aScript =
//                "tell application \"System Events\"\n"
//                "    tell process \"Google Chrome\"\n"
//                "        set frontmost to true\n"
//                "    end tell\n"
//                "    key code 13 using {command down}\n"
//                "end tell\n";

//    QProcess p;
//    p.start(osascript, processArguments);
//    p.write(aScript.toUtf8());
//    p.closeWriteChannel();
//    p.waitForFinished();
    controlActions(generateMyAppleScript(9));
}


void MainWindow::on_btn_bLive_restartLast_clicked()
{
//    aScript =
//                "tell application \"System Events\"\n"
//                "    tell process \"Google Chrome\"\n"
//                "        set frontmost to true\n"
//                "    end tell\n"
//                "    key code 17 using {command down, shift down}\n"
//                "end tell\n";

//    QProcess p;
//    p.start(osascript, processArguments);
//    p.write(aScript.toUtf8());
//    p.closeWriteChannel();
//    p.waitForFinished();
    controlActions(generateMyAppleScript(10));
}


void MainWindow::on_cBox_modeSelect_currentIndexChanged(int index)
{
    isLocalMode = index; // 0=remote mode, 1=localmode
    ui->cBox_nodeSelect->setDisabled(isLocalMode);
}


void MainWindow::on_cBox_nodeSelect_currentIndexChanged(int index)
{
    isServerMode = index; //0=Client node, 1=Server node.
    if((!isLocalMode)&&(isServerMode))
    {
        startHttpServer();
    }
    else
    {
        stopHttpServer();
    }
}

void MainWindow::initialMyAppleScriptList()
{
    myAppleScriptKeyList.clear();
    myAppleScriptKeyList.append("    keystroke space\n");                               //0
    myAppleScriptKeyList.append("    key code 123\n");                                  //1
    myAppleScriptKeyList.append("    key code 124\n");                                  //2
    myAppleScriptKeyList.append("    key code 126\n");                                  //3
    myAppleScriptKeyList.append("    key code 125\n");                                  //4
    myAppleScriptKeyList.append("    key code 45 using {shift down}\n");                //5
    myAppleScriptKeyList.append("    key code 3\n");                                    //6
    myAppleScriptKeyList.append("    key code 17\n");                                   //7
    myAppleScriptKeyList.append("    key code 46\n");                                   //8
    myAppleScriptKeyList.append("    key code 13 using {command down}\n");              //9
    myAppleScriptKeyList.append("    key code 17 using {command down, shift down}\n");  //10
}

void MainWindow::runAppleScript(QString _qstr)
{
//    QProcess p;
    p.start(osascript, processArguments);
    p.write(_qstr.toUtf8());
    p.closeWriteChannel();
    p.waitForFinished();

    qDebug() << _qstr << Qt::endl;
}

void MainWindow::controlActions(QString _qstr)
{
    if(isLocalMode)
    {
        runAppleScript(_qstr);
    }
    else
    {
        if(isServerMode)
        {
            runAppleScript(_qstr);
            qDebug() << "Work in Remote Mode, as Server" << Qt::endl;
        }
        else
        {
            qDebug() << "Work in Client Mode, as Client" << Qt::endl;
        }

    }
}

QString MainWindow::generateMyAppleScript(int _i)
{
    QString _return = tr(
            "tell application \"System Events\"\n"
            "    tell process \"Google Chrome\"\n"
            "        set frontmost to true\n"
            "    end tell\n"
            "%1"
            "end tell\n").
            arg(myAppleScriptKeyList.at(_i));

    //qDebug() << _return << Qt::endl;

    return _return;

}

void MainWindow::startHttpServer()
{
    myHttpServer = new QHttpServer(this);
    myHttpServer->route("/", [this] ()
    {
        return "helloword!";
    });

    myHttpServer->route("/run/<arg>/", QHttpServerRequest::Method::Get, [this](const QString &firstArg, const QHttpServerRequest &request) {
        qDebug() << "run" << firstArg;
        this->controlActionByHttp(firstArg.toInt());
        return "Ok";
    });


    myHttpServer->listen(QHostAddress::Any, 16250);
}

void MainWindow::stopHttpServer()
{
    myHttpServer->deleteLater();
}

