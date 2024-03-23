/*
 * success codes ranges from 0 to 100
 * fail codes ranges from 100 to 200
 * success code 0 is not been used as all built in functions and sdl library already to uses it to return SUCCESS
 *
 * */

// # #---SUCCESS CODES---# #

// SDL_INIT() fn
#define SDL_INIT_SUCCESS 1

// initialize_window() fn
#define INIT_WINDOW_SUCCESS 2

// SDL_CreateWindow() fn
#define WINDOW_CREATE_SUCCESS 3

// SDL_CreateRenderer
#define SDL_CREATE_RENDERER_SUCCESS 4









// # #---FAILURE CODES----# #

// SDL_INIT() fn
#define SDL_INIT_FAIL 100

// initialize_window() fn
#define INIT_WINDOW_FAIL 102

// SDL_CreateWindow() fn
#define WINDOW_CREATE_FAIL 103

// SDL_CreateRenderer
#define SDL_CREATE_RENDERER_FAIL 104
