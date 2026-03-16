#include <iostream>
#include <string>
#include "User.h"
#include "Song.h"

using namespace Son;

namespace Us {
	void User::SetPassword() {
		std::cout << "Create a password: ";
		std::string a;
		std::cin >> a;
		password = a;
	}
	void User::ChangePassword() {
		std::cout << "Enter a new password: ";
		std::string a;
		std::cin >> a;
		password = a;
	}
	void User::PrintSongs() {
		for (Song s : songs) {
			s.PrintSong();
			std::cout << '\n';
		}
	}
}