#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLoggingCategory>
#include <windowrequest.h>
#include <taskrepository.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow {

        Q_OBJECT

    public:
        explicit MainWindow(QWidget *parent = nullptr);
        ~MainWindow();

        void setTaskRepository(TaskRepository* taskRepository);

    private slots:
        void on_redactButton_clicked();

    private:
        Ui::MainWindow *ui;
        QLoggingCategory log;
        TaskRepository* taskRepository = nullptr;

    signals:
         void sendRequest(WindowRequest request);
    };
#endif // MAINWINDOW_H
