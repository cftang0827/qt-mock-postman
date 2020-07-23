#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QNetworkReply>
#include <QElapsedTimer>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_sendRequestButton_clicked();
    void replyFinished(QNetworkReply *reply);

private:
    Ui::MainWindow *ui;
    QElapsedTimer timer;
};
#endif // MAINWINDOW_H
