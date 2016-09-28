#ifndef MYTIMER_H
#define MYTIMER_H

#include "QThread"
#include <qt4/QtCore/QObject>
//#include "QTimer"


class MyTimer : public QObject {
  
  Q_OBJECT
  void usleep(int cont);
  
  private:
    int cont;  
    bool sstop;
  
  public:
    MyTimer();
      virtual ~MyTimer();
    signals:
      void timeout();  
      
    public slots:
    void start(int num);
    void stop();
    void run();
    bool isActive();
};
  
#endif