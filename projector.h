#pragma once
#ifndef PROJECTOR_H
#define PROJECTOR_H
#include <iostream>
#include "dvdplayer.h"

using namespace std;

class Projector
{
private:
	string description;
	DvdPlayer* dvdPlayer;
public:
	Projector(string description, DvdPlayer* dvdPlayer);
	void on();
	void off();
	void wideScreenMode();
	void tvMode();
	string toString();
};

#endif