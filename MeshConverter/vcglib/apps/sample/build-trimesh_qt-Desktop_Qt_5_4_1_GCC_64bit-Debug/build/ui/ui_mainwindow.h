/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "glarea.h"

QT_BEGIN_NAMESPACE

class Ui_mainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *vboxLayout;
    QFrame *toolsFrame;
    QHBoxLayout *hboxLayout;
    QLabel *drawModeLabel;
    QComboBox *drawModeComboBox;
    QSpacerItem *spacerItem;
    QPushButton *loadMeshPushButton;
    QPushButton *loadTetrahedronPushButton;
    QPushButton *loadDodecahedronPushButton;
    QSpacerItem *spacerItem1;
    QFrame *glFrame;
    QVBoxLayout *vboxLayout1;
    GLArea *glArea;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *mainWindow)
    {
        if (mainWindow->objectName().isEmpty())
            mainWindow->setObjectName(QStringLiteral("mainWindow"));
        mainWindow->resize(715, 579);
        centralwidget = new QWidget(mainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        vboxLayout = new QVBoxLayout(centralwidget);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        toolsFrame = new QFrame(centralwidget);
        toolsFrame->setObjectName(QStringLiteral("toolsFrame"));
        QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(0));
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(toolsFrame->sizePolicy().hasHeightForWidth());
        toolsFrame->setSizePolicy(sizePolicy);
        toolsFrame->setFrameShape(QFrame::StyledPanel);
        toolsFrame->setFrameShadow(QFrame::Raised);
        hboxLayout = new QHBoxLayout(toolsFrame);
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        hboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        drawModeLabel = new QLabel(toolsFrame);
        drawModeLabel->setObjectName(QStringLiteral("drawModeLabel"));

        hboxLayout->addWidget(drawModeLabel);

        drawModeComboBox = new QComboBox(toolsFrame);
        drawModeComboBox->setObjectName(QStringLiteral("drawModeComboBox"));

        hboxLayout->addWidget(drawModeComboBox);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        loadMeshPushButton = new QPushButton(toolsFrame);
        loadMeshPushButton->setObjectName(QStringLiteral("loadMeshPushButton"));

        hboxLayout->addWidget(loadMeshPushButton);

        loadTetrahedronPushButton = new QPushButton(toolsFrame);
        loadTetrahedronPushButton->setObjectName(QStringLiteral("loadTetrahedronPushButton"));

        hboxLayout->addWidget(loadTetrahedronPushButton);

        loadDodecahedronPushButton = new QPushButton(toolsFrame);
        loadDodecahedronPushButton->setObjectName(QStringLiteral("loadDodecahedronPushButton"));

        hboxLayout->addWidget(loadDodecahedronPushButton);

        spacerItem1 = new QSpacerItem(20, 40, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem1);


        vboxLayout->addWidget(toolsFrame);

        glFrame = new QFrame(centralwidget);
        glFrame->setObjectName(QStringLiteral("glFrame"));
        glFrame->setFrameShape(QFrame::StyledPanel);
        glFrame->setFrameShadow(QFrame::Raised);
        vboxLayout1 = new QVBoxLayout(glFrame);
#ifndef Q_OS_MAC
        vboxLayout1->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout1->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout1->setObjectName(QStringLiteral("vboxLayout1"));
        glArea = new GLArea(glFrame);
        glArea->setObjectName(QStringLiteral("glArea"));
        glArea->setMinimumSize(QSize(320, 240));

        vboxLayout1->addWidget(glArea);


        vboxLayout->addWidget(glFrame);

        mainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(mainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 715, 21));
        mainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(mainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        mainWindow->setStatusBar(statusbar);
#ifndef QT_NO_SHORTCUT
        drawModeLabel->setBuddy(drawModeComboBox);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(drawModeComboBox, loadMeshPushButton);
        QWidget::setTabOrder(loadMeshPushButton, loadTetrahedronPushButton);
        QWidget::setTabOrder(loadTetrahedronPushButton, loadDodecahedronPushButton);

        retranslateUi(mainWindow);

        QMetaObject::connectSlotsByName(mainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *mainWindow)
    {
        mainWindow->setWindowTitle(QApplication::translate("mainWindow", "Trimesh QT", 0));
        drawModeLabel->setText(QApplication::translate("mainWindow", "Draw &Mode :", 0));
        drawModeComboBox->clear();
        drawModeComboBox->insertItems(0, QStringList()
         << QApplication::translate("mainWindow", "Smooth", 0)
         << QApplication::translate("mainWindow", "Points", 0)
         << QApplication::translate("mainWindow", "Wire", 0)
         << QApplication::translate("mainWindow", "Flat Wire", 0)
         << QApplication::translate("mainWindow", "Hidden", 0)
         << QApplication::translate("mainWindow", "Flat", 0)
        );
        loadMeshPushButton->setText(QApplication::translate("mainWindow", "Load &Mesh", 0));
        loadTetrahedronPushButton->setText(QApplication::translate("mainWindow", "Load &Tetrahedron", 0));
        loadDodecahedronPushButton->setText(QApplication::translate("mainWindow", "Load &Dodecahedron", 0));
    } // retranslateUi

};

namespace Ui {
    class mainWindow: public Ui_mainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
