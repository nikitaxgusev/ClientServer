/********************************************************************************
** Form generated from reading UI file 'sendwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENDWIDGET_H
#define UI_SENDWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SendWidget
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *hostLineEdit;
    QLineEdit *portLineEdit;
    QProgressBar *clientProgressBar;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *sendButton;
    QPushButton *openButton;
    QLabel *clientStatusLabel;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *SendWidget)
    {
        if (SendWidget->objectName().isEmpty())
            SendWidget->setObjectName(QStringLiteral("SendWidget"));
        SendWidget->resize(466, 161);
        centralWidget = new QWidget(SendWidget);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        hostLineEdit = new QLineEdit(centralWidget);
        hostLineEdit->setObjectName(QStringLiteral("hostLineEdit"));

        horizontalLayout->addWidget(hostLineEdit);

        portLineEdit = new QLineEdit(centralWidget);
        portLineEdit->setObjectName(QStringLiteral("portLineEdit"));

        horizontalLayout->addWidget(portLineEdit);


        verticalLayout->addLayout(horizontalLayout);

        clientProgressBar = new QProgressBar(centralWidget);
        clientProgressBar->setObjectName(QStringLiteral("clientProgressBar"));
        clientProgressBar->setValue(0);

        verticalLayout->addWidget(clientProgressBar);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        sendButton = new QPushButton(centralWidget);
        sendButton->setObjectName(QStringLiteral("sendButton"));

        horizontalLayout_2->addWidget(sendButton);

        openButton = new QPushButton(centralWidget);
        openButton->setObjectName(QStringLiteral("openButton"));

        horizontalLayout_2->addWidget(openButton);


        verticalLayout->addLayout(horizontalLayout_2);

        clientStatusLabel = new QLabel(centralWidget);
        clientStatusLabel->setObjectName(QStringLiteral("clientStatusLabel"));

        verticalLayout->addWidget(clientStatusLabel);


        verticalLayout_2->addLayout(verticalLayout);

        SendWidget->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(SendWidget);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 466, 23));
        SendWidget->setMenuBar(menuBar);

        retranslateUi(SendWidget);

        QMetaObject::connectSlotsByName(SendWidget);
    } // setupUi

    void retranslateUi(QMainWindow *SendWidget)
    {
        SendWidget->setWindowTitle(QApplication::translate("SendWidget", "SendWidget", Q_NULLPTR));
        sendButton->setText(QApplication::translate("SendWidget", "send", Q_NULLPTR));
        openButton->setText(QApplication::translate("SendWidget", "open", Q_NULLPTR));
        clientStatusLabel->setText(QApplication::translate("SendWidget", "tips", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SendWidget: public Ui_SendWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENDWIDGET_H
