#pragma once
#include <string>
#include "Option.h"

namespace Men {
	class Menu {
	public:
		std::string MenuName;
		Opt::Option* options;
		int colvo;
		Menu(std::string, Opt::Option*, int);
		int IsRunning();
	};
}