/*
BFN1 - Zabawne Dodawanie Piotrusia
Piotruś w klasie na lekcji matematyki bardzo się nudził i pani postanowiła dać mu dodatkowe zadanie do rozwiązania. 
Piotruś otrzymał kartkę, na której napisane były małe liczby. Piotruś ma za zadanie stwierdzić, czy dana liczba jest 
palindromem (tzn. czy czyta się ją tak samo od lewej do prawej strony, jak od prawej do lewej). Jeżeli nie, Piotruś
 powinien dodać do siebie wartość liczby czytanej od lewej do prawej oraz wartość liczby czytanej od prawej do lewej, 
 sprawdzić, czy suma jest palindromem, i jeżeli nie -- kontynuować proces, aż otrzyma palindrom.

Przykładowo, mając daną liczbę 28, Piotruś stwierdzi, że nie jest ona palindromem i wykona dodawanie 28 + 82 = 110.
 Liczba 110 wciąż nie jest palindromem, zatem Piotruś wykona jeszcze dodawanie 110 + 011 = 110 + 11 = 121. 
 Wynik tego dodawania jest już palindromem, więc obliczenia zostaną zakończone.

Twoim zadaniem jest napisać program, który dla każdej liczby rozważanej przez Piotrusia wypisze palindrom 
(wynik obliczeń Piotrusia), oraz liczbę dodawań prowadzących do wyniku.

Wejście
Pierwsza linia wejścia zawiera liczbę t (t <= 80), określającą ile liczb znajduje się na kartce Piotrusia. 
Każda z następnych t linii zawiera dokładnie jedną liczbę naturalną n (1 <= n <= 80), dla której Piotruś musi wykonać obliczenia.

Wyjście
Dla kolejnych liczb podanych na kartce wypisz po jednej linijce zawierającej dwie liczby całkowite oddzielone spacją. 
Pierwsza oznacza palindrom otrzymany przez Piotrusia, druga -- liczbę dodawań wykonanych, by go otrzymać.

Przykład
Wejście:
3
28
68
5

Wyjście:
121 2
1111 3
5 0

*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

 
void RevString(char *text, char *text2);
int Palindrom(int *number, int *rev_number, int *counter);  
 


int main(void)
{
 

 	int number;                                               // User number
   int rev_number;                                           // Reverse number
	char text[20];                                            // Array of user number 
   char text2[20];                                           // Array of rev number 
   int counter=0;                                            // how many times
   int status;                 
   int howMany=0;             

   scanf("%d", &howMany);

   for(int i=0;i<howMany;i++){
      
      int counter=0; 
//	   printf("Enter a number: ");
	   scanf("%d", &number);
   
      do{                                                    // Sprawdzenie poprawności 
         sprintf(text, "%d", number);                        // oraz ilości powtórzeń 
         RevString(text ,text2);
         rev_number= atoi(text2);

      }  while(Palindrom(&number,&rev_number,&counter) == 0);

//   printf("\nPalindrom : %d\n", number);
//   printf("\nCounter : %d\n", counter);   
//   printf("\nReverse : %s\n", text2);

      printf("%d %d\n", number,counter);                 // Wyswietlenie wyniku 
   }
  
	return 0;
}



void RevString(char *text, char *text2){
   int j=0;

   for(int i=strlen(text)-1; i >=0; i-- ){
       text2[j]=text[i];
          j++;
   }
   text2[j]='\000';

}

int Palindrom(int *number, int *rev_number, int *counter){

   if(*number != *rev_number){
      *number += *rev_number;
      ++*counter;
      return 0;
   }
   else 
         return 1;


}
 