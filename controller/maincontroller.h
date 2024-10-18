#ifndef MAINCONTROLLER_H
#define MAINCONTROLLER_H

#include <QObject>
#include <Statement.h>
#include <quizwindow.h>
#include "redactwindow.h"
#include "mainwindow.h"
#include "taskrepository.h"

class MainController : public QObject {
    Q_OBJECT

public:
    MainController(MainWindow* mainWindow,
                   RedactWindow* redactWindow,
                   QuizWindow* quizWindow,
                   TaskRepository* taskRepository);

    void openMainWindow();
    void openQuizWindow();
    void openQuizRedactWindow();
    void openQuizResultWindow();

public slots:
    void handleRequest(WindowRequest request);

private:
    TaskRepository* taskRepository;
    MainWindow* mainWindow;
    RedactWindow* redactWindow;
    QuizWindow* quizWindow;
};

#endif // MAINCONTROLLER_H
