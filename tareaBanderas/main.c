#include <stdio.h>
#include <stdlib.h>
//prototipo de la funcion

int swap(int* a, int* b);



int main()
{
    // intercambiar el valor de x y de y
   int x = 5;
   int y = 8;

   printf("x: %d\ny: %d\n", x, y);


   swap(&x, &y);


   printf("x: %d\ny: %d", x, y);




   /*aux = x;
   x = y;
   y = aux;
   printf("x: %d\ny: %d", x, y);
   */


    return 0;
}

int swap(int* a, int* b)
{
    int todoOk = 0;
    int aux;


   if( a != NULL && b != NULL)
   {
    aux = *a;
    *a = *b;
    *b = aux;
    todoOk = 1;
   }

    return todoOk;

}

