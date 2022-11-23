#include <stdio.h>
#include <stdbool.h>

int saberiElemente(const int niz[], int *suma);

void odrediMinMax(const int niz[], int *max, int *min);
void unesiElementeNiza(int niz[], unsigned int brElemenataNiza);

int main()
{
    int n = 0,
        max = 0,
        min = 0,
        suma = 0,
        temp = 0,
        a = 0,
        arr[41];

    scan:
        scanf("%d", &n);

    if(n < 3 || n > 41)
        {
            printf("Greska\n");
            goto scan;
        }

    unesiElementeNiza(arr, n);
    printf("\n");

    for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
                {
                    if(arr[i] < arr[j])
                        {
                            temp = arr[i];
                            arr[i] = arr[j];
                            arr[j] = temp;
                        }
                }
        }

    for(int i = 0; i < n; i++)
        {
            if(arr[i] != 0)
                {
                    printf("%d ", arr[i]);
                }
        }

    odrediMinMax(arr, &max, &min);

    a = saberiElemente(arr, &suma);

    if(a == 0)
        {
            printf("\nSrednja vrednost se ne moze izracunati");
        }
    else
        {
            printf("\nSrednja vrednost: %d", a);
        }

    printf("\n\nNajveci element: %d\n", max);
    printf("Najmanji element: %d\n", min);
    printf("Suma prvog i poslednjeg elementa: %d\n", suma);
}

void unesiElementeNiza(int niz[], unsigned int brElemenataNiza)
{
    for(int i = 0; i < 41; i++)
        {
            *(niz + i) = 0;
        }
    for(int i = 0; i < brElemenataNiza; i++)
        {
            scanf("%d", (niz + i));
        }
}

void odrediMinMax(const int niz[], int *max, int *min)
{
    for(int i = 0; i < 41; i++)
        {
            if(niz[i] != 0)
                {
                    *max = niz[i];
                }
        }
    *min = niz[0];
}

int saberiElemente(const int niz[], int *suma)
{
    int brBrIznadNula = 0;

    int srVr = 0,
        srVrSuma = 0,
        srVrDelilac = 0;

    bool daLiSamStigaoDoNule = false;

    for(int i = 0; i < 41; i++)
        {
            if(niz[i] != 0)
                {
                    brBrIznadNula++;
                }

            if(niz[i] == 0)
                {
                    daLiSamStigaoDoNule = true;
                }

            if(daLiSamStigaoDoNule == true)
                {
                    *suma += niz[i - 1];
                    srVrSuma -= niz[i - 1];
                    srVrDelilac - i/i;
                }

            if(i != 0 && daLiSamStigaoDoNule != true)
                {
                    srVrSuma += niz[i];
                    srVrDelilac++;
                }
        }

    srVrDelilac--;
    *suma += niz[0];

    if(brBrIznadNula == 2)
        return 0;

    else if(brBrIznadNula > 2)
        {
            srVr = srVrSuma / srVrDelilac;
            return (srVr);
        }
}
