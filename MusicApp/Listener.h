#pragma once
#include "User.h"

using namespace Us;

namespace Li {
	class Listener : public User {
	public:
		Listener();
		virtual void DeleteUser();
	};
}