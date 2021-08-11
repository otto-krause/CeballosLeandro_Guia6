#include <stdio.h>
void main()
{ char nt; printf("Introduzca su nota numerica"); nt = getchar(); switch(nt)
	{ case 'A':
	  case 'a': puts("Su nota fue excelente"); break;
	  case 'B':
	  case 'b': puts("Su nota fue Buena"); break;
	  case 'c':
	  case 'C': puts("Su nota fue Regular"); break;
	  case 'D':
	  case 'd': puts("Su nota fue Suficiente"); break;
	  case 'f':
	case 'F': puts("Su nota fue Insuficiente"); break; }
}