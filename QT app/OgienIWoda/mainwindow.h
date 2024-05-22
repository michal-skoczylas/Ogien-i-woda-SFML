#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QProcess>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_select_level_button_clicked();//przycisk do wybierania poziomu klikniety

private:
    Ui::MainWindow *ui;
    QProcess *sfmlProcess;

};
#endif // MAINWINDOW_H
