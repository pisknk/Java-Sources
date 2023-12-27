package com.neilbayron;

import java.util.Scanner;
public class Main {

    public static void main(String[] args) {

        int number1;
        int number2;
        int result;
        char operator;
	System.out.println( "JAVA BASIC CALCULATOR" );

        // create an object of Scanner class
        Scanner input = new Scanner(System.in);

        // input integers
        System.out.println(" Input First Integer:");
        number1 = input.nextInt();
        System.out.println(" Input Second Integer:");
        number2 = input.nextInt();

        // ask users to enter operator
        System.out.println("Choose an operator:");

        // choose operand
        System.out.println(" [1] SUM ");
        System.out.println(" [2] DIFFERENCE ");
        System.out.println(" [3] PRODUCT ");
        System.out.println(" [4] QUOTIENT - number2 should not be 0 ");
        System.out.println(" [5] REMAINDER ");
        System.out.println(" [6] RELATIONSHIP ");

        operator = input.next().charAt(0);

        //switch statement
        switch (operator) {

            // performs addition between numbers
            case '1' -> {
                result = number1 + number2;
                System.out.println(number1 + " + " + number2 + " = " + result);
            }

            // performs subtraction between numbers
            case '2' -> {
                result = number1 - number2;
                System.out.println(number1 + " - " + number2 + " = " + result);
            }

            // performs multiplication between numbers
            case '3' -> {
                result = number1 * number2;
                System.out.println(number1 + " * " + number2 + " = " + result);
            }

            // performs division between numbers
            case '4' -> {
                result = number1 / number2;
                System.out.println(number1 + " / " + number2 + " = " + result);
            }

            // performs remainder between numbers
            case '5' -> {
                result = number1 / number2;
                System.out.println(number1 + "%" + number2 + " = " + result);
            }
            // identify relationship between numbers
            case '6' -> {
                if ( number1 == number2 )
                    System.out.printf( "%d is equal to %d\n", number1, number2 );
                if ( number1 != number2 )
                    System.out.printf( "%d is not equal to %d\n", number1, number2 );
                if ( number1 < number2 )
                    System.out.printf( "%d is less than %d\n", number1, number2 );
                if ( number1 > number2 )
                    System.out.printf( "%d is greater than %d\n", number1, number2 );
            }
            default -> System.out.println("Invalid operator!");
        }

        input.close();
    }
}

