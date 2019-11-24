#include "dialog.h"
#include <QHBoxLayout>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
{
    initUi();
    initSignalSlots();
    setWindowTitle("Form created mannually");
}

Dialog::~Dialog()
{
}

void Dialog::initUi()
{
    m_pChkBoxUnder = new QCheckBox(tr("Underline"));
    m_pChkBoxItalic = new QCheckBox(tr("Italic"));
    m_pChkBoxBold = new QCheckBox(tr("Bold"));
    QHBoxLayout* pChkHLay = new QHBoxLayout;
    pChkHLay->addWidget(m_pChkBoxUnder);
    pChkHLay->addWidget(m_pChkBoxItalic);
    pChkHLay->addWidget(m_pChkBoxBold);

    m_pRdBtnBlack = new QRadioButton(tr("Black"));
    m_pRdBtnBlack->setChecked(true);
    m_pRdBtnRed = new QRadioButton(tr("Red"));
    m_pRdBtnBlue = new QRadioButton(tr("Blue"));
    QHBoxLayout* pRdHLay = new QHBoxLayout;
    pRdHLay->addWidget(m_pRdBtnBlack);
    pRdHLay->addWidget(m_pRdBtnRed);
    pRdHLay->addWidget(m_pRdBtnBlue);

    m_pBtnOk = new QPushButton(tr("Ok"));
    m_pBtnCancel = new QPushButton(tr("Cancel"));
    m_pBtnClose = new QPushButton(tr("Close"));
    QHBoxLayout* pBtnHLay = new QHBoxLayout;
    pBtnHLay->addStretch();
    pBtnHLay->addWidget(m_pBtnOk);
    pBtnHLay->addWidget(m_pBtnCancel);
    pBtnHLay->addStretch();
    pBtnHLay->addWidget(m_pBtnClose);

    m_pTxtEdit = new QPlainTextEdit;
    m_pTxtEdit->setPlainText("Hello world\n\nIt is my demo.");
    QFont font = m_pTxtEdit->font();
    font.setPointSize(20);
    m_pTxtEdit->setFont(font);

    QVBoxLayout* pTxtVLay = new QVBoxLayout;
    pTxtVLay->addLayout(pChkHLay);
    pTxtVLay->addLayout(pRdHLay);
    pTxtVLay->addWidget(m_pTxtEdit);
    pTxtVLay->addLayout(pBtnHLay);
    setLayout(pTxtVLay);
}

void Dialog::initSignalSlots()
{
    connect(m_pRdBtnBlue, SIGNAL(clicked()), this, SLOT(onTextColor()));
    connect(m_pRdBtnRed, SIGNAL(clicked()), this, SLOT(onTextColor()));
    connect(m_pRdBtnBlack, SIGNAL(clicked()), this, SLOT(onTextColor()));

    connect(m_pChkBoxUnder, SIGNAL(clicked(bool)), this, SLOT(onChkUnderline(bool)));
    connect(m_pChkBoxItalic, SIGNAL(clicked(bool)), this, SLOT(onChkItalic(bool)));
    connect(m_pChkBoxBold, SIGNAL(clicked(bool)), this, SLOT(onChkBold(bool)));

    connect(m_pBtnOk, SIGNAL(clicked()), this, SLOT(accept()));
    connect(m_pBtnCancel, SIGNAL(clicked()), this, SLOT(reject()));
    connect(m_pBtnClose, SIGNAL(clicked()), this, SLOT(close()));
}

void Dialog::onChkUnderline(bool IsChecked)
{
    QFont font = m_pTxtEdit->font();
    font.setUnderline(IsChecked);
    m_pTxtEdit->setFont(font);
}

void Dialog::onChkItalic(bool IsChecked)
{
    QFont font = m_pTxtEdit->font();
    font.setItalic(IsChecked);
    m_pTxtEdit->setFont(font);
}

void Dialog::onChkBold(bool IsChecked)
{
    QFont font = m_pTxtEdit->font();
    font.setBold(IsChecked);
    m_pTxtEdit->setFont(font);
}

void Dialog::onTextColor()
{
    QPalette palette = m_pTxtEdit->palette();
    if (m_pRdBtnRed->isChecked())
        palette.setColor(QPalette::Text, Qt::red);
    else if (m_pRdBtnBlue->isChecked())
        palette.setColor(QPalette::Text, Qt::blue);
    else if (m_pRdBtnBlack->isChecked())
        palette.setColor(QPalette::Text, Qt::black);
    m_pTxtEdit->setPalette(palette);
}

