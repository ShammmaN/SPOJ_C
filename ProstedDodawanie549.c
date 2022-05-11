/*RNO_DOD - Proste dodawanie
Twoim zadaniem jest dodać wszystkie liczby całkowite podane na wejściu.

Wejście
W pierwszym wierszu znajduje się liczba t testów (0 < t < 100)
Każdy test opisany jest w następujący sposób. 
W pierwszym wierszu dana jest liczba n - liczba liczb do zsumowania. 
Następnie podanych jest n liczb pooddzielanych spacją.

Przykład
Input:
2
5
1 2 3 4 5
2
-100 100

Output:
15
0*/


#include <stdio.h>

int howMany=0;
int val;
long int result=0;
int tmp;

int main(){

    scanf("%d",&howMany);

    for(int i=0; i<howMany; i++){
        scanf("%d",&val);
        for(int i=0; i<val; i++){
            scanf("%d",&tmp);
            result+= tmp;
        }
        printf("%ld\n",result);
        result =0;
       
    }

return 0;
}

 