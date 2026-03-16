#include "Song.h"
#include <iostream>

namespace Son {
	Song::Song(std::string a, std::string b, std::string c, int m, int s) {
		name = a;
		author = b;
		genre = c;
		minutes = m;
		if (s > 59) {
			minutes += (s / 60);
			seconds = (s % 60);
		}
		else seconds = s;
	}
	void Song::Duration() {
		(minutes < 10) ? (std::cout << '0' << minutes << ':') : (std::cout << minutes << ':');
		(seconds < 10) ? (std::cout << '0' << seconds) : (std::cout << seconds);
	}

	void Song::PrintSong() {
		std::cout << name << ' ' << author << ' ';
		Duration();
		std::cout << genre;
	}
}