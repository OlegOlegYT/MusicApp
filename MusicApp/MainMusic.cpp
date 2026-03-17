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

int main(){
	vector<Author> authors;
	vector<Listener> listeners;
	int idxA = -1;
	int idxL = -1;

	LogIn l(&authors, &listeners, &idxA, &idxL);

	Option LoginOptions[3] = { Option{"Author", [&l]() {return l.LoggingAuthor(); }}, Option{"Listener", [&l]() {return l.LoggingListener(); } }, Option{"Quit", [&l]() {return l.Quit(); } } };
	Menu m("Log In", LoginOptions, 3);
	l.LoginMenu = &m;

	while (m.IsRunning()) {
		



		idxA = -1; //обязательно в конце обновить Логин Меню
		idxL = -1;
		l = LogIn(&authors, &listeners, &idxA, &idxL); 
		m = Menu("Log In", LoginOptions, 3);
		l.LoginMenu = &m;
	}
	return 0;
}