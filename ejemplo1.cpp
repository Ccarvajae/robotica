#include "ejemplo1.h"

ejemplo1::ejemplo1(): Ui_Counter()
{
	cont=0;
	setupUi(this);
	show();
	connect(button, SIGNAL(clicked()), this, SLOT(doButton()) );
	connect(&contador, SIGNAL(timeout()), this, SLOT(update()) );
	contador.start(100);
}


ejemplo1::~ejemplo1()
{
  
  
}

void ejemplo1::doButton()
{
	qDebug() << "click on button";
		  
	//contador.interval();
	if(contador.isActive())
	  contador.stop();
	else{

	contador.start(100);
	  
	  
	}
}


void ejemplo1::update()
{
    lcdNumber->display(lcdNumber->value()+1); 
    
    qDebug() << lcdNumber->value();
}


