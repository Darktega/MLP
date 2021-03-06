#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "trainingplot.h"
#include "trainingmodule.h"

namespace Ui {
    class MainWindow;
    }

class MainWindow : public QMainWindow{
    Q_OBJECT

    public:
        explicit MainWindow(QWidget *parent = 0);
        ~MainWindow();

    public slots:
        void plotClick(QMouseEvent*);

    private slots:
        void on_layerNumSB_valueChanged(int arg1);

        void on_initializeBttn_clicked();

        void on_trainBttn_clicked();

private:
        Ui::MainWindow *ui;

        TrainingPlot* trainingPlot;
        TrainingModule* trainingModule;
    };

#endif // MAINWINDOW_H
