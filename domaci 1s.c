#include <stdio.h>
#include <stdlib.h>
#define DIMENZIJA 20
int main()
 {
int *p=NULL,*pok,*pok1,n,i,pod,mn,max,min,brm,tren,interv,zb,br=0;
printf("Unesite dimenzije niza");
do
{
    scanf("%d",&n);
} while (n<0 || n>DIMENZIJA);
p=(int*)malloc(sizeof(int)*n);
printf("Unesite elemente niza");
for ( pok=p; pok < p+n; pok++)
{
    scanf("%d",pok);
}
printf("Unesite broj za meni");
scanf("%d",&mn);
if(mn==1){
printf("Unesite podatak koji zelite da unesete");
scanf("%d",&pod);
p=(int*)realloc(p,sizeof(int)*(n+1));
for( pok=p+n; pok > p; pok--)
{
    *pok=*(pok-1);
}
*p=pod;

printf("Elementi niza su ");
for ( pok = p; pok < p+n+1; pok++)
{
    printf("%d",*pok);
}
}
else if(mn==2)
{
max=*p;
min=*p;
for ( pok = p; pok < p+n; pok++)
{ 
    if(max<*pok)
    {
        max=*pok;
    }
    else if(min>*pok)
    {
        min=*pok;
    }
}
printf("Max i min su %d i %d",max,min);
}
else if(mn==3)
{
    pok=p;
    pok1=p+n-1;
    while (pok<=pok1)
    {
        tren=*pok;
        *pok=*pok1;
        *pok1=tren;
        pok++;
        pok1--;
    }
    
    printf("Invertovani niz je ");
for ( pok = p; pok < p+n; pok++)
{
    printf("%d",*pok);
}
}
// Nisam siguran za ovaj deo koda vise puta sam pokusavao da uradim ali nisam uspeo,takodje program se moze raditi i sa case
else if (mn==4)
{
printf("Unesite vrednost intervala");
scanf("%d",&interv);
int niz[interv];
   for ( pok = p+(i*interv); *pok < interv; pok++)
{
 zb+=*pok;   
 niz[i]=zb;
  i++;
}

max=niz[0];
for(pok=niz; pok<niz+interv; pok++)
{
    if(max<*pok)
    {
        br++;
    }
}
printf("Najveci interval je %d",br);
}
free(p);
return 0;
}