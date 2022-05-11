 
#include <stdlib.h>
#include <stdio.h>
#include <math.h>



void sito(int *tab, unsigned int n);


int main()
{
long int a=0,b=0;
int t=0;
int status=1;


scanf("%d",&t);
    while(t)
    {
        scanf("%d",&a);
        scanf("%d",&b);
            unsigned int n=10;
  int tab[b];
   //     int *tabA[b];     // .. sito erastostenesa!!!!!!!!!!!!!

      
            printf("\n");
        while(a<=b)
        {
       
           
            
            for(int i=2; i<=n; i++) //zerowanie tablicy
                tab[i] = 0;
            
            sito(tab, b); //przesianie liczb
         
           
        }
          for(int i=2;i<=n;i++)
                if(!tab[i])
                    printf("%d\n",i);
         
    t--;  
    }
    return 0;
}

void sito(int *tab, unsigned int n)
{
	for (int i=2; i*i<=n; i++) //przeszukujemy kolejnych kandydatów na pierwsze
    {							//wystarczy sprawdzić do pierwiastka z n
    							// i<=sqrt(n) - podnosząc do kwadratu mamy
    							// i*i <= n
        if(!tab[i])				//jesli liczba jest pierwsza(ma wartosc 0)
		for (int j = i*i ; j<=n; j+=i) //to wykreslamy jej wielokrotnosci
            tab[j] = 1;			//ustawiając wartosć na 1
    }
}