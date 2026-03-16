#pragma once
#include <string>

namespace Son {
	class Song {
	private:
		std::string name;
		std::string author;
		std::string genre;
		int minutes;
		int seconds;
		
	public:
		Song(std::string, std::string, std::string, int, int);
		void Duration();
		void PrintSong();
	};
}