#include <iostream>
#include <string>
#include <vector>
#include "Option.h"
#include "Menu.h"
#include "Listener.h"
#include "Author.h"
#include "LogIn.h"

using namespace std;
using namespace Opt;
using namespace Men;
using namespace Li;
using namespace Au;
using namespace Lg;

int f1() {
	return 1;
}

int main(){
	vector<Author> authors;
	vector<Listener> listeners;
	Author* author;
	Listener* listener;



	
	LogIn l(&authors, &listeners);




	Option O = Option("Name", l.LoggingAuthor());

	Option LoginOptions[3] = { Option{"Author", l.LoggingAuthor()}, Option{"Listener", l.LoggingListener()}, Option{"Quit", l.Quit()}};
	Menu m("Log In", LoginOptions, 3);
	l.LoginMenu = &m;

	while (m.IsRunning()) {

	}


	//Author A = Author();
	return 0;
}