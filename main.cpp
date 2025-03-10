#include <stdio.h>
#include "SDL.h"
#ifdef _WIN32
#include <windows.h>
#pragma comment(lib, "sdlmain.lib")
#pragma comment(lib, "sdl.lib")
#endif
#define SDL_main main

int main(int argc, char* argv[]) {
	SDL_Init(SDL_INIT_VIDEO);
	printf("SDL Video Initialized\n");
	const SDL_VideoInfo *vidinfo = SDL_GetVideoInfo();
	printf("SDL_GetVideoInfo success\n");
	char output[128];
	sprintf(output, "current_w: %i, current_h: %i", vidinfo->current_w, vidinfo->current_h);
	printf(output);
#ifdef _WIN32
	MessageBoxA(0, output, "SDL Video Info tool", 0x0000040L);
#endif
	SDL_Quit();
	return 0;
}
