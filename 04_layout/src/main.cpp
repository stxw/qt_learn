/**
 ************************************
 * @file     : main.cpp
 * @author   : stxw
 * @date     : 2021-03-27
 ************************************
 * @brief :
 * 		Qt的layout布局
 */

#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QLineEdit>

#include <QVBoxLayout> /* 垂直布局 */
#include <QHBoxLayout> /* 水平布局 */

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);

	QWidget widget;
	widget.setWindowTitle("Hello World");

	QPushButton button;
	button.setText("Button");
	button.setParent(&widget);

	QLineEdit line_edit;
	line_edit.setParent(&widget);

#if 0
	// QVBoxLayout layout;
	QHBoxLayout layout;
	layout.addStretch(1); /* 加一个弹簧 */
	layout.addWidget(&button, 1);
	layout.addSpacing(20); /* 中间加一些间隔 */
	layout.addWidget(&line_edit, 1);
	layout.addStretch(1);
	widget.setLayout(&layout);
#endif

	QGridLayout layout;


	widget.show();
	return app.exec();
}
