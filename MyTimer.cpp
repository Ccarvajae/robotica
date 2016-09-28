#include "MyTimer.h"

    MyTimer::MyTimer()
    {
    cont = 1000;
    }

    void MyTimer::start(int num)
    {
        sstop=false;
        this->cont = num;
        QThread::start();
    }

    void MyTimer::stop()
    {
      sstop = true;
    }

    bool MyTimer::isActive()
    {
      if(sstop==true){
        return false;
      }
      else
        return true;
    }

    void MyTimer::run(){
      sstop = false;
      
      while(true){
        if(sstop){
          emit timeout();
        }
        usleep(cont);
    }

    }
