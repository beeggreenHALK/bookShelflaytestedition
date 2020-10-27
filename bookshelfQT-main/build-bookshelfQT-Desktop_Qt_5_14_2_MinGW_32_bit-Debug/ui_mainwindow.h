/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action;
    QAction *action_2;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_BShelf;
    QVBoxLayout *verticalLayout_4;
    QListWidget *listWidget_BShelfs;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_addBShelf;
    QPushButton *pushButton_delBShelf;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_Shelf;
    QVBoxLayout *verticalLayout_5;
    QListWidget *listWidget_Shelfs;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_addSelf;
    QPushButton *pushButton_delShelf;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox_Books;
    QVBoxLayout *verticalLayout_6;
    QListWidget *listWidget_Books;
    QLabel *label;
    QLineEdit *lineEdit_author;
    QLabel *label_2;
    QLineEdit *lineEdit_name;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QSpinBox *spinBox_pages;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_addBook;
    QPushButton *pushButton_delBook;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(612, 385);
        action = new QAction(MainWindow);
        action->setObjectName(QString::fromUtf8("action"));
        action_2 = new QAction(MainWindow);
        action_2->setObjectName(QString::fromUtf8("action_2"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox_BShelf = new QGroupBox(centralwidget);
        groupBox_BShelf->setObjectName(QString::fromUtf8("groupBox_BShelf"));
        verticalLayout_4 = new QVBoxLayout(groupBox_BShelf);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        listWidget_BShelfs = new QListWidget(groupBox_BShelf);
        listWidget_BShelfs->setObjectName(QString::fromUtf8("listWidget_BShelfs"));

        verticalLayout_4->addWidget(listWidget_BShelfs);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButton_addBShelf = new QPushButton(groupBox_BShelf);
        pushButton_addBShelf->setObjectName(QString::fromUtf8("pushButton_addBShelf"));

        horizontalLayout_2->addWidget(pushButton_addBShelf);

        pushButton_delBShelf = new QPushButton(groupBox_BShelf);
        pushButton_delBShelf->setObjectName(QString::fromUtf8("pushButton_delBShelf"));

        horizontalLayout_2->addWidget(pushButton_delBShelf);


        verticalLayout_4->addLayout(horizontalLayout_2);


        verticalLayout->addWidget(groupBox_BShelf);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox_Shelf = new QGroupBox(centralwidget);
        groupBox_Shelf->setObjectName(QString::fromUtf8("groupBox_Shelf"));
        verticalLayout_5 = new QVBoxLayout(groupBox_Shelf);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        listWidget_Shelfs = new QListWidget(groupBox_Shelf);
        listWidget_Shelfs->setObjectName(QString::fromUtf8("listWidget_Shelfs"));

        verticalLayout_5->addWidget(listWidget_Shelfs);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pushButton_addSelf = new QPushButton(groupBox_Shelf);
        pushButton_addSelf->setObjectName(QString::fromUtf8("pushButton_addSelf"));

        horizontalLayout_3->addWidget(pushButton_addSelf);

        pushButton_delShelf = new QPushButton(groupBox_Shelf);
        pushButton_delShelf->setObjectName(QString::fromUtf8("pushButton_delShelf"));

        horizontalLayout_3->addWidget(pushButton_delShelf);


        verticalLayout_5->addLayout(horizontalLayout_3);


        verticalLayout_2->addWidget(groupBox_Shelf);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        groupBox_Books = new QGroupBox(centralwidget);
        groupBox_Books->setObjectName(QString::fromUtf8("groupBox_Books"));
        verticalLayout_6 = new QVBoxLayout(groupBox_Books);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        listWidget_Books = new QListWidget(groupBox_Books);
        listWidget_Books->setObjectName(QString::fromUtf8("listWidget_Books"));

        verticalLayout_6->addWidget(listWidget_Books);

        label = new QLabel(groupBox_Books);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_6->addWidget(label);

        lineEdit_author = new QLineEdit(groupBox_Books);
        lineEdit_author->setObjectName(QString::fromUtf8("lineEdit_author"));

        verticalLayout_6->addWidget(lineEdit_author);

        label_2 = new QLabel(groupBox_Books);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_6->addWidget(label_2);

        lineEdit_name = new QLineEdit(groupBox_Books);
        lineEdit_name->setObjectName(QString::fromUtf8("lineEdit_name"));

        verticalLayout_6->addWidget(lineEdit_name);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_3 = new QLabel(groupBox_Books);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_4->addWidget(label_3);

        spinBox_pages = new QSpinBox(groupBox_Books);
        spinBox_pages->setObjectName(QString::fromUtf8("spinBox_pages"));
        spinBox_pages->setMaximum(5000);

        horizontalLayout_4->addWidget(spinBox_pages);


        verticalLayout_6->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        pushButton_addBook = new QPushButton(groupBox_Books);
        pushButton_addBook->setObjectName(QString::fromUtf8("pushButton_addBook"));

        horizontalLayout_5->addWidget(pushButton_addBook);

        pushButton_delBook = new QPushButton(groupBox_Books);
        pushButton_delBook->setObjectName(QString::fromUtf8("pushButton_delBook"));

        horizontalLayout_5->addWidget(pushButton_delBook);


        verticalLayout_6->addLayout(horizontalLayout_5);


        verticalLayout_3->addWidget(groupBox_Books);


        horizontalLayout->addLayout(verticalLayout_3);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 612, 21));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menu->addAction(action);
        menu->addAction(action_2);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        action->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        action_2->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214", nullptr));
        groupBox_BShelf->setTitle(QCoreApplication::translate("MainWindow", "\320\250\320\272\320\260\321\204\321\213", nullptr));
        pushButton_addBShelf->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        pushButton_delBShelf->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        groupBox_Shelf->setTitle(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\273\320\272\320\270", nullptr));
        pushButton_addSelf->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        pushButton_delShelf->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        groupBox_Books->setTitle(QCoreApplication::translate("MainWindow", "\320\232\320\275\320\270\320\263\320\270", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\220\320\262\321\202\320\276\321\200", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\241\321\202\321\200\320\260\320\275\320\270\321\206\321\213", nullptr));
        pushButton_addBook->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        pushButton_delBook->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\320\244\320\260\320\271\320\273", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
