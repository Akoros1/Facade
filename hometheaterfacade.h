#pragma once
#ifndef HOMETHEATERFACADE_H
#define HOMETHEATERFACADE_H
#include <iostream>
#include "amplifier.h"
#include "tuner.h"
#include "dvdplayer.h"
#include "cdplayer.h"
#include "projector.h"
#include "screen.h"
#include "popcornpopper.h"
#include "theaterlights.h"

using namespace std;

class HomeTheaterFacade
{
private:
	Amplifier* amp;
	Tuner* tuner;
	DvdPlayer* dvd;
	CdPlayer* cd;
	Projector* projector;
	TheaterLights* lights;
	Screen* screen;
	PopcornPopper* popper;
public:
	HomeTheaterFacade(Amplifier*, Tuner*, DvdPlayer*, CdPlayer*, Projector*, TheaterLights*, Screen*, PopcornPopper*);
	void watchMovie(string movie);
	void endMovie();
	void listenToCd(string cdTitle);
	void endCd();
	void listenToRadio(double frequency);
	void endRadio();
};

#endif