#include "Browser.h"

Browser::Browser() : AbstractWidget()
{
	connect(ui.BtnAdvance, SIGNAL(clicked()), this, SLOT(SlotBtnaAdvance()));
	connect(ui.BtnCollect, SIGNAL(clicked()), this, SLOT(SlotBtnCollect()));
	connect(ui.BtnHome, SIGNAL(clicked()), this, SLOT(SlotBtnHome()));
	connect(ui.BtnRetreat, SIGNAL(clicked()), this, SLOT(SlotBtnRetreat()));
	connect(ui.BtnSet, SIGNAL(clicked()), this, SLOT(SlotBtnSet()));
}

void Browser::SlotBtnRetreat()
{

}

void Browser::SlotBtnaAdvance()
{

}

void Browser::SlotBtnHome()
{

}

void Browser::SlotBtnCollect()
{

}

void Browser::SlotBtnSet()
{

}
