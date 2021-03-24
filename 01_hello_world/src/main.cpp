/**
 ************************************
 * @file     : main.cpp
 * @author   : stxw
 * @date     : 2021-03-24
 ************************************
 * @brief :
 * 		用qt写一个hello world
 */

#include <QApplication>
#include <QWidget>

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);

	QWidget widget;
	widget.setWindowTitle("Hello World");
	widget.show();

	return app.exec();
}
