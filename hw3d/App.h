#pragma once
#include"Window.h"
#include"CTimer.h"
class App
{
public:
	App();
	int Go();
private:
	void DoFrame();
private:
	Window wnd;
	CTimer timer;
};

