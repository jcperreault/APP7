#include <QWidget>
#include <QPixmap>
#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QApplication>

#include "mario.h"

class Interface :public QWidget {

	Q_OBJECT

public:
	Interface();

private slots:
	void boutonJouer();
	void boutonTuto();
	void boutonOptions();
	void boutonLvl1();
	void boutonLvl2();
	void boutonBack();

private:
	void createButtons();
	void createBkgnd();
	void closeMenu1();
	void closeMenu2();
	void openMenu1();
	void openMenu2();
	QPixmap imageBkgnd;
	QPixmap imageLvl1;
	QLabel *imageLabel;
	QVBoxLayout *buttonsLayout;
	QWidget* widget;
	QGraphicsScene* scene;
	QGraphicsView* view;

	QPushButton *b_jouer;
	QPushButton *b_quit;
	QPushButton *b_tuto;
	QPushButton *b_options;
	QPushButton *b_lvl1;
	QPushButton *b_lvl2;
	QPushButton *b_back;
};
