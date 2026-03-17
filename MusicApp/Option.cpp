#include "Option.h"

namespace Opt {
	Option::Option(std::string s, std::function<int()> f) {
		name = s;
		func = f;
	}
	int Option::Run() {
		return func();
	}
}