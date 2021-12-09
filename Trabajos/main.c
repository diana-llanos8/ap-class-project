#include <stdio.h>


int main()
{
   
   int firstNumber;
   int secondNumber;
   
   printf("Ingrese primer valor: ");
   scanf("%d", &firstNumber);
   printf("Ingrese segundo valor: ");
   scanf("%d", &secondNumber);

   int resultSum = firstNumber + secondNumber;

   printf("Resultado: %d \n", resultSum);



   int thirdtNumber;
   int fourthNumber;
   
   printf("Ingrese primer valor: ");
   scanf("%d", &thirdtNumber);
   printf("Ingrese segundo valor: ");
   scanf("%d", &fourthNumber);

   int resultSub = thirdtNumber - fourthNumber;

   printf("Resultado: %d \n", resultSub);



   int fifthtNumber;
   int sixthNumber;
   
   printf("Ingrese primer valor: ");
   scanf("%d", &fifthtNumber);
   printf("Ingrese segundo valor: ");
   scanf("%d", &sixthNumber);

   int resultMult = fifthtNumber * sixthNumber;

   printf("Resultado: %d \n", resultMult);



   int seventhNumber;
   int eighthNumber;
   
   printf("Ingrese primer valor: ");
   scanf("%d", &seventhNumber);
   printf("Ingrese segundo valor: ");
   scanf("%d", &eighthNumber);

   int resultSplit = seventhNumber / eighthNumber;

   printf("Resultado: %d \n", resultSplit);


    return 0;
}

