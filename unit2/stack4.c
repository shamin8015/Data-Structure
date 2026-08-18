//write a program for hanoi tower
//stack program4
//roll:92500588015


#include<stdio.h>

void tower(int n, char source, char helper, char destination)
{
    if (n == 1)
    {
        printf("Move disc 1 from %c to %c\n", source, destination);
        return;
    }

    tower(n - 1, source, destination, helper);

    printf("Move disc %d from %c to %c\n", n, source, destination);

    tower(n - 1, helper, source, destination);
}

void main()
{
    int n;

    printf("Enter number of disks: ");
    scanf("%d", &n);

    tower(n, 'A', 'B', 'C');
}
