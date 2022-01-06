/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QTabWidget *tabWidget;
    QWidget *manTab;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QGridLayout *gridLayout;
    QSlider *happySadSlider;
    QSlider *widenessSlider;
    QLabel *label_2;
    QSlider *mouseWidthSlider;
    QLabel *label_4;
    QSlider *eyeWidthSlider;
    QLabel *label_3;
    QLabel *label_5;
    QSlider *browWidthSlider;
    QLabel *label_6;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(578, 600);
        MainWindow->setWindowOpacity(1.000000000000000);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        manTab = new QWidget();
        manTab->setObjectName(QString::fromUtf8("manTab"));
        verticalLayout = new QVBoxLayout(manTab);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(manTab);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        happySadSlider = new QSlider(manTab);
        happySadSlider->setObjectName(QString::fromUtf8("happySadSlider"));
        happySadSlider->setMinimum(-10);
        happySadSlider->setMaximum(10);
        happySadSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(happySadSlider, 4, 1, 1, 1);

        widenessSlider = new QSlider(manTab);
        widenessSlider->setObjectName(QString::fromUtf8("widenessSlider"));
        widenessSlider->setMinimum(2);
        widenessSlider->setMaximum(10);
        widenessSlider->setValue(6);
        widenessSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(widenessSlider, 3, 1, 1, 1);

        label_2 = new QLabel(manTab);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(label_2, 4, 0, 1, 1);

        mouseWidthSlider = new QSlider(manTab);
        mouseWidthSlider->setObjectName(QString::fromUtf8("mouseWidthSlider"));
        mouseWidthSlider->setMinimum(21);
        mouseWidthSlider->setMaximum(43);
        mouseWidthSlider->setValue(32);
        mouseWidthSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(mouseWidthSlider, 0, 1, 1, 1);

        label_4 = new QLabel(manTab);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        eyeWidthSlider = new QSlider(manTab);
        eyeWidthSlider->setObjectName(QString::fromUtf8("eyeWidthSlider"));
        eyeWidthSlider->setMinimum(1);
        eyeWidthSlider->setMaximum(5);
        eyeWidthSlider->setValue(3);
        eyeWidthSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(eyeWidthSlider, 2, 1, 1, 1);

        label_3 = new QLabel(manTab);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        label_5 = new QLabel(manTab);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 2, 0, 1, 1);

        browWidthSlider = new QSlider(manTab);
        browWidthSlider->setObjectName(QString::fromUtf8("browWidthSlider"));
        browWidthSlider->setMinimum(4);
        browWidthSlider->setMaximum(12);
        browWidthSlider->setValue(8);
        browWidthSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(browWidthSlider, 1, 1, 1, 1);

        label_6 = new QLabel(manTab);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 1, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);

        tabWidget->addTab(manTab, QString());

        horizontalLayout->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 578, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "sominnn examples", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "No image", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Angry/Sad:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Wideness:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Mouse width:", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Eye width:", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Brow width:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(manTab), QCoreApplication::translate("MainWindow", "Man", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
