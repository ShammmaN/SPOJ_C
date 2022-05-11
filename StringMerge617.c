/*PP0504B - StringMerge
Napisz funkcję:

char* string_merge(char *, char *);
która sklei ze sobą dwa łańcuchy biorąc na przemian po jednym znaku z każdego łańcucha i umieści w nowej dynamicznie alokowanej tablicy znaków, do której zwróci wskaźnik. Należy wziąć po tyle znaków ile jest w krótszym łańcuchu.

Input
 

W pierwszej linii liczba testów t, w kolejnych liniach po dwa łańcuchy znaków odzielone spacją.

Output
W każdej linii jeden łańcuch, wynik działania funkcji string_merge.

Example
Input:
4
a bb
abs sfd
ewr w
wqeqweqweq eqweqwe
Output:
ab
asbfsd
ew
weqqewqewqewqe */

 
 

 #include <stdio.h> 
 #include <string.h>  
 #include <malloc.h>

 
 
 
 #define T_SIZE 1001  

 char* string_merge(char *S1, char *S2);  
 
 int main(){   
     
     
    int t,n;    
    char S1[T_SIZE],S2[T_SIZE], *S;    
    scanf("%d",&t);             /* wczytaj liczbę testów */   
    //.getline(S1,T_SIZE);     / W zadaniu brak info o rozmiarze tab.  
     
     
    while(t){      
        scanf("%s",&S1);
        scanf("%s",&S2);
                  
        S=string_merge(S1,S2);   
     
        printf("%s\n",S);          
        free(S);
        t--; 
    
    }    
         
        return 0;
         
} 





char* string_merge(char *S1, char *S2){

char *S = malloc(sizeof(int)*(strlen(S1)*2+1));
int j=0;
    if(strlen(S1)>=strlen(S2)){
        for(int i=0; i<strlen(S2);i++)
        {
            S[j]=S1[i];
            S[j+1]=S2[i];
            j+=2;    
        }
    }
    else 
    {
        for(int i=0; i<strlen(S1);i++)
        {
            S[j]=S1[i];
            S[j+1]=S2[i];
            j+=2;    
        }
    } 
    
        return S;
}