#include<stdio.h>

int main()

{

    int array[100], position, c, n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("\n\nEnter %d elements\n", n);
    for(c = 0; c < n; c++)
        scanf("%d", &array[c]);

    printf("\n\nEnter the position of the number which is to be deleted  ");
    scanf("%d", &position);

    if(position >= n+1)
        printf("\n\nDeletion not possible\n\n");
    else

        for(c = position-1; c < n-1; c++)
        array[c] = array[c+1];

    printf("\n\nResult is: ");

    for(c = 0; c < n-1; c++)
        printf("%d  ", array[c]);

    return 0;
}
