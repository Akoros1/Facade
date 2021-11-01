#include "screen.h"

Screen::Screen(string description) {
	this->description = description;
}

void Screen::up() {
	cout << description << " going up" << endl;
}

void Screen::down() {
	cout << description << " going down" << endl;
}

string Screen::toString() {
	return description;
}