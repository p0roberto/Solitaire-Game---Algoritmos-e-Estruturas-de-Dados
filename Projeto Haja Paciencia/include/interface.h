#ifndef __INTERFACE_H__
#define __INTERFACE_H__

typedef char bool; // Cria um tipo de várial bool
const int false = 0; // Facilitar código
const int true = 1; // Facilitar código

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
//#include "cor.h"

// Elementos do SDL
SDL_Window* window; // Janela
SDL_Renderer* renderer = NULL; // Renderizador
SDL_Event event; // Evento

const int SCREEN_WIDTH = 1428; // Largura da janela
const int SCREEN_HEIGHT = 918; // Altura da janela

SDL_Texture* background_texture = NULL; // Variável do tipo Textura, que armazena a textuura da imagem de fundo
SDL_Texture* texture_button_new_game = NULL; // Variável do tipo Textura, que armazena a textura do botão New Game
SDL_Texture* texture_tela_vitoria = NULL; // Variável do tipo TExture, que armazena a textura da tela de viória

SDL_Rect background_rect = {0, 0, SCREEN_WIDTH, SCREEN_HEIGHT}; // Rect da imagem de fundo (toda a janela)
SDL_Rect new_game = {500,SCREEN_HEIGHT - 100, 150, 50}; // Rect do botão New Game
SDL_Rect vitoria = {(SCREEN_WIDTH - 200) /2 , (SCREEN_HEIGHT - 200)/2, 200, 200}; // Rect da tela de vitória

// Cabeçario de funções
bool InitializeSDL();
SDL_Texture* load_image_to_texture(const char* image_path);
bool is_clicking_on_rect(SDL_Rect* r);

#endif