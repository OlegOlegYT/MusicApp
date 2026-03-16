#include <iostream>
#include "Listener.h"

namespace Li {
	Listener::Listener() {
		std::cout << "Enter your name: ";
		std::string n;
		std::cin >> n;
		UserName = n;
		SetPassword();
	}
	void Listener::DeleteUser() {
		delete this;
	}
}