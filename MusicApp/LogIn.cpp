#include <iostream>
#include "LogIn.h"
#include "Option.h"

using namespace Opt;

namespace Lg {
	LogIn::LogIn(std::vector<Author>* a, std::vector<Listener>* l) {
		A = a;
		L = l;
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
		Author author = Author();
		A->push_back(author);
		return 1;
	}

	int LogIn::NewListener() {
		Listener listn = Listener();
		L->push_back(listn);
		return 1;
	}



	int LogIn::LoggingAuthor() {
		Option* OldOpts = LoginMenu->options;
		Option AuthorOptions[3] = { Option{"New Author", NewAuthor()} , Option{"Log In", NewAuthor()}, Option{"Back", Back(OldOpts)}};
		LoginMenu->options = AuthorOptions;
		return LoginMenu->IsRunning();
	}
	
	int LogIn::LoggingListener() {
		Option* OldOpts = LoginMenu->options;
		Option AuthorOptions[3] = { Option{"New Listener", NewListener()} , Option{"Log In", NewListener()}, Option{"Back", Back(OldOpts)} };
		LoginMenu->options = AuthorOptions;
		return LoginMenu->IsRunning();
	}
}