#include <stdio.h>
int main(){
  int d, m;
  printf("Ingrese el mes);
  scanf("%d", &m);
  printf("Ingrese el dia);
  scanf("%d", d);
  if(d<1||d>31||m<1||m>12){
    printf("Ingres valores correctos\n");
    return 1;
  }
  switch(m){
  case 1:
    if(d<=20){
      printf("Capricornio");
      break;
    }
    d = 1;
  case 2:
    if(d<=18){
      printf("Acuario");
      break;
    }
    d = 1;
  case 3:
    if(d<=20){
      printf("Piscis");
      break;
    }
    d = 1;
  case 4:
    if(d<=20){
      printf("Aries");
      break;
    }
    d = 1;
  case 5:
    if(d<=21){
      printf("Tauro");
      break;
    }
    d = 1;
  case 6:
    if(d<=21){
      printf("Géminis");
      break;
    }
    d = 1;
  case 7:
    if(d<=22){
      printf("Cáncer");
      break;
    }
    d = 1;
  case 8:
    if(d<=23){
      printf("Leo");
      break;
    }
    d = 1;
  case 9:
    if(d<=23){
      printf("Virgo");
      break;
    }
  case 10:
    if(d<=23){
      printf("Libra");
      break;
    }
    d = 1;
  case 11:
    if(d<=21){
      printf("Escorpión");
      break;
    }
    d = 1;
  case 12:
    if(d<=21){
      printf("Sagitario");
      break;
    }
    else {
       printf("Capricornio");
       break;
    }
  }
  putchar('\n');
  return 0;
}