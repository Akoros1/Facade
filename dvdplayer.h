#pragma once
#ifndef DVDPLAYER_H
#define DVDPLAYER_H
#include <iostream>
#include "amplifier.h"

using namespace std;

class DvdPlayer
{
private:
	string description;
	int currentTrack;
	Amplifier* amplifier;
	string movie;
public:
	DvdPlayer(string description, Amplifier* amplifier);
	void on();
	void off();
	void eject();
	void play(string movie);
	void play(int track);
	void stop();
	void pause();
	void setTwoChannelAudio();
	void setSurroundAudio();
	string toString();
};

#endif