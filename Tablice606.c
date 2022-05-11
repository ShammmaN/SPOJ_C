/*PP0502B - Tablice
Odwróć kolejność elementów w tablicy.

Wejście
Najpierw liczba testów t (t ≤ 100). Następnie dla każdego testu liczba n (n ≤ 100) i n liczb oddzielonych spacjami.

Wyjście
Dla każdego testu n liczb w porządku odwrotnym niż na wejściu.

Przykład
Wejście:
2
7 1 2 3 4 5 6 7
3 3 2 11

Wyjście:
7 6 5 4 3 2 1
11 2 3
*/

#include <stdio.h>
#include <string.h>


//#define NELEMS(x)  (sizeof(x) / sizeof(int))

void RevString(int *text, int *text2, int *nElem);

int main(){

    int howMany=01;
    int howManyNum=6;
 

    scanf("%d",&howMany);

    for(int i=0; i<howMany; i++){
        scanf("%d",&howManyNum);
        int tab[howManyNum];
        int tab2[howManyNum];
        int num;
        for(int j=0; j< howManyNum;j++)
        {
            scanf("%d",&tab[j]);
        
        }
               
         RevString(tab,tab2,&howManyNum);
        
    }
    return 0;
}



void RevString(int *text, int *text2, int *nElem){
   int j=0;
  
   for(int i=*nElem-1;i >=0;i-- ){
       text2[j]=text[i];
       printf ("%d ",text2[j]);
       j++;
   }
   printf("\n");
   text2[j]='\000';

}