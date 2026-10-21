#include "game_state.h"

Pice_type** get_tab(game_state *g_state) {
  return g_state->tab;
}

active_pice* get_acive_pice(game_state *g_state){
  return g_state->acc;
}


