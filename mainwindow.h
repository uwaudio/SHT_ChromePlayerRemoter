#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QProcess>
#include <QHttpServer>
#include <QHttpServerRouter>

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void controlActionByHttp(int);


private slots:


    void on_btn_playPause_clicked();

    void on_btn_left_clicked();

    void on_btn_right_clicked();

    void on_btn_up_clicked();

    void on_btn_down_clicked();

    void on_btn_y2b_nextVideo_clicked();

    void on_btn_y2b_fullscreen_clicked();

    void on_btn_y2b_theater_clicked();

    void on_btn_y2b_mute_clicked();

    void on_btn_bLive_stopLive_clicked();

    void on_btn_bLive_restartLast_clicked();

    void on_cBox_modeSelect_currentIndexChanged(int index);

    void on_cBox_nodeSelect_currentIndexChanged(int index);

private:
    Ui::MainWindow *ui;


    QString osascript;
    QStringList processArguments;
    QString aScript;

    QProcess p;

    QStringList myAppleScriptKeyList;

    qint8 isLocalMode;
    qint8 isServerMode;

    void initialMyAppleScriptList();

    void runAppleScript(QString);
    void controlActions(QString);

    QString generateMyAppleScript(int);

    QHttpServer* myHttpServer;

    void startHttpServer();
    void stopHttpServer();



};
#endif // MAINWINDOW_H
