#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QProcess>
#include <QTimer>

#define PS1080x1920Multiple 1.38
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QProcess process;
    double lenth;
    QTimer timer1;
    quint16 cishu,maxcishu;
    bool stoptiao,EquipmentOk;
    double LenMultiple;

private slots:
    void on_pushButton_clicked();
    void tiao();

    void on_pushButton_stop_clicked();

    void on_pushButton_start_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
