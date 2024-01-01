#include "softnote.h"
#include "ui_softnote.h"

#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>
#include <QFontDialog>
#include <QFont>
#include <QColorDialog>
#include <QColor>
#include <QPrinter>
#include <QPrintDialog>

#include <QCoreApplication>
#include <QProcess>
#include <QTimer>







SoftNote::SoftNote(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::SoftNote)
{
    ui->setupUi(this);

    textChanged = false;
 // ui->textEdit->setPlaceholderText("Type your text here...");
    ui->textEdit->setStyleSheet("QTextEdit { font-size: 12px; }");



    display_file_name(" ");

}





SoftNote::~SoftNote()
{
    delete ui;
}

void SoftNote::clearTextandFilePath(){

    file_path= "";
    file_name = "";
    ui->textEdit->setText("");
    display_file_name(" ");


}


void SoftNote::interval_time(){




    // Connect the timeout signal to the hide extraInfo
    connect(timer, &QTimer::timeout, this, &SoftNote::hide_extrainfo);


    // Set the time interval to 2000 milliseconds (2 seconds)
    timer->start(2000);


}

void SoftNote::hide_extrainfo(){

    display_file_name(" ");
    timer->stop();
}


void SoftNote::display_file_name(QString extraInfo = ""){



    if(extraInfo != ""){
        interval_time();
    }

    // Use QFileInfo to extract the file name
    QFileInfo fileInfo(file_name);
    Actual_file_name= fileInfo.fileName();


    QString dynamicString = Actual_file_name;

    if(dynamicString == ""){
        dynamicString = "*Untitled";
    }
    QString dynamicContact = dynamicString + "-SoftNote " + extraInfo;
    setWindowTitle(dynamicContact);


}




void SoftNote::on_newButton_clicked()
{

    if(!ui->textEdit->toPlainText().isEmpty() && textChanged){




        int result = QMessageBox::question(this, "Confirmation", "Do you want to save changes to " + (Actual_file_name == "" ? "any" : Actual_file_name) + "?",
                                           QMessageBox::Yes | QMessageBox::No, QMessageBox::No);

        if (result == QMessageBox::Yes) {

            if(file_path.isEmpty()){

                 on_actionSave_as_triggered();

            }else{
                 on_actionSave_triggered();
            }



        }

        clearTextandFilePath();
        textChanged = false;
        ui->textEdit->setFontFamily("Segoe UI");
        ui->textEdit->setPlaceholderText("Type your text here...");


    }else{
        clearTextandFilePath();
        textChanged = false;
        ui->textEdit->setFontFamily("Segoe UI");
        ui->textEdit->setPlaceholderText("Type your text here...");


    }

//    file_path= "";
//    ui->textEdit->setText("");

}

void SoftNote::on_actionNew_triggered()
{

    //    clearTextandFilePath();
    on_newButton_clicked();


    //    file_path= "";
    //    ui->textEdit->setText("");

}


void SoftNote::on_actionOpen_triggered()
{

    if(!ui->textEdit->toPlainText().isEmpty() && textChanged){



        int result = QMessageBox::question(this, "Confirmation", "Do you want to save changes to "+(Actual_file_name == "" ? "any" : Actual_file_name) +"?",
                                           QMessageBox::Yes | QMessageBox::No, QMessageBox::No);

        if (result == QMessageBox::Yes) {

            if(file_path.isEmpty()){

                 on_actionSave_as_triggered();

            }else{

                 on_actionSave_triggered();
            }


            }
        }




    file_name = QFileDialog::getOpenFileName(this,"Opening file");
    QFile file(file_name);
    file_path = file_name;

    if(!file.open(QFile::ReadOnly | QFile::Text)){

        return;
    };

    QTextStream in(&file);
    QString text = in.readAll();
    ui->textEdit->setPlainText(text);
    textChanged = false;
    file.close();

    display_file_name();
}


void SoftNote::on_actionSave_triggered()
{


    if(file_path.isEmpty()){
         file_name = QFileDialog::getSaveFileName(this, "Saving a file");


        }

    QFile file(file_name);
        file_path = file_name;



    if(!file.open(QFile::WriteOnly | QFile::Text)){

//        QMessageBox::warning(this,"Info","You didnot choose a file");
        return;
    };

    QString text = ui->textEdit->toPlainText();
    QTextStream out(&file);
    out << text;
    file.flush();
    file.close();
    textChanged = false;
    display_file_name("Saved");


}



void SoftNote::on_actionSave_as_triggered()
{

    file_name = QFileDialog::getSaveFileName(this, "Saving a file");
    QFile file(file_name);
    file_path= file_name;



    if(!file.open(QFile::WriteOnly | QFile::Text)){

//        QMessageBox::warning(this,"Info","You didnot choose a file");
        return;
    };

    QString text = ui->textEdit->toPlainText();
    QTextStream out(&file);
    out << text;
    file.flush();
    file.close();
    textChanged = false;
    display_file_name("Saved");


}


void SoftNote::on_actionCut_triggered()
{
     ui->textEdit->cut();
}


void SoftNote::on_actionAbout_triggered()
{
     QString about_text;

     about_text = "Project: SoftNote\n";
     about_text += "Date : 2023/10/11\n";
     about_text += "Developed By: Sauhardha Kafle,Adarsha Pant,Arjit Chand,Pranaya Shrestha\n";

     QMessageBox::about(this,"About SoftNote", about_text);

}


void SoftNote::on_actionPrint_triggered()
{
     QPrinter printer;
     printer.setPrinterName("SauhardhaPrinter");
     QPrintDialog dialog(&printer, this);

     if(dialog.exec() == QDialog::Rejected) return;
     ui->textEdit->print(&printer);
}








void SoftNote::on_colorButton_clicked()
{
       QColor color = QColorDialog:: getColor(Qt::white, this , "Choosing Text Color");
       if(color.isValid()){
        ui->textEdit->setTextColor(color);
       }

}


void SoftNote::on_highlighterButton_clicked()
{
       QColor color = QColorDialog:: getColor(Qt::white, this , "Choosing HighLighter");

       if(color.isValid()){
        ui->textEdit->setTextBackgroundColor(color);
       }
}




void SoftNote::on_textEdit_textChanged()
{
     textChanged = true;
     if (ui->textEdit->toPlainText().isEmpty() && !ui->textEdit->hasFocus()) {
        ui->textEdit->setStyleSheet("QTextEdit { color: gray; }"
                                    "QTextEdit::placeholder { color: gray; }");
     } else {
        ui->textEdit->setStyleSheet("QTextEdit { color: black; }"
                                    "QTextEdit::placeholder { color: gray; }");
     }
}


void SoftNote::putEmail(){

     ui->textEdit->setText("");


     ui->textEdit->setText(
"Subject: [Your Subject]\n"
         "\n"

"Dear [Recipient's Name],\n"

"I trust this email finds you well. My name is [Your Full Name], and I am reaching out to you regarding [the purpose of your email].\n"
"\n"
"[Provide relevant details or context for your message.]\n"
"\n"
"I am interested in [explain your interest or purpose], and I believe that [reason why you are reaching out] would be mutually beneficial.\n"
"\n"
"[Include any additional information, questions, or requests.]\n"
"\n"
"I appreciate your time and consideration. Please feel free to respond at your earliest convenience. I look forward to the possibility of [desired outcome].\n"

"Thank you and best regards,\n"

"[Your Full Name]\n"
"[Your Contact Information]\n"

         );

}

void SoftNote::on_actionEmail_triggered()
{
     if(!ui->textEdit->toPlainText().isEmpty()){

        int result = QMessageBox::question(this, "Confirmation", "This will replace your text and cannot be undo. Are you sure?",
                                           QMessageBox::Yes | QMessageBox::No, QMessageBox::No);

        if (result == QMessageBox::Yes) {
            this->putEmail();
        } else {
            return;

        }


     }else{
        this->putEmail();
     }
}

