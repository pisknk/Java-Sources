
package com.neilbayron;

   import java.util.Scanner;

public class TemperatureConverterRedux {
    public static void main(String[] args) {

        float number;
        float result;
        char inputTemp;
        char outputTemp;


        System.out.println("\t\tTEMPERATURE CONVERTER");

        // create an object of Scanner class
        Scanner input = new Scanner(System.in);

        System.out.println("_______________________________________________________________________________");

        // Display Temperature Choices
        System.out.println(" [c] Celsius ");
        System.out.println(" [f] Fahrenheit ");
        System.out.println(" [k] Kelvin ");

        System.out.println("_______________________________________________________________________________");

        // input value
        System.out.println(" Enter Value:");
        number = input.nextInt();

        // ask users for the input and output temperature
        System.out.println("Temperature to be Converted:");
        inputTemp = input.next().charAt(0);
        System.out.println(" Output Temperature:");
        outputTemp = input.next().charAt(0);


        // Celsius to Fahrenheit
        if (inputTemp == 'c' && outputTemp == 'f') {
            result = number * 9 / 5 + 32;
            System.out.println(number + " Celsius = " + result +" Fahrenheit");

            //  Celsius to Kelvin
        } else if (inputTemp == 'c' && outputTemp == 'k') {
            result = (float) (number + 273.15);
            System.out.println(number + " Celsius = " + result +" Kelvin");

            // Fahrenheit to Celsius
        } else if (inputTemp == 'f' && outputTemp == 'c') {
            result = (number-32)*5/9;
            System.out.println(number + " Fahrenheit = " + result +" Celsius");

            // Fahrenheit to Kelvin
        } else if (inputTemp == 'f' && outputTemp == 'k') {
            result = (float) (((number-32)*5/9)+273.15);
            System.out.println(number + " Fahrenheit = " + result +" Kelvin");

            //  Kelvin to Celsius
        } else if (inputTemp == 'k' && outputTemp == 'c') {
            result = (float) (number-273.15);
            System.out.println (number + " Kevin = " + result +" Celsius");

            //  Kelvin to Fahrenheit
        } else if (inputTemp == 'k' && outputTemp == 'f') {
            result = (float) ((number - 273.15) * 9 / 5 + 32);
            System.out.println(number + " Kevin = " + result +" Fahrenheit");

            // Celsius to Celsius
        } else if (inputTemp == 'c' && outputTemp == 'c') {
            System.out.println(" The Temperature is already in Celsius ");

            // Fahrenheit to Fahrenheit
        } else if (inputTemp == 'f' && outputTemp == 'f') {
            System.out.println(" The Temperature is already in Fahrenheit ");

            // Kelvin to Kelvin
        } else if (inputTemp == 'k' && outputTemp == 'k') {
            System.out.println(" The Temperature is already in Kelvin ");

            //default
        }else {
            System.out.println("Input Invalid " );
        }
    }

}


