//Testing SDL Header files

#include <iostream>
#include <stdlib.h>
#include <SDL.h>
#include <SDL_image.h>
#include <SDL_mixer.h>
using namespace std;

SDL_Window* g_pWindow = 0;
SDL_Renderer* g_pRenderer = 0;

int main(int argc, char* argv[])
{
	//initialize SDL
	if (SDL_Init(SDL_INIT_EVERYTHING) >= 0)
	{
		//if succeeded create our window
		g_pWindow = SDL_CreateWindow("Chapter 1 : Setting up SDL", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 640, 480, SDL_WINDOW_SHOWN);

		//if window creation succeeded create out renderer
		if (g_pWindow != 0)
		{
			g_pRenderer = SDL_CreateRenderer(g_pWindow, -1, 0);
		}
	}
	else
	{
		cout << "\n Could now initialize SDL, SDL Error : " << SDL_GetError << endl;
		cout << "\n Exiting program...\n\n ";
		system("pause");
		exit(1);
	}

	//everything succeeded lets draw the window

	//set to black
	//This function expects Red, Green, Blue and Alpha as color values
	SDL_SetRenderDrawColor(g_pRenderer, 0, 0, 0, 255);

}