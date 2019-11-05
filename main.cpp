#include <QtWidgets/qapplication.h>
#include <QtWidgets/qpushbutton.h>

int main(int argc, char** argv)
{
	QCoreApplication app(argc, argv);
	QCoreApplication::setApplicationName("Application Example");
	QCoreApplication::setApplicationVersion("1.0.0");

	QPushButton hello("Hello world!", 0);
	hello.resize(100, 30);

	hello.show();
	return app.exec();
}
