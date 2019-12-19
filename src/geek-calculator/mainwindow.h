#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <string>

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


    void on_goToBasicCalculatorButton_clicked();

    void on_goToFunctionsButton_clicked();

    void on_goBackToMainPageButton_clicked();

    void on_goBackToMainPage2_clicked();



    void on_calculateValueButton_clicked();

    void on_integralValueFunction_clicked();


    void on_goToMatrixButton_clicked();



    void on_twoVariablesRadioButton_clicked();

    void on_oneVariableRadioButton_clicked();

    void on_clearIntegralTabButton_clicked();

    void on_calculateDerivativeButton_clicked();

private:
    Ui::MainWindow *ui;
    void configureFunctionPage();
};
#endif // MAINWINDOW_H
