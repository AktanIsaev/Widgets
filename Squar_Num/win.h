#ifndef WIN_H
#define WIN_H

#include <QtWidgets>

class Win:public QWidget
{
    Q_OBJECT

protected:
    QTextCodec *codec;
    QFrame *frame;
    QLabel *inputLabel;
    QLineEdit *inputEdit;
    QLabel *outputLabel;
    QLineEdit *outputEdit;
    QPushButton *nextButton;
    QPushButton *exitButton;

public:
    Win(QWidget *parent = 0);

public slots:
    void begin();
    void calc();
};

class StrValidator:public QValidator
{
public:
    StrValidator(QObject *parent):QValidator(parent){}
    virtual State validate(QString &str, int &pos) const
    {
        return Acceptable;
    }
};

#endif // WIN_H
