#ifndef __BROWSER__
#define __BROWSER__


#include "ui_Browser.h"
#include "browser_global.h"
#include "stdafx.h"
#include "AbstractWidget.h"

class BROWSER_EXPORT Browser : public AbstractWidget
{
	Q_OBJECT
public:
    Browser();

private slots:
	void SlotBtnRetreat();
	void SlotBtnaAdvance();
	void SlotBtnHome();
	void SlotBtnCollect();
	void SlotBtnSet();
private:
	Ui::Form ui;
};

#endif
