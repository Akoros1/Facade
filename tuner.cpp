#include "tuner.h"

Tuner::Tuner(string description, Amplifier* amplifier) {
	this->description = description;
}

void Tuner::on() {
	cout << description << " on" << endl;
}

void Tuner::off() {
	cout << description << " off" << endl;
}

void Tuner::setFrequency(double frequency) {
	cout << description << " setting frequency to " << frequency << endl;
	this->frequency = frequency;
}

void Tuner::setAm() {
	cout << description << " setting AM mode" << endl;
}

void Tuner::setFm() {
	cout << description << " setting FM mode" << endl;
}

string Tuner::toString() {
	return description;
}