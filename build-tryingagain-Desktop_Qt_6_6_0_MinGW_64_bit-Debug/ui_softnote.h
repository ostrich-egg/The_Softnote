/********************************************************************************
** Form generated from reading UI file 'softnote.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SOFTNOTE_H
#define UI_SOFTNOTE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SoftNote
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSave_as;
    QAction *actionPrint;
    QAction *actionAbout;
    QAction *actionCut;
    QAction *actionEmail;
    QAction *actionLetters;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionRedo;
    QAction *actionUndo;
    QAction *actionFonts;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QPushButton *newButton;
    QPushButton *colorButton;
    QPushButton *highlighterButton;
    QPushButton *flashCard;
    QPushButton *pomodoro;
    QPushButton *pushButton;
    QPushButton *todo;
    QTextEdit *textEdit;
    QStatusBar *statusbar;
    QMenuBar *menuBar;
    QMenu *menuHome;
    QMenu *menuTemplates;

    void setupUi(QMainWindow *SoftNote)
    {
        if (SoftNote->objectName().isEmpty())
            SoftNote->setObjectName("SoftNote");
        SoftNote->resize(952, 574);
        QFont font;
        font.setBold(true);
        SoftNote->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/newpng/penIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        SoftNote->setWindowIcon(icon);
        SoftNote->setStyleSheet(QString::fromUtf8("margin-top:5px;\n"
"padding-left:40px;\n"
"padding-right:40px;\n"
"padding-bottom:0px;\n"
"margin-bottom:0px;\n"
"background-color:white;\n"
"\n"
"\n"
""));
        SoftNote->setIconSize(QSize(50, 50));
        actionNew = new QAction(SoftNote);
        actionNew->setObjectName("actionNew");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/newpng/newIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon1);
        actionOpen = new QAction(SoftNote);
        actionOpen->setObjectName("actionOpen");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/newpng/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon2);
        actionSave = new QAction(SoftNote);
        actionSave->setObjectName("actionSave");
        actionSave_as = new QAction(SoftNote);
        actionSave_as->setObjectName("actionSave_as");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/newpng/saveas.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_as->setIcon(icon3);
        actionPrint = new QAction(SoftNote);
        actionPrint->setObjectName("actionPrint");
        actionAbout = new QAction(SoftNote);
        actionAbout->setObjectName("actionAbout");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/newpng/about.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout->setIcon(icon4);
        actionCut = new QAction(SoftNote);
        actionCut->setObjectName("actionCut");
        actionEmail = new QAction(SoftNote);
        actionEmail->setObjectName("actionEmail");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/newpng/email.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEmail->setIcon(icon5);
        actionLetters = new QAction(SoftNote);
        actionLetters->setObjectName("actionLetters");
        actionCopy = new QAction(SoftNote);
        actionCopy->setObjectName("actionCopy");
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/newpng/copyIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy->setIcon(icon6);
        actionPaste = new QAction(SoftNote);
        actionPaste->setObjectName("actionPaste");
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/newpng/pasteIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaste->setIcon(icon7);
        actionRedo = new QAction(SoftNote);
        actionRedo->setObjectName("actionRedo");
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/newpng/redoIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRedo->setIcon(icon8);
        actionUndo = new QAction(SoftNote);
        actionUndo->setObjectName("actionUndo");
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/newpng/undoIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUndo->setIcon(icon9);
        actionFonts = new QAction(SoftNote);
        actionFonts->setObjectName("actionFonts");
        centralwidget = new QWidget(SoftNote);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setEnabled(true);
        groupBox->setStyleSheet(QString::fromUtf8("background-color:rgba(61, 61, 61, 1);\n"
"border-radius:5px;\n"
"padding:0px;\n"
"margin-left:40px;\n"
"margin-right:40px;\n"
"margin-top:0px;"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName("horizontalLayout");
        newButton = new QPushButton(groupBox);
        newButton->setObjectName("newButton");
        newButton->setStyleSheet(QString::fromUtf8("color:white;"));
        newButton->setIcon(icon1);
        newButton->setIconSize(QSize(30, 30));

        horizontalLayout->addWidget(newButton);

        colorButton = new QPushButton(groupBox);
        colorButton->setObjectName("colorButton");
        colorButton->setStyleSheet(QString::fromUtf8("color:white;"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/newpng/colorIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        colorButton->setIcon(icon10);
        colorButton->setIconSize(QSize(30, 30));

        horizontalLayout->addWidget(colorButton);

        highlighterButton = new QPushButton(groupBox);
        highlighterButton->setObjectName("highlighterButton");
        highlighterButton->setStyleSheet(QString::fromUtf8("color:white;"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/newpng/highlighter.png"), QSize(), QIcon::Normal, QIcon::Off);
        highlighterButton->setIcon(icon11);
        highlighterButton->setIconSize(QSize(30, 30));

        horizontalLayout->addWidget(highlighterButton);

        flashCard = new QPushButton(groupBox);
        flashCard->setObjectName("flashCard");
        flashCard->setToolTipDuration(-1);
        flashCard->setStyleSheet(QString::fromUtf8("color:white;"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/newpng/flashCard.png"), QSize(), QIcon::Normal, QIcon::Off);
        flashCard->setIcon(icon12);
        flashCard->setIconSize(QSize(30, 30));
        flashCard->setCheckable(false);

        horizontalLayout->addWidget(flashCard);

        pomodoro = new QPushButton(groupBox);
        pomodoro->setObjectName("pomodoro");
        pomodoro->setStyleSheet(QString::fromUtf8("color:white;\n"
"\n"
""));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/newpng/pomodoro.png"), QSize(), QIcon::Normal, QIcon::Off);
        pomodoro->setIcon(icon13);
        pomodoro->setIconSize(QSize(30, 30));

        horizontalLayout->addWidget(pomodoro);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName("pushButton");
        pushButton->setStyleSheet(QString::fromUtf8("color:white;"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/newpng/studybook.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon14);
        pushButton->setIconSize(QSize(30, 31));

        horizontalLayout->addWidget(pushButton);

        todo = new QPushButton(groupBox);
        todo->setObjectName("todo");
        todo->setStyleSheet(QString::fromUtf8("color:white;"));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/newpng/todo.png"), QSize(), QIcon::Normal, QIcon::Off);
        todo->setIcon(icon15);
        todo->setIconSize(QSize(30, 30));

        horizontalLayout->addWidget(todo);


        verticalLayout_2->addWidget(groupBox);

        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI")});
        font1.setPointSize(14);
        font1.setBold(false);
        font1.setItalic(false);
        textEdit->setFont(font1);
        textEdit->setStyleSheet(QString::fromUtf8("border-radius:5px;\n"
"border:1px solid transparent;\n"
"font: 14pt \"Segoe UI\";\n"
"\n"
"padding-bottom:0px;\n"
"margin-bottom:0px;\n"
"background-color:white;\n"
"\n"
"\n"
"\n"
""));
        textEdit->setAutoFormatting(QTextEdit::AutoBulletList);
        textEdit->setTabChangesFocus(true);
        textEdit->setCursorWidth(1);
        textEdit->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse|Qt::TextBrowserInteraction|Qt::TextEditable|Qt::TextEditorInteraction|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout_2->addWidget(textEdit);

        SoftNote->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(SoftNote);
        statusbar->setObjectName("statusbar");
        SoftNote->setStatusBar(statusbar);
        menuBar = new QMenuBar(SoftNote);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 952, 46));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(menuBar->sizePolicy().hasHeightForWidth());
        menuBar->setSizePolicy(sizePolicy);
        menuBar->setMinimumSize(QSize(0, 20));
        menuBar->setSizeIncrement(QSize(0, 0));
        menuBar->setBaseSize(QSize(0, 0));
        menuBar->setStyleSheet(QString::fromUtf8("QMenuBar{\n"
"margin:0px;\n"
"padding:10px;\n"
"background-color:transparent;\n"
"}\n"
"\n"
"QMenuBar::item{\n"
"\n"
"padding:5px 10px;\n"
"background-color:transparent;\n"
"}\n"
"\n"
"QMenu {\n"
"\n"
"color:white;\n"
"background-color:rgb(61, 61, 61);\n"
"\n"
"}\n"
"\n"
""));
        menuHome = new QMenu(menuBar);
        menuHome->setObjectName("menuHome");
        menuHome->setMinimumSize(QSize(0, 50));
        QFont font2;
        font2.setPointSize(10);
        menuHome->setFont(font2);
        menuHome->setStyleSheet(QString::fromUtf8(""));
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/newpng/Home.png"), QSize(), QIcon::Normal, QIcon::Off);
        menuHome->setIcon(icon16);
        menuTemplates = new QMenu(menuBar);
        menuTemplates->setObjectName("menuTemplates");
        menuTemplates->setGeometry(QRect(397, 116, 222, 100));
        menuTemplates->setMinimumSize(QSize(0, 0));
        menuTemplates->setBaseSize(QSize(0, 0));
        menuTemplates->setFont(font2);
        menuTemplates->setStyleSheet(QString::fromUtf8("color:white;"));
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/newpng/templates.png"), QSize(), QIcon::Normal, QIcon::Off);
        menuTemplates->setIcon(icon17);
        SoftNote->setMenuBar(menuBar);

        menuBar->addAction(menuHome->menuAction());
        menuBar->addAction(menuTemplates->menuAction());
        menuHome->addAction(actionNew);
        menuHome->addAction(actionOpen);
        menuHome->addSeparator();
        menuHome->addAction(actionFonts);
        menuHome->addSeparator();
        menuHome->addAction(actionCut);
        menuHome->addAction(actionCopy);
        menuHome->addAction(actionPaste);
        menuHome->addSeparator();
        menuHome->addAction(actionSave);
        menuHome->addAction(actionSave_as);
        menuHome->addSeparator();
        menuHome->addAction(actionUndo);
        menuHome->addAction(actionRedo);
        menuHome->addSeparator();
        menuHome->addAction(actionPrint);
        menuHome->addAction(actionAbout);
        menuTemplates->addAction(actionEmail);
        menuTemplates->addAction(actionLetters);

        retranslateUi(SoftNote);

        QMetaObject::connectSlotsByName(SoftNote);
    } // setupUi

    void retranslateUi(QMainWindow *SoftNote)
    {
        SoftNote->setWindowTitle(QCoreApplication::translate("SoftNote", "SoftNote", nullptr));
        actionNew->setText(QCoreApplication::translate("SoftNote", "New", nullptr));
#if QT_CONFIG(shortcut)
        actionNew->setShortcut(QCoreApplication::translate("SoftNote", "Ctrl+Shift+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionOpen->setText(QCoreApplication::translate("SoftNote", "Open", nullptr));
#if QT_CONFIG(shortcut)
        actionOpen->setShortcut(QCoreApplication::translate("SoftNote", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave->setText(QCoreApplication::translate("SoftNote", "Save", nullptr));
#if QT_CONFIG(shortcut)
        actionSave->setShortcut(QCoreApplication::translate("SoftNote", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave_as->setText(QCoreApplication::translate("SoftNote", "Save as", nullptr));
#if QT_CONFIG(shortcut)
        actionSave_as->setShortcut(QCoreApplication::translate("SoftNote", "Ctrl+Shift+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPrint->setText(QCoreApplication::translate("SoftNote", "Print", nullptr));
#if QT_CONFIG(shortcut)
        actionPrint->setShortcut(QCoreApplication::translate("SoftNote", "Ctrl+P", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAbout->setText(QCoreApplication::translate("SoftNote", "About", nullptr));
#if QT_CONFIG(shortcut)
        actionAbout->setShortcut(QCoreApplication::translate("SoftNote", "Ctrl+I", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCut->setText(QCoreApplication::translate("SoftNote", "Cut", nullptr));
#if QT_CONFIG(shortcut)
        actionCut->setShortcut(QCoreApplication::translate("SoftNote", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
        actionEmail->setText(QCoreApplication::translate("SoftNote", "Email", nullptr));
#if QT_CONFIG(shortcut)
        actionEmail->setShortcut(QCoreApplication::translate("SoftNote", "Alt+E", nullptr));
#endif // QT_CONFIG(shortcut)
        actionLetters->setText(QCoreApplication::translate("SoftNote", "Letters", nullptr));
#if QT_CONFIG(shortcut)
        actionLetters->setShortcut(QCoreApplication::translate("SoftNote", "Alt+L", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCopy->setText(QCoreApplication::translate("SoftNote", "Copy", nullptr));
#if QT_CONFIG(shortcut)
        actionCopy->setShortcut(QCoreApplication::translate("SoftNote", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPaste->setText(QCoreApplication::translate("SoftNote", "Paste", nullptr));
#if QT_CONFIG(shortcut)
        actionPaste->setShortcut(QCoreApplication::translate("SoftNote", "Ctrl+V", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRedo->setText(QCoreApplication::translate("SoftNote", "Redo", nullptr));
#if QT_CONFIG(shortcut)
        actionRedo->setShortcut(QCoreApplication::translate("SoftNote", "Ctrl+R", nullptr));
#endif // QT_CONFIG(shortcut)
        actionUndo->setText(QCoreApplication::translate("SoftNote", "Undo", nullptr));
#if QT_CONFIG(shortcut)
        actionUndo->setShortcut(QCoreApplication::translate("SoftNote", "Ctrl+U", nullptr));
#endif // QT_CONFIG(shortcut)
        actionFonts->setText(QCoreApplication::translate("SoftNote", "Fonts", nullptr));
        groupBox->setTitle(QString());
#if QT_CONFIG(tooltip)
        newButton->setToolTip(QCoreApplication::translate("SoftNote", "New", nullptr));
#endif // QT_CONFIG(tooltip)
        newButton->setText(QString());
#if QT_CONFIG(tooltip)
        colorButton->setToolTip(QCoreApplication::translate("SoftNote", "Color", nullptr));
#endif // QT_CONFIG(tooltip)
        colorButton->setText(QString());
#if QT_CONFIG(tooltip)
        highlighterButton->setToolTip(QCoreApplication::translate("SoftNote", "HighLighter", nullptr));
#endif // QT_CONFIG(tooltip)
        highlighterButton->setText(QString());
#if QT_CONFIG(tooltip)
        flashCard->setToolTip(QCoreApplication::translate("SoftNote", "Flash Card", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        flashCard->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        flashCard->setWhatsThis(QString());
#endif // QT_CONFIG(whatsthis)
        flashCard->setText(QString());
#if QT_CONFIG(shortcut)
        flashCard->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(tooltip)
        pomodoro->setToolTip(QCoreApplication::translate("SoftNote", "Pomodoro", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        pomodoro->setStatusTip(QCoreApplication::translate("SoftNote", "Pomodoro", nullptr));
#endif // QT_CONFIG(statustip)
        pomodoro->setText(QString());
#if QT_CONFIG(tooltip)
        pushButton->setToolTip(QCoreApplication::translate("SoftNote", "Study Session", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton->setText(QString());
#if QT_CONFIG(tooltip)
        todo->setToolTip(QCoreApplication::translate("SoftNote", "Todo", nullptr));
#endif // QT_CONFIG(tooltip)
        todo->setText(QString());
        textEdit->setHtml(QCoreApplication::translate("SoftNote", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:14pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        textEdit->setPlaceholderText(QCoreApplication::translate("SoftNote", "Type your text here...", nullptr));
        menuHome->setTitle(QCoreApplication::translate("SoftNote", "Home", nullptr));
#if QT_CONFIG(tooltip)
        menuTemplates->setToolTip(QCoreApplication::translate("SoftNote", "Templates", nullptr));
#endif // QT_CONFIG(tooltip)
        menuTemplates->setTitle(QCoreApplication::translate("SoftNote", "Templates", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SoftNote: public Ui_SoftNote {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SOFTNOTE_H
