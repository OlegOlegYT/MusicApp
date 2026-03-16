#pragma once
#include "User.h"

using namespace Us;

namespace Au {
	class Author : public User {
	public:
		Author();
		virtual void DeleteUser();
	};
}