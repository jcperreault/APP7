#include "mario.h"

Mario::Mario(QGraphicsItem * parent)
{
	picLoad();
	setPixmap(marioPicRight1);
	setPos(0, 701);
	ref = 1;
}

void Mario::keyPressEvent(QKeyEvent *event)
{
	
	if(event->key() == Qt::Key_Left) {
		setPos(x() - 5, y());
		if (ref == 1)
			setPixmap(marioLeft);
		else if (ref % 6 == 0)
			setPixmap(marioPicLeft1);
		else if (ref % 6 == 3)
			setPixmap(marioPicLeft2);
		ref++;
	}

	else if (event->key() == Qt::Key_Right) {
		setPos(x() + 5, y());
		if (ref == 1)
			setPixmap(marioRight);
		else if (ref % 6 == 0)
			setPixmap(marioPicRight1);
		else if (ref % 6 == 3)
			setPixmap(marioPicRight2);
		ref++;
	}
}

void Mario::picLoad()
{
	marioPicRight1.load("images/mario5.png");
	marioPicRight2.load("images/mario6.png");
	marioPicLeft1.load("images/mario2.png");
	marioPicLeft2.load("images/mario1.png");
	marioLeft.load("images/mario3.png");
	marioRight.load("images/mario4");
}
