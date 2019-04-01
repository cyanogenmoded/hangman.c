#include <stdio.h>

#include <string.h>

#include <stdlib.h>

int main()

{

    int j = 0, fails = 0, pass = 0, not = 0;

    char a[100], b[100], alph[30] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '\0'}, l;

    int counter = 7, c = 0;

    printf("Enter the word\n");

    gets(a);

    for (int i = 0; a[i] != '\0'; i++)

    {

        if (a[i] == ' ')

            b[i] = ' ';

        else if (a[i] >= '0' && a[i] <= '9')

            b[i] = a[i];

        else

            b[i] = '*';

    }

    system("clear");

    for (int i = 0; a[i] != '\0'; i++)

    {

        if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')

            b[i] = a[i];

    }

    while (counter > 0)

    {

        system("clear");

        if (not == 1)

        {

            printf("Letter not avaliable, try something else\n\n");

        }

        not=0;

        pass = 0;

        printf("%s\n", b);

        printf("No. of tries left %d\nEnter a letter in lower case:\n", counter);

        printf("Letters available:%s\n", alph);

        scanf(" %c", &l);

        printf("Entered letter:%c\n", l);

        for (int i = 0; alph[i] != '\0'; i++)

        {

            if (l == alph[i])

            {

                alph[i] = ' ';

                pass = 1;

            }

        }

        if (pass == 0)

        {

            not = 1;;

            continue;

        }

        for (int i = 0; a[i] != '\0'; i++)

        {

            if (l == a[i])

            {

                c = 1;

                b[i] = a[i];

            }

        }

        if (c == 0)

        {

            --counter;

        }

        c = 0;

        printf("%s\n\n", b);

        for (j = 0; a[j] != '\0'; j++)

        {

            if (a[j] == b[j])

            {

                c++;

            }

        }

        if (c == strlen(b))

        {

            printf("yay you did it");

            fails = 0;

            break;

        }

        else

        {

            fails = 1;

        }

        c = 0;

    }

    if (fails == 1)

    {

        printf("You failed!\nBetter luck next time!");

    }

    return 0;

}
