#pragma once

#include <wx/wx.h>
#include "cMain.h"

class cApp : public wxApp
{
private:
	cMain* main_window = nullptr;

public:
	cApp();
	~cApp();

public:
	virtual bool OnInit();
};

