#include "amplifier.h"
#include "tuner.h"
#include "projector.h"
#include "theaterlights.h"
#include "screen.h"
#include "popcornpopper.h"
#include "hometheaterfacade.h"

int main(int argc, char* argv[]) {
	Amplifier* amp = new Amplifier("Top-0-Line Amplifier");
	Tuner* tuner = new Tuner("Top-0-Line AM/FM Tuner", amp);
	DvdPlayer *dvd = new DvdPlayer("Top-0-Line DVD Player", amp);
	CdPlayer* cd = new CdPlayer("Top-0-Line CD Player", amp);
	Projector* projector = new Projector("Top-0-Line Projector", dvd);
	TheaterLights* lights = new TheaterLights("Theater Ceiling Lights");
	Screen* screen = new Screen("Theater Screen");
	PopcornPopper* popper = new PopcornPopper("Popcorn Popper");

	HomeTheaterFacade* homeTheater = new HomeTheaterFacade(amp, tuner, dvd, cd, projector, lights, screen, popper);

	homeTheater->watchMovie("Raiders of the Lost Ark");
	homeTheater->endMovie();

	return 0;
}