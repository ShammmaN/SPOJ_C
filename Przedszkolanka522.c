/*PRZEDSZK - Przedszkolanka

Treść
W ostatnim czasie przedszkole opanowała nietypowa epidemia. Nie dotknęła ona przedszkolaków, tylko panie opiekujące się dziećmi. Pośród nielicznych zdrowych pozostała, ulubiona przez wszystkie maluchy, pani Agnieszka. Postanowiła osłodzić podopiecznym nieobecność wychowawczyń i rozdać im trochę cukierków. Przedszkolanka wie, że następnego dnia będzie się zajmowała jedną z dwóch grup. Zna też liczbę dzieci w każdej z nich. Chce teraz dobrać taką liczbę słodyczy, by można nią było obdarować wszystkie dzieci, niezależnie od grupy, którą będzie prowadziła. Musi przy tym spełnić kilka warunków. Po pierwsze, każdy z przedszkolaków powinien otrzymać jednakową (oczywiście niezerową) liczbę cukierków. Po drugie, liczba słodyczy powinna być taka, by można było rozdać je wszystkie. Po trzecie, ponieważ budżet przedszkola jest ograniczony, pani Agnieszka musi kupić minimalną liczbę cukierków spełniającą dwa wcześniejsze warunki. Pomóż sympatycznej przedszkolance i napisz program, który obliczy, ile cukierków powinna kupić.


Wejście
Dane podawane są na standardowe wejście. W pierwszym wierszu podana jest liczba N (1<=N<=20) zestawów danych. Dalej podawane są zestawy danych zgodnie z poniższym opisem:

Jeden zestaw danych
W pierwszym i jedynym wierszu zestawu danych znajdują się dwie liczby całkowite a i b (10<=a,b<=30), oddzielone pojedynczą spacją, oznaczające odpowiednio liczbę przedszkolaków w grupach, z których jedna zostanie przydzielona pani Agnieszce.

Wyjście
Wyniki programu powinny być wypisywane na standardowe wyjście. W kolejnych wierszach należy podać odpowiedzi obliczone dla kolejnych zestawów danych. Wynikiem dla jednego zestawu jest liczba cukierków, jaką powinna zakupić przedszkolanka.


Przykład

dane wejściowe:
2
12 15
11 22

wynik:
60
22
*/



#include <stdio.h>

int howMany=0;
int groupA, groupB;
int result=0;


void ile(){

    result += groupA;

    while(result%groupA !=0 || result % groupB !=0){
            result+=groupA;
    }
}


int main(){

    scanf("%d",&howMany);

    for(int i=0; i<howMany; i++){
    
    scanf("%d",&groupA);
    scanf("%d",&groupB);

    ile();

    printf("%ld\n",result);
    result=0;

    }


    return 0; 
}