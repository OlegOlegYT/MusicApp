#include <iostream>
#include "LogIn.h"
#include "Option.h"

using namespace Opt;

namespace Lg {
	LogIn::LogIn(std::vector<Author>* n, std::vector<Listener>* m, int* idxA, int* idxL) {
		A = n;
		L = m;
		iA = idxA;
		iL = idxL;
	}

	int LogIn::Back(Option* OldOpts) {
		LoginMenu->options = OldOpts;
		return LoginMenu->IsRunning();
	}

	int LogIn::Quit() {
		std::cout << "Process is over.";
		return 0;
	}

	int LogIn::NewAuthor() {
		Author aut = Author();
		A->push_back(aut);
		*(iA) = (A->size() - 1);
		return 1;
	}

	int LogIn::NewListener() {
		Listener listn = Listener();
		L->push_back(listn);
		*(iL) = (L->size() - 1);
		return 1;
	}

	int LogIn::LA() {
		std::cout << "Enter your name: ";
		std::string n;
		std::cin >> n;
		return 1;
		
	}

	int LogIn::LL() {
		return 1;
	}

	int LogIn::LoggingAuthor() {
		Option* OldOpts = LoginMenu->options;
		Option AuthorOptions[3] = { Option{"New Author", [this]() {return this->NewAuthor(); }} , Option{"Log In", [this]() {return this->LA(); }}, Option{"Back", [this, OldOpts]() {return this->Back(OldOpts); }} };
		LoginMenu->options = AuthorOptions;
		return LoginMenu->IsRunning();
	}
	
	int LogIn::LoggingListener() {
		Option* OldOpts = LoginMenu->options;
		Option AuthorOptions[3] = { Option{"New Listener", [this]() {return this->NewListener(); }} , Option{"Log In", [this]() {return this->LL(); }}, Option{"Back", [this, OldOpts]() {return this->Back(OldOpts); }} };
		LoginMenu->options = AuthorOptions;
		return LoginMenu->IsRunning();
	}
}