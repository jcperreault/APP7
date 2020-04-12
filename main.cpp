#include "interface.h"
#include <iostream>


int main(int argc, char **argv) {
	QApplication app(argc, argv);
	Interface mainWin;
	mainWin.show();
	app.exec();
}