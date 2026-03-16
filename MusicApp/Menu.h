#pragma once
#include <string>
#include "Option.h"

namespace Men {
	class Menu {
	private:
		std::string MenuName;

	public:
		Opt::Option* options;
		int colvo;
		Menu(std::string, Opt::Option*, int);
		int IsRunning();
	};
}