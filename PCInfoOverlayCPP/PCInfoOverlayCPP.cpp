// PCInfoOverlayCPP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "pch.h"
#include "PCInfoHiddenWindow.h"

int main()
{
	ScreenText text;
	PCInfoHiddenWindow *draw_window = new PCInfoHiddenWindow(text);
	draw_window->Create();
	std::string test;
	std::cin >> test;
	return 0;
}
