#include "Option.h"

namespace Opt {
	Option::Option(std::string s, Func f) {
		name = s;
		func = f;
	}
	int Option::Run() {
		return func();
	}
}