#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    int l[9];
    int R, f1, f2, f3, aux, Rc, i, rest, ans;

    ans = 1;


    while (ans == 1)
    {
        printf("Type the resistor's value: ");
        scanf("%i", &R);
        aux = R;
        i = 0;

        while (R > 0)
        {
            rest = R%10;
            R = R/10;
            l[i] = rest;
            i++;
        }

        f1 = l[i-1];
        f2 = l[i-2];
        f3 = i - 2;

        Rc = (10*f1+f2) * pow(10, f3);

        if (aux != Rc)
            printf("The resistor has a different value compared to the calculated one.\n\n");

        printf("Calculated resistor: %i\n\n", Rc);

        if (f1 == 0)
        {
            printf("First band is black\n");
        }
        if (f1 == 1)
        {
            printf("First band is brown\n");
        }
        if (f1 == 2)
        {
            printf("First band is red\n");
        }
        if (f1 == 3)
        {
            printf("First band is orange\n");
        }
        if (f1 == 4)
        {
            printf("First band is yellow\n");
        }
        if (f1 == 5)
        {
            printf("First band is green\n");
        }
        if (f1 == 6)
        {
            printf("First band is blue\n");
        }
        if (f1 == 7)
        {
            printf("First band is purple\n");
        }
        if (f1 == 8)
        {
            printf("First band is grey\n");
        }
        if (f1 == 9)
        {
            printf("First band is white\n");
        }
        if (f2 == 0)
        {
            printf("Second band is black\n");
        }
        if (f2 == 1)
        {
            printf("Second band is brown\n");
        }
        if (f2 == 2)
        {
            printf("Second band is red\n");
        }
        if (f2 == 3)
        {
            printf("Second band is orange\n");
        }
        if (f2 == 4)
        {
            printf("Second band is yellow\n");
        }
        if (f2 == 5)
        {
            printf("Second band is green\n");
        }
        if (f2 == 6)
        {
            printf("Second band is blue\n");
        }
        if (f2 == 7)
        {
            printf("Second band is purple\n");
        }
        if (f2 == 8)
        {
            printf("Second band is gray\n");
        }
        if (f2 == 9)
        {
            printf("Second band is white\n");
        }
        if (f3 == 0)
        {
            printf("Third band is black\n");
        }
        if (f3 == 1)
        {
            printf("Third band is brown\n");
        }
        if (f3 == 2)
        {
            printf("Third band is red\n");
        }
        if (f3 == 3)
        {
            printf("Third band is orange\n");
        }
        if (f3 == 4)
        {
            printf("Third band is yellow\n");
        }
        if (f3 == 5)
        {
            printf("Third band is green\n");
        }
        if (f3 == 6)
        {
            printf("Third band is blue\n");
        }
        if (f3 == 7)
        {
            printf("Third band is purple\n");
        }

        printf("\nType 1 to continue and 0 to stop.\n\n");
        scanf("%i", &ans);
    }

    return 0;
}
