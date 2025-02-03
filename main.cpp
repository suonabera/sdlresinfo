#include <stdio.h>
#include "SDL.h"

int main() {
	SDL_Init(SDL_INIT_VIDEO);
	printf("SDL Video Initialized\n");
	const SDL_VideoInfo *vidinfo = SDL_GetVideoInfo();
	printf("SDL_GetVideoInfo success\n");
	printf("current_w: %i\n", vidinfo->current_w);
	printf("current_h: %i\n", vidinfo->current_h);
}