void SoftNote::putLetters(){

     ui->textEdit->setText("");

     ui->textEdit->setText(
"Your Name\n"
"Your Address\n"
"City, State, ZIP Code\n"
"Date\n"
         "\n"

"Recipient's Name\n"
"Recipient's Address\n"
"City, State, ZIP Code\n"

         "\n"

"Dear Recipient's Name,\n"
         "\n"

"I trust this letter finds you well. I am reaching out to convey my greetings, gratitude, congratulations, etc. [Briefly explain the purpose of your letter and provide any necessary context.]\n"

"[Include additional information, personal anecdotes, or specific details.]\n"

         "\n"

"Thank you for your time and consideration. I look forward to [desired outcome.]\n"

"Best regards,\n"

"Your Full Name\n"
"Your Contact Information\n"
);



}


void SoftNote::on_actionLetters_triggered()
{
     if(!ui->textEdit->toPlainText().isEmpty()){

        int result = QMessageBox::question(this, "Confirmation", "This will replace your text and cannot be undo. Are you sure?",
                                           QMessageBox::Yes | QMessageBox::No, QMessageBox::No);

        if (result == QMessageBox::Yes) {
            this->putLetters();
        } else {
            return;

        }


     }else{
        this->putLetters();
     }

}


void SoftNote::on_actionCopy_triggered()
{

     ui->textEdit->copy();
}


void SoftNote::on_actionPaste_triggered()
{
      ui->textEdit->paste();

}


void SoftNote::on_actionUndo_triggered()
{
       ui->textEdit->undo();

}


void SoftNote::on_actionRedo_triggered()
{
       ui->textEdit->redo();
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////



void SoftNote::on_pomodoro_clicked()
{


//        QString pomodroPath = QCoreApplication::applicationDirPath() + "/executable_for_pomodoro/pomodro.exe";

       QString pomodroPath = QCoreApplication::applicationDirPath() + "/ep_pomo/pomodro.exe";

        // Check if the file exists before attempting to start the process
        if (QFile::exists(pomodroPath)) {

            QProcess pomodroProcess;
            pomodroProcess.startDetached(pomodroPath);

            //        pomodroProcess.waitForFinished(-1);  // Wait for the process to finish
        } else {
            qDebug() << "Error: File not found - " << pomodroPath;
        }


}


void SoftNote::on_actionFonts_triggered()
{
    // Open a font dialog
        bool ok;
        QFont font = QFontDialog::getFont(&ok, QFont("Helvetica", 14), this, tr("Select Font"));

        // Check if the user clicked OK
        if (ok) {


            ui->textEdit->setPlaceholderText("Type your text here...Note: Font is selected");
            // Set the selected font to the QTextEdit
            ui->textEdit->setFont(font);
        } else {
            // User clicked Cancel
            qDebug() << "Font selection canceled.";
        }
}


void SoftNote::on_flashCard_clicked()
{



            QString flashPath = QCoreApplication::applicationDirPath() + "/flash card/flash_card_project_test1.exe";

            // Check if the file exists before attempting to start the process
            if (QFile::exists(flashPath)) {

            QProcess flashProcess;
            flashProcess.startDetached(flashPath);

            //        pomodroProcess.waitForFinished(-1);  // Wait for the process to finish
            } else {
            qDebug() << "Error: File not found - " << flashPath;
            }



}


//void SoftNote::on_pushButton_clicked()
//{
//            QString flashPath = QCoreApplication::applicationDirPath() + "/flash card/flash_card_project_test1.exe";

//            // Check if the file exists before attempting to start the process
//            if (QFile::exists(flashPath)) {

//            QProcess flashProcess;
//            flashProcess.startDetached(flashPath);

//            //        pomodroProcess.waitForFinished(-1);  // Wait for the process to finish
//            } else {
//            qDebug() << "Error: File not found - " << flashPath;
//            }
//}


void SoftNote::on_pushButton_clicked()
{

            QString flashPath = QCoreApplication::applicationDirPath() + "/e_studysession/untitled2.exe";

            // Check if the file exists before attempting to start the process
            if (QFile::exists(flashPath)) {

            QProcess flashProcess;
            flashProcess.startDetached(flashPath);

            //        pomodroProcess.waitForFinished(-1);  // Wait for the process to finish
            } else {
            qDebug() << "Error: File not found - " << flashPath;
            }

}

