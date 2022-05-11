 /*
 Dla danych dwóch liczb naturalnych a i b, wyznaczyć ostatnią cyfrę liczby ab.

Zadanie
Napisz program, który:
wczyta ze standardowego wejścia: podstawę a oraz wykładnik b,
wyznaczy ostatnią cyfrę liczby ab,
wypisze wynik na standardowe wyjście.
Wejście
W pierwszej linii wejścia znajduje się jedna liczba całkowia D (1≤D≤10), oznaczjąca liczbę przypadków do rozważenia. Opis każdego przypadku podany jest w jednym wierszu, zawierającym dwie liczby naturalne a i b oddzielone pojedynczym odstępem (spacją), takie, że (1 ≤ a,b ≤ 1 000 000 000).

Wyjście
Dla każdego przypadku z wejścia Twój program powinien wypisać (w osobnej linii dla każdego przypadku z wejścia) cyfrę jedności liczby ab zapisanej dziesiętnie.

Przykład
Dla danych wejściowych:
2
2 3
3 3
poprawną odpowiedzią jest:
8
7
*/



#include <stdio.h>
#include <math.h>

int main()
{

    int lastNum[10][4]={
        {0,0,0,0},

        {1,1,1,1},

        {6,2,4,8},

        {1,3,9,7},

        {6,4,6,4},

        {5,5,5,5},

        {6,6,6,6},

        {1,7,9,3},

        {6,8,4,2},

        {1,9,1,9}

    };



int howMany; 
unsigned long int a, b;
double result;
scanf("%d",&howMany);

    for (int i=0; i<howMany; i++)
        {
            scanf("%ld",&a);
            scanf("%ld",&b);
            
            printf("%d \n", lastNum[a%10][b%4]);

        }
    return 0;
}