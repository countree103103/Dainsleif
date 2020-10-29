#pragma once
#include "../Color.h"
#include "../Utils.h"

class CConsoleCommand
{
public:
    CALL_VFUNC ( 14, Dispatch(), void(__thiscall*)(CConsoleCommand*, void*) ) ( nullptr )
};

class CCvar
{
public:
    template < typename ... Args >
    CALL_VFUNC ( 25, ConsoleColorPrint(const CColor& color, const char* format, Args... arg),
                 void(*)(CCvar*, const CColor&, const char*, ...) ) ( color, format, arg... )

    CALL_VFUNC ( 18, FindCommand(const char* command), CConsoleCommand*(__thiscall*)(CCvar*, const char*) ) ( command )
};
