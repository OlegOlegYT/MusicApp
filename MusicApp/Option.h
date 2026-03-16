#pragma once
#include <string>
#include <cstddef>


namespace Opt {
	class Option {
	public:
		std::string name;
		typedef int(*Func)();
		Func func;
		Option(std::string, Func);
		int Run();
	};
}