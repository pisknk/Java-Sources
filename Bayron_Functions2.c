// Coded by Neil Bayron :3
// IT114 - March 24, 2021
// alpha

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#define SIZE 100
#define N 5

int main()
{

    int input, a, i, min, max, exit, x, b[25], num[N], sum, j;
    int data[ SIZE ];
    float mean, median, y[N], temp;
    char option;
    char loop='y';
    while(loop == 'y') {

    min = INT_MAX;
    max = INT_MIN;
    x = 5;
    sum = 0;

    printf("\n\n[0] - Exit \n");
    printf("[1] - Mean \n");
    printf("[2] - Median \n");
    printf("[3] - Max \n");
    printf("[4] - Min \n\n");

    printf("Select Function: ");
    scanf("%d",&input,&a);

    switch(input){

        case 0 : // Exit

                 printf("\n***HELP***\nPress 'n' to Exit Program. \nPress 'y' to return to Main Menu: ");
                 scanf(" %c", &loop);
                 if(loop != 'y')
                 if(loop='n')
                 printf("\nProgram Terminated.");
                 printf("\n-----------------------------");
                 break;

        case 1 : // Mean
                 for (i=0; i<x; ++i)
                    {
                        printf("[%d] Input Number: ", i+1);
                        scanf("%d", &data[ i ]);
                        sum += data[ i ];

                            if (data[i]<=0)

                                {
                                    printf("[%d] Input Number: ", i+1);
                                    scanf("%d", &data[ i ]);
                                    sum += data[ i ];
                                }
                    }

                 printf("\nInput: ");
                 for(i=0; i<x; i++)
                 printf("%.0d\t", data[i]);

                 mean = sum / (float)x;
                 printf("\nMean: %.2f\n", mean);

                 printf("\nTry again? (y/n): ");
                 scanf(" %c", &loop);

                 if(loop != 'y')
                 if(loop='n')
                 printf("\nProgram Terminated.");
                 printf("\nProgram written by Neil Marc C. Bayron || BSIT-1A\n");
                 printf("\n-----------------------------");
                 break;

        case 2 : // Median

                 for(i=0; i<x; i++)
                     {
                        printf("[%d] Input Number: ", i+1);
                        scanf("%f", &y[i]);

                            if(y[i]<=0)

                                {
                                    printf("[%d] Input Number: ", i+1);
                                    scanf("%f", &y[i]);
                                }

                 temp=0;

                    if(y[j]<y[j+1])

                        {
                            temp = y[j];
                            y[j] = y[j+1];
                            y[j+1] = temp;
                        }
                    }


                 if( x%2 == 0)
                 median = (y[(x/2)-1]+y[(x/2)])/2.0;

                 else
                 median = y[(x/2)];

                 printf("\nInput: ");

                 for(i=0; i<x; i++)
                    printf("%.0f\t", y[i]);

                 printf("\nMedian = %.0f\n", median);

                 printf("\nTry again? (y/n): ");
                 scanf(" %c", &loop);

                 if(loop != 'y')
                 if(loop='n')
                 printf("\nProgram Terminated.");
                 printf("\nProgram written by Neil Marc C. Bayron || BSIT-1A\n");
                 printf("\n-----------------------------");

                 break;


        case 3 : // Max

                 for(i=0; i<x; i++)
                    {
                        printf("[%d] Input Number: ", i+1);
                        scanf("%d", &num[i]);

                            if (num[i]<=0)

                                {
                                    printf("[%d] Input Number: ", i+1);
                                    scanf("%d", &num[i]);
                                }

                        while(num[i]>max)

                                {
                                    max = num[i];
                                }

                    }

                 printf("\nInput: ");
                 for(i=0; i<x; i++)
                 printf("%.0d\t", num[i]);

                 printf("\nMax = %d\n", max);

                 printf("\nTry again? (y/n): ");
                 scanf(" %c", &loop);

                 if(loop != 'y')
                 if(loop='n')
                 printf("\nProgram Terminated.");
                 printf("\nProgram written by Neil Marc C. Bayron || BSIT-1A\n");
                 printf("\n-----------------------------");

                 break;

        case 4 : // Min

                 for(i=0; i<x; i++)
                    {
                        printf("[%d] Input Number: ", i+1);
                        scanf("%d", &num[i]);

                            if (num[i]<=0)

                                {
                                    printf("[%d] Input Number: ", i+1);
                                    scanf("%d", &num[i]);
                                }

                            while(num[i]<min)

                     {
                         min = num[i];
                     }

                }

                 printf("\nInput: ");
                 for(i=0; i<x; i++)
                 printf("%.0d\t", num[i]);

                 printf("\nMin = %d\n", min);

                 printf("\nTry again? (y/n): ");
                 scanf(" %c", &loop);

                 if(loop != 'y')
                 if(loop='n')
                 printf("\nProgram Terminated.");
                 printf("\nProgram written by Neil Marc C. Bayron || BSIT-1A\n");
                 printf("\n-----------------------------");

                break;

        default: printf("\nIncorrect Input.\n");
                 printf("Please try again.\n");
                 printf("\n-----------------------------");

    }
}
}
