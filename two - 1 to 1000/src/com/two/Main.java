package com.two;

import java.util.Scanner;

    public class Main

    {

        public static void main(String[] args)

            {
                int number = 1000;
                System.out.print("List of numbers 1 to " + number + ": ");

                for (int i = 1; i <= number; i++)

                {

                if (i % 1 == 0) {
                    System.out.print(i + " ");

                }
            }
        }
    }