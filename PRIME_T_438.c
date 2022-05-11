/*PRIME_T - Liczby Pierwsze
Sprawdź, które spośród danych liczb są liczbami pierwszymi

Input
n - liczba testów n<100000, w kolejnych liniach n liczb z przedziału [1..10000]

Output
Dla każdej liczby słowo TAK, jeśli liczba ta jest pierwsza, słowo: NIE, w przeciwnym wypadku.

Example
Input:
3
11
1
4

Output:
TAK
NIE
NIE*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
int q, i, j, l;
scanf("%d",&q);
for (j=0; j<q; ++j)
{
    scanf("%d",&i);
    
	if (i==1) 		    printf("NIE\n");
    else if (i==2) 	    printf("TAK\n");
    

    for(l=2; l<i; ++l)
    {
        if ((i%l) == 0)
			{
				printf("NIE\n");
				break;
			}
        if (l == (i-1))
			{
				printf("TAK\n");
			}
    }	
}
    return 0;
}