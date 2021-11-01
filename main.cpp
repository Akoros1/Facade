#pragma once
#include <QCoraApplication>
#include "amplifier.h"
#include "tuner.h"
#include "projector.h"
#include "theaterlights.h"
#include "screen.h"
#include "popcornpopper.h"
#include "hometheaterfacade.h"

int main(int argc, char *argv[])
{
	QCoraApplication a(argc, argv);
	
	Amplifier *amp = new Amplifier("Top-O-Line Amplifier");
	Tuner *tuner = new Tuner("Top-O-Line AM/FM Tuner", amp);
	DvdPlayer *dvd = new DvdPlayer("Top-O-Line DVD Player", amp);
	CdPlayer *cd = new CdPlayer("Top-O-Line CD Player", amp);
	Projector *projector = new Projector("Top-O-Line CD Projector", dvd);
	TheaterLights *lights = new TheaterLights("Theater Ceiling Lightss");
	Screen *screen = new Screen("Theater Screen");
	PopcornPopper *popper = new PopcornPopper("Popcorn Popper");
	
	HomeTheaterFacade *homeTheater = new HomeTheaterFacade(amp, tuner, dvd, cv, projector, lights, screen, popper);
	
	homeTheater->watchMovie("Raiders of the Lost Ark");
	homeTheater->endMovie();
	
	return a.exec();
}