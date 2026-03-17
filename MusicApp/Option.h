#pragma once
#include <string>
#include <functional>


namespace Opt {
	class Option {
	public:
		std::string name;
		std::function<int()> func;
		Option(std::string, std::function<int()>);
		int Run();
	};
}