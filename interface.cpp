#include "interface.h"

Interface::Interface()
{
	imageBkgnd.load("images/bkgnd.png", "png");
	setMinimumSize(imageBkgnd.size());
	widget = new QWidget(this);
	createBkgnd();
	createButtons();
}

void Interface::boutonJouer() {
	closeMenu1();
	openMenu2();
}

void Interface::boutonOptions() {
	
}


void Interface::boutonTuto() {

}

void Interface::boutonLvl1() {
	imageLvl1.load("images/map_lvl1.png", "png");
	imageLabel->resize(0, 0);
	closeMenu2();
	scene = new QGraphicsScene();
	
	Mario* mario = new Mario();
	mario->setFlag(QGraphicsItem::ItemIsFocusable);
	mario->setFocus();

	scene->addPixmap(imageLvl1);
	scene->addItem(mario);
	
	view = new QGraphicsView(widget);
	view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
	view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
	view->setFixedSize(imageLvl1.size());
	view->setScene(scene);
	view->show();
	
}

void Interface::boutonLvl2() {

}

void Interface::boutonBack() {
	closeMenu2();
	openMenu1();
}

void Interface::createButtons() {
	buttonsLayout = new QVBoxLayout(imageLabel);

	/************Menu principal**************/

	b_jouer = new QPushButton("", this);
	b_jouer->setMaximumSize(200, 30);
	b_jouer->setMinimumSize(200, 30);
	b_jouer->setStyleSheet("border-image:url(images/Jouer.png)");
	buttonsLayout->addWidget(b_jouer);
	connect(b_jouer, SIGNAL(clicked()), this, SLOT(boutonJouer()));

	b_options = new QPushButton("", this);
	b_options->setMaximumSize(200, 30);
	b_options->setMinimumSize(200, 30);
	b_options->setStyleSheet("border-image:url(images/Options.png)");
	buttonsLayout->addWidget(b_options);

	b_tuto = new QPushButton("", this);
	b_tuto->setMaximumSize(200, 30);
	b_tuto->setMinimumSize(200, 30);
	b_tuto->setStyleSheet("border-image:url(images/Tuto.png)");
	buttonsLayout->addWidget(b_tuto);

	b_quit = new QPushButton("", this);
	b_quit->setMaximumSize(200, 30);
	b_quit->setMinimumSize(200, 30);
	b_quit->setStyleSheet("border-image:url(images/Quitter.png)");
	buttonsLayout->addWidget(b_quit);
	connect(b_quit, SIGNAL(clicked()), this, SLOT(close()));

	/**************Deuxieme Menu (Niveaux)****************/

	b_lvl1 = new QPushButton("", this);
	b_lvl1->setMaximumSize(0, 0);
	b_lvl1->setMinimumSize(0, 0);
	b_lvl1->setStyleSheet("border-image:url(images/lvl1.png)");
	buttonsLayout->addWidget(b_lvl1);
	connect(b_lvl1, SIGNAL(clicked()), this, SLOT(boutonLvl1()));

	b_lvl2 = new QPushButton("", this);
	b_lvl2->setMaximumSize(0, 0);
	b_lvl2->setMinimumSize(0, 0);
	b_lvl2->setStyleSheet("border-image:url(images/lvl2.png)");
	buttonsLayout->addWidget(b_lvl2);

	b_back = new QPushButton("", this);
	b_back->setMaximumSize(0, 0);
	b_back->setMinimumSize(0, 0);
	b_back->setStyleSheet("border-image:url(images/back.png)");
	buttonsLayout->addWidget(b_back);
	connect(b_back, SIGNAL(clicked()), this, SLOT(boutonBack()));


	buttonsLayout->setSpacing(25);
	buttonsLayout->setAlignment(Qt::AlignHCenter | Qt::AlignBottom);
	buttonsLayout->setMargin(5);


	
}

void Interface::createBkgnd() {
	imageLabel = new QLabel(widget);

	imageLabel->setPixmap(imageBkgnd);
	imageLabel->adjustSize();
	imageLabel->setScaledContents(true);
	
}

void Interface::closeMenu1() {
	b_jouer->setMaximumSize(0, 0);
	b_jouer->setMinimumSize(0, 0);

	b_options->setMaximumSize(0, 0);
	b_options->setMinimumSize(0, 0);

	b_tuto->setMaximumSize(0, 0);
	b_tuto->setMinimumSize(0, 0);

	b_quit->setMaximumSize(0, 0);
	b_quit->setMinimumSize(0, 0);
}

void Interface::closeMenu2() {
	b_lvl1->setMaximumSize(0, 0);
	b_lvl1->setMinimumSize(0, 0);

	b_lvl2->setMaximumSize(0, 0);
	b_lvl2->setMinimumSize(0, 0);

	b_back->setMaximumSize(0, 0);
	b_back->setMinimumSize(0, 0);
}

void Interface::openMenu1() {
	b_jouer->setMaximumSize(200, 30);
	b_jouer->setMinimumSize(200, 30);

	b_options->setMaximumSize(200, 30);
	b_options->setMinimumSize(200, 30);

	b_tuto->setMaximumSize(200, 30);
	b_tuto->setMinimumSize(200, 30);

	b_quit->setMaximumSize(200, 30);
	b_quit->setMinimumSize(200, 30);

	buttonsLayout->setMargin(5);
}

void Interface::openMenu2() {
	b_lvl1->setMaximumSize(200, 30);
	b_lvl1->setMinimumSize(200, 30);

	b_lvl2->setMaximumSize(200, 30);
	b_lvl2->setMinimumSize(200, 30);

	b_back->setMaximumSize(200, 30);
	b_back->setMinimumSize(200, 30);

	buttonsLayout->setMargin(110);
}


