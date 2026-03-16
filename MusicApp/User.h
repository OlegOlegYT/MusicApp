#pragma once
#include <string>
#include <vector>
#include "Song.h"

using namespace Son;

namespace Us {
	class User {
	public:
		std::string UserName;
		std::string password;
		std::vector<Song> songs;
		void SetPassword();
		void ChangePassword();
		void PrintSongs();
		virtual void DeleteUser() = 0;
	};
}