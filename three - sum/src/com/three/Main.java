package com.three;

import java.util.Scanner;

public class Main

    {

        public static void main(String[] args)

            {

                int n,sum=0;

                Scanner sc=new Scanner(System.in);
                System.out.println("How many numbers you wanna add?    ");
                n=sc.nextInt();

                int a[]=new int[n];
                System.out.println("There are "+n+" numbers to be added.");

                for(int i=0;i<n;i++)

                    {
                        System.out.println("Enter number "+(i+1)+":");
                        a[i]=sc.nextInt();
                    }

                for(int i=0;i<n;i++)

            {

                sum+=a[i];

            }

                System.out.println("Sum of the integers = "+sum);
        }

    }