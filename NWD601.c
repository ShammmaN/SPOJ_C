/*PP0501A - NWD
Napisz funkcję:

 int nwd(int a, int b);
która oblicza największy wspólny dzielnik liczb a i b,

 0 <= a,b <= 1000000
Input
 

W pierwszej linii liczba testów t, w kolejnych liniach po dwie liczby w każdym wierszu.

Output
W każdej linii jedna liczba - wynik działania funkcji nwd

Example
Input:
5
1 4
4 1
12 48
48 100
123456 653421

Output:
1
1
12
4
3*/


#include <stdio.h>


int nwd(int a, int b);


int main(void) {
	
    int howMany=0;
    int a=0,b=0;

    scanf("%d",&howMany);                   //Ile obliczeń 
  
    for(int i=0; i<howMany; i++){           
    
        scanf("%d",&a);                    
        scanf("%d",&b);

        printf("%d\n",nwd(a,b));
    }

	return 0;
}


int nwd(int a, int b){                      // Algorytm Euklidesa

     while(a!=b){

       if(a>b)   a-=b;         
       else      b-=a;
     
     } 
    return a;  
}