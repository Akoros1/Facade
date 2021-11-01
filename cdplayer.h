#pragma once
#ifndef CDPLAYER_H
#define CDPLAYER_H
#include <iostream>
#include "amplifier.h"

using namespace std;

class CdPlayer
{
private:
	string description;
	int currentTrack;
	Amplifier* amplifier;
	string title;
public:
	CdPlayer(string description, Amplifier* amplifier);
	void on();
	void off();
	void eject();
	void play(string title);
	void play(int track);
	void stop();
	void pause();
	string toString();
};

#endif