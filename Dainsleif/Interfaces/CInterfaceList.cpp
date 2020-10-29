#include "CInterfaceList.h"

CInterfaceList g_csgo;

void CInterfaceList::Initialize ( )
{
    const fnCreateInterface vstdlibFactory = GetModuleFactory ( GetModuleHandleA ( "vstdlib.dll" ) );
    const fnCreateInterface engineFactory = GetModuleFactory ( GetModuleHandleA ( "engine.dll" ) );
    const fnCreateInterface surfaceFactory = GetModuleFactory ( GetModuleHandleA ( "vguimatsurface.dll" ) );

    cvar = GetInterface< CCvar > ( vstdlibFactory, "VEngineCvar007" );
    engine = GetInterface< IVEngineClient > ( engineFactory, "VEngineClient014" );
    surface = GetInterface< ISurface > ( surfaceFactory, "VGUI_Surface031" );

#if _DEBUG
    PrintInterfaces ( );
#endif
}
