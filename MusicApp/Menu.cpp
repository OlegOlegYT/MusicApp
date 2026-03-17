#include <iostream>
#include "Option.h"
#include "Menu.h"

namespace Men {
	Menu::Menu(std::string name, Opt::Option* opts, int n) {
		MenuName = name;
		options = opts;
		colvo = n;
	}
	int Menu::IsRunning() {
		std::cout << MenuName << '\n';
		for (int i = 0; i < colvo; i++) 
			std::cout << (i + 1) << '\t' << options[i].name << '\n';
		std::cout << "Enter option: \t";
		int a;
		std::cin >> a;
		return options[a - 1].Run();
	}
}