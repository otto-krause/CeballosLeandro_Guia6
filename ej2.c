#include <stdio.h>
int main() { 
   int m;
   printf("Introduzca el nro del mes");
   scanf("%d", &m); switch(m) 
   { case 1: case 3: case 5: case 7: case 8: case 10: case 12: puts("Tiene 31 dias"); break;
     case 2: puts("Tiene 28 dias"); break; case 4: case 6: case 9: case 11: puts("Tiene 30 dias"); 
	 break; deafult: puts("Error");}
system("pause"); }