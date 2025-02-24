
	Place SDL here.
	You can use precompiled SDL for MSVC, which you can find at
	https://www.libsdl.org/release/SDL-devel-1.2.15-VC.zip
	
	or a fresh SDL source tree:
	https://github.com/libsdl-org/SDL-1.2
	(https://github.com/libsdl-org/SDL-1.2/archive/refs/heads/main.zip)
	https://www.libsdl.org/release/SDL-1.2.15.zip
	
	Quick guide how to compile SDL for MSVC:
	Copy include\SDL_config.h.default to SDL_config.h .
	open VisualC\SDL.sln if you're using VS earlier than 2010
	or open SDL_VS2010.sln if using 2010 or newer.
	
	!! Please make sure that you're using the same MSVC version
	   when building SDL and DOSBox Blue.
	
	Build either Release/Win32 or Debug/Win32. If you compile both,
	DOSBox Blue will be linked against Release SDL.
	