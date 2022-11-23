#include <stdio.h>
void PogodiBroj()
{
    int a,n,i;
printf("Prvi korisnik unosi zamisljeni broj");
do{
scanf("%d",&a);
}
while (a<1 || a>100);

printf("Drugi korisnik drugi broj koji pokusava da pogodi");
do
{
    scanf("%d",&n);
    if (n>a)
    {
        printf("Vas broj je veci od zamisljenog");
    }
    else if(n<a)
    {
        printf("Vas broj je manji od zamisljenog");
    }
    
} while (a!=n);
printf("Cestitam pogodili ste broj");
}
int main()
{
PogodiBroj ();
}