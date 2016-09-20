#ifndef ejemplo1_H
#define ejemplo1_H
#include <QTimer>
#include <QtGui>
#include "ui_counterDlg.h"

class ejemplo1 : public QWidget, public Ui_Counter
{
Q_OBJECT
   
private:
     QTimer contador;
     int con;

public:
    ejemplo1();
    virtual ~ejemplo1();
    
public slots:
    void doButton();
    void update();
     protected:
     int cont;
};

#endif // ejemplo1_H
