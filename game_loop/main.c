#include <stdio.h>
#include <SDL2/SDL.h>
#include "./success_fail_codes.h"
#include "./constants.h"

// To be able to use it anywhere (global var)
SDL_Window* window = NULL;
SDL_Renderer* renderer = NULL;

int initialize_window(void) {

    // SDL_INIT_EVERYTHING is a const provided by sdl to initialize everything (graphics, keyboard input, etc)
    if (SDL_Init(SDL_INIT_EVERYTHING) != 0) {
        fprintf(stderr, "Error initializing SDL.\n");
        return SDL_INIT_FAIL;
    }

    // Create window (window recieves return of SDL_CreateWindow() fn)
    window = SDL_CreateWindow(
            "steller",                  // Window title (also creates border if given) | NULL
            SDL_WINDOWPOS_CENTERED,     // x pos; centeres x at center
            SDL_WINDOWPOS_CENTERED,     // y pos; centeres y at center
            WINDOW_WIDTH,               // sets window width
            WINDOW_HEIGHT,              // sets window height
            SDL_WINDOW_BORDERLESS       // flags to set properties of window opened like decorations; using SDL CONSTANTS for it
    );

    // Check if window created properly or not
    if (!window) {
        fprintf(stderr, "Error creating SLD Window.\n");
        return WINDOW_CREATE_FAIL;
    }

    // renderer -> attached to the window to render things (particles, sprites, etc)
    renderer = SDL_CreateRenderer(
        window,                         // which window it attaches to
        -1,                             // display number; -1 -> default
        0                               // no flags needed 
    );

    if (!renderer) {
        fprintf(stderr, "Error creating SDL renderer.\n");
        return SDL_CREATE_RENDERER_FAIL;
    }

    return INIT_WINDOW_SUCCESS;
}

int main(void) {
    
    initialize_window();
    
    return 0;
}
