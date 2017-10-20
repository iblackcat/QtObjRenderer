#include "QtGuiApplication.h"
#include <QtWidgets/QApplication>

#include "utils.h"
#include "TriangleWindow.h"

using namespace mf;

//mf::GlobalCoeff mf::G(320, 240, 500.0, 500.0, 150.0, 100.0, 3.0);
mf::GlobalCoeff mf::G(640, 480, 700.0, 700.0, 313.0, 256.0, 3.67);

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);
	/*
	QSurfaceFormat format;
	format.setSamples(16);

	TriangleWindow window;
	window.setFormat(format);
	window.resize(320, 240);
	window.show();

	window.setAnimating(true);
	*/

	QtGuiApplication w;
	w.show();

	return app.exec();
}
