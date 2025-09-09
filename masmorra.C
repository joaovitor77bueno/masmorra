#include <stdio.h>
 #define LINHAS 5
 #define COLUNAS 5 
 
 int main() { 
	 char maze[LINHAS][COLUNAS] = { 
	 {'#', '#', '#', '#', '#'},
	 {'#', ' ', ' ', ' ', '#'},
	 {'#', ' ', '#', ' ', '#'},
	 {'#', ' ', '#', 'E', '#'},
	 {'#', '#', '#', '#', '#'} 
	 };
	  
	 int x = 1, y = 1; 
	 char move;
	  
	 printf("Bem-vindo à sua masmorra! Use W, A, S, D para se mover. Seu objetivo é chegar na 'E'.\n"); 
	 
	 while (1) {
	 for (int i = 0; i < LINHAS; i++) { 
 
	 for (int j = 0; j < COLUNAS; j++) { 
	 if (i == x && j == y) 
	 printf("P "); else {printf("%c ", maze[i][j]); } 
	 printf("\n"); } 
 
	 if (maze[x][y] == 'E') { 
	 printf("Parabéns! Você saiu da masmorra!\n"); break; } 
	 printf("Digite sua jogada (W/A/S/D): "); 
	 scanf(" %c", &move);
	 int newX = x;
   int newY = y; 
   if (move == 'W' || move == 'w') newX--;
   else if (move == 'S' || move == 's') newX++;
    
   else if (move == 'A' || move == 'a') newY--;
    
   else if (move == 'D' || move == 'd') newY++;
   
   else { printf("Comando inválido!\n"); 
   continue; }
    
   if (newX >= 0 && newX < LINHAS && newY >= 0 && newY < COLUNAS && maze[newX][newY] != '#') {
    x = newX; y = newY; } 
    
   else {
    printf("Movimento inválido! Parede ou fora do mapa.\n"); 
    }
     } 
    return 47;
   }
}
