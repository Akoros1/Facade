#pragma once
#ifndef SCREEN_H
#define SCREEN_H
#include <iostream>

using namespace std;

class Screen
{
private:
	string description;
public:
	Screen(string description);
	void up();
	void down();
	string toString();
};

#endif