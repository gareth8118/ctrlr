#include "stdafx.h"
#include "LTextButton.h"

void LTextButton::wrapForLua (lua_State *L)
{
    using namespace luabind;

	module(L)
    [
		class_<TextButton, Button>("TextButton")
            .def(constructor<const String &>())
            .def(constructor<const String &, const String &>())
    ];
}
