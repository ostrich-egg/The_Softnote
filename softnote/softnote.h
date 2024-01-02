#ifndef SOFTNOTE_H
#define SOFTNOTE_H




#include <QMainWindow>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui { class SoftNote; }
QT_END_NAMESPACE

class SoftNote : public QMainWindow
{
    Q_OBJECT

public:
    SoftNote(QWidget *parent = nullptr);
    ~SoftNote();

private slots:

    void clearTextandFilePath();
    void on_actionNew_triggered();

    void on_actionOpen_triggered();

    void on_actionSave_triggered();

    void on_actionSave_as_triggered();

    void on_actionCut_triggered();

    void on_actionAbout_triggered();

    void on_actionPrint_triggered();

    void on_newButton_clicked();



//    void on_copyButton_clicked();

//    void on_pasteButton_clicked();

    void on_colorButton_clicked();

    void on_highlighterButton_clicked();

//    void on_undoButton_clicked();

//    void on_redo_clicked();

    void on_textEdit_textChanged();

    void on_actionEmail_triggered();

     void putEmail();

    void on_actionLetters_triggered();

     void putLetters();


     void on_actionCopy_triggered();

     void on_actionPaste_triggered();

     void on_actionUndo_triggered();

     void on_actionRedo_triggered();

     void on_pomodoro_clicked();

     void on_actionFonts_triggered();

     void display_file_name(QString);

     void hide_extrainfo();

     void interval_time();

     void on_flashCard_clicked();

     void on_pushButton_clicked();

     void on_todo_clicked();

 private:
    Ui::SoftNote *ui;

    QString file_path;
    QString file_name;


    // Create a QTimer
    QTimer* timer = new QTimer(this);

    QString Actual_file_name;
    bool textChanged;
};
#endif // SOFTNOTE_H


