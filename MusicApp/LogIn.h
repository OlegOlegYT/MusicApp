#pragma once
#include "Option.h"
#include "Menu.h"
#include "Author.h"
#include "Listener.h"
#include <vector>

using namespace Opt;
using namespace Men;
using namespace Au;
using namespace Li;

namespace Lg {
	class LogIn {
	public:
		Menu* LoginMenu;
		std::vector<Author>* A;
		std::vector<Listener>* L;
		int* iA;
		int* iL;

		LogIn(std::vector<Author>*, std::vector<Listener>*, int*, int*);
		int LoggingAuthor();
		int LoggingListener();
		int NewAuthor();
		int NewListener();
		int LA();
		int LL();
		int Back(Option*);
		int Quit();
	};
}