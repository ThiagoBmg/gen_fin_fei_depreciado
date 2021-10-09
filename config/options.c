#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../models/carteira.c"

/* OPÇÕES TIPO DE MOVIMENTAÇÕES */
int show_movimentacoes_types(){
  int user_input = 0; 

  for(int i =1; i < TIPO_MOVIMENTACAO_N+1 ; i++)
    printf("%d - %s \n", i ,TIPO_MOVIMENTACAO[i-1]);
  
  scanf("%d", &user_input);

  printf("A opcao selecionada foi: %s \n", TIPO_MOVIMENTACAO[user_input-1]);

  return user_input-1;
}

/* OPÇÕES DO MENU */
int show_menu_options(){
   int user_input = 0; 

  for(int i =1; i < OPCOES_N+1 ; i++)
    printf("%d - %s \n", i ,MENU_OPTIONS[i-1]);
  
  scanf("%d", &user_input);

  printf("A opcao selecionada foi: %s \n", MENU_OPTIONS[user_input-1]);

  return user_input-1;
}
