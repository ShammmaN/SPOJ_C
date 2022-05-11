/*
PP0504D - Reprezentacja liczb typu float
Napisz funkcję

void printfloat(float);

która dla zadanej liczby typu float wypisze jej reprezentację szesnastkową.

Wejście
W pierwszej linii liczba testów t, w kolejnych t wierszach jedna liczba zmiennoprzecinkowa w zakresie typu float.

Wyjście
W kolejnych t wierszach odzielone pojedynczymi spacjami bajty reprezenacji kolejnych liczb, w kolejności od najstarszego bajtu.

Przykład
Wejście:
5
1 
-1 
0 
123.125 
-345

Wyjście:
3f 80 0 0 
bf 80 0 0 
0 0 0 0 
42 f6 40 0 
c3 ac 80 0 



 #define ANSI  
 #include <iostream> 
 #include <cstring> 
 
 using namespace std;  
 
 void printfloat(float); 
 
  int main() {   
      int t;   
      float x;    
      cin >> t; // wczytaj liczbę testów    
      
      while(t){      
          cin >> x;    
           printfloat(x);     
           t--;   
            }    
            
        return 0; }  
        
    /* ........................  Tu napisz potrzebne funkcje */ 


 #include <stdio.h>
#include <float.h>
#include <limits.h>
#include <math.h>

int showhex(double x);
int showoct(double x);

int main(void)
{
    double q = 123.125;
    /* check to see if your compiler supports the 'a' or 'A' specifier
    with printf */
    printf("The number represented as %.*g base 10 can be shown as\n",
    DBL_DIG, q);
    showhex(q);
    printf("or\n");
    showoct(q);
    return 0;
}
/* The following showhex and showoct work over a restricted range of
values. If you need a larger range, handle the integer part
better. While doing that, generalize them to a single function
taking a base in the range 2-36 as in strtoul */

int showhex(double x)
{
    double fracp, intp;
    int y;

    if (x < 0) {
        x = -x;
        putchar('-');
    }


    fracp = modf(x, &intp);

    if (x > ULLONG_MAX) {
        printf("(Number too large.\n");
        return 1;
    }
  
    printf("%llx.", (unsigned long long) intp);

    while (fracp) {
        fracp *= 16;
        y = fracp;
        printf("%x", y);
        fracp -= y;
    }

    printf(" hex\n");
return 0;
}


int showoct(double x)
{
    double fracp, intp;
    int y;

    if (x < 0) {
        x = -x;
        putchar('-');
    }

    fracp = modf(x, &intp);
    
    if (x > ULLONG_MAX) {
        printf("(Number too large.\n");
        return 1;
    }
    
    printf("%llo.", (unsigned long long) intp);
    
    while (fracp) {
        fracp *= 8;
        y = fracp;
        printf("%o", y);
        fracp -= y;
    }

    printf(" octal\n");
    
    return 0;
}
