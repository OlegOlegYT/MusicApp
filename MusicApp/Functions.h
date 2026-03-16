#pragma once
#include "Menu.h"
#include "Option.h"
#include "Song.h"
#include <vector>

using namespace Men;
using namespace Opt;
using namespace Son;

namespace Funcs {
	class Functions {
	private:
		std::vector<Song> songs;
	public:
		void AddSong(Song);
		void DeleteSong(int);
		void PrintSongs();
	};
}