#include <stdio.h>




void Lokalization();
void FinalWay(int *X, int *Y);


int main()
{
    unsigned int howMany, points;
     


    scanf("%d",&howMany);

    while(howMany)
    {
        int x=0, y=0;
        scanf("%d",&points);
        while (points>0)
        {
            Lokalization(&x,&y);

            points--;
        }
        FinalWay(&x,&y);
        
       

        howMany--;
    }


    return 0;
}



void Lokalization(int *X, int *Y)
{
    int a=0, tmp=0;     // a = direction ; x,y = new position

    scanf("%d",&a);

    switch(a){

    

        case 0:                 // North way
            scanf("%d",&tmp);
            *Y+=tmp;
        break;

        case 1:                 //South way
            scanf("%d",&tmp);
            *Y-=tmp;
        break;

        case 2:                 //East way
            scanf("%d",&tmp);
            *X-=tmp;
        break;

        case 3:                 //West way
            scanf("%d",&tmp);
            *X+=tmp;
        break;

        default:                //Wrong data
            printf("Nieprawidłowe dane\n");
    }
    // *X=x;
    // *Y=y;

}


void FinalWay(int *x, int *y)
{

    if(*x==0 && *y==0)
    {
        printf("studnia\n");
    }
    else
    {
        if(*y>0){
        printf("%d %d\n", 0, *y); 
        }
        if(*y<0){
        printf("%d %d\n", 1, *y*(-1)); 
        }
        if(*x<0){
        printf("%d %d\n", 2, *x*(-1)); 
        }
        if(*x>0){
        printf("%d %d\n", 3, *x); 
        }
    }
}

