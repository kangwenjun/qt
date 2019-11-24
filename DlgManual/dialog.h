#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QCheckBox>
#include <QRadioButton>
#include <QPlainTextEdit>
#include <QPushButton>

class Dialog : public QDialog
{
    Q_OBJECT

private:
    QCheckBox* m_pChkBoxUnder;
    QCheckBox* m_pChkBoxItalic;
    QCheckBox* m_pChkBoxBold;

    QRadioButton* m_pRdBtnBlack;
    QRadioButton* m_pRdBtnRed;
    QRadioButton* m_pRdBtnBlue;

    QPlainTextEdit* m_pTxtEdit;

    QPushButton* m_pBtnOk;
    QPushButton* m_pBtnCancel;
    QPushButton* m_pBtnClose;

    void initUi();
    void initSignalSlots();

private slots:
    void onChkUnderline(bool IsChecked);
    void onChkItalic(bool IsChecked);
    void onChkBold(bool IsChecked);
    void onTextColor();

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();
};
#endif // DIALOG_H
