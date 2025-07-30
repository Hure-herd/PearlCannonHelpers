#include "PearlCannonHelper.h"
#include <QtWidgets/QApplication>
#include <QTranslator>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QTranslator translator;
	translator.load(":/language/PearlCannonHelper_zh.qm");
	a.installTranslator(&translator);
	PearlCannonHelper w;
	w.show();
	return a.exec();
}
