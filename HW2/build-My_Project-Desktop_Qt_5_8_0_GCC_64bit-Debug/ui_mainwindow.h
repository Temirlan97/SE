/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label_login;
    QWidget *widget;
    QFormLayout *formLayout;
    QLabel *label_pass;
    QLabel *label_user;
    QLineEdit *lineEdit_filename;
    QLineEdit *lineEdit_text;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_cancel;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_write;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 300);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label_login = new QLabel(centralWidget);
        label_login->setObjectName(QStringLiteral("label_login"));
        label_login->setGeometry(QRect(160, 40, 101, 17));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(2, 72, 391, 71));
        formLayout = new QFormLayout(widget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_pass = new QLabel(widget);
        label_pass->setObjectName(QStringLiteral("label_pass"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_pass);

        label_user = new QLabel(widget);
        label_user->setObjectName(QStringLiteral("label_user"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_user);

        lineEdit_filename = new QLineEdit(widget);
        lineEdit_filename->setObjectName(QStringLiteral("lineEdit_filename"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_filename);

        lineEdit_text = new QLineEdit(widget);
        lineEdit_text->setObjectName(QStringLiteral("lineEdit_text"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit_text->sizePolicy().hasHeightForWidth());
        lineEdit_text->setSizePolicy(sizePolicy);

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEdit_text);

        widget1 = new QWidget(centralWidget);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(70, 150, 281, 51));
        horizontalLayout = new QHBoxLayout(widget1);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_cancel = new QPushButton(widget1);
        pushButton_cancel->setObjectName(QStringLiteral("pushButton_cancel"));

        horizontalLayout->addWidget(pushButton_cancel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_write = new QPushButton(widget1);
        pushButton_write->setObjectName(QStringLiteral("pushButton_write"));

        horizontalLayout->addWidget(pushButton_write);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label_login->setText(QApplication::translate("MainWindow", "Write to file", Q_NULLPTR));
        label_pass->setText(QApplication::translate("MainWindow", "Text:", Q_NULLPTR));
        label_user->setText(QApplication::translate("MainWindow", "File name:", Q_NULLPTR));
        pushButton_cancel->setText(QApplication::translate("MainWindow", "Cancel", Q_NULLPTR));
        pushButton_write->setText(QApplication::translate("MainWindow", "WRITE", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
