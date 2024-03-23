#include <stdio.h>
#include <SDL2/SDL.h>
#include "./constants.h"

/*
 * Understanding code
 *
 * SDL_INIT_EVERYTHING is a const provided by sdl to initialize everything (graphics, keyboard input, etc)
 * 
 * */


int initialize_window(void) {
    if (SDL_init(SDL_INIT_EVERYTHING) != 0) {
        fprintf(stderr, "Error initializing SDL.\n");
        return SDL_INIT_FAIL;
    }

    return SDL_INIT_SUCCESS;
}

int main(void) {
    
    initialize_window();
    
    return 0;
}
