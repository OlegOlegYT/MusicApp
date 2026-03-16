#include <iostream>
#include <string>
#include "Author.h"

namespace Au {
	Author::Author() {
		std::cout << "Enter your name: ";
		std::string n;
		std::cin >> n;
		UserName = n;
		SetPassword();
	}
	void Author::DeleteUser() {
		delete this;
	}

}