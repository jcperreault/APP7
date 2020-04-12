#include <QGraphicsPixmapItem>
#include <QGraphicsItem>
#include <QObject>
#include <QKeyEvent>
#include <QPixmap>

class Mario :public QObject, public QGraphicsPixmapItem {
	Q_OBJECT
public:
	Mario(QGraphicsItem* parent=0);
	void keyPressEvent(QKeyEvent *event);
private:
	void picLoad();
	QPixmap marioPicRight1;
	QPixmap marioPicRight2;
	QPixmap marioPicLeft1;
	QPixmap marioPicLeft2;
	QPixmap marioRight;
	QPixmap marioLeft;
	int ref;

};