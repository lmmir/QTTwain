#ifndef QTTWAIN_H
#define QTTWAIN_H

#include <QtWidgets/QMainWindow>
#include "ui_qttwain.h"

class QTTwain : public QMainWindow
{
	Q_OBJECT

public:
	QTTwain(QWidget *parent = 0);
	~QTTwain();

private:
	Ui::QTTwainClass ui;
};

#endif // QTTWAIN_H
