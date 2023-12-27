package com.five;

import javax.swing.*;

public class Main {

    public static void main(String[] args) {
        Integer random = (1 + (int)(Math.random() * 100)),
                userNum;

        userNum = Integer.valueOf(JOptionPane.showInputDialog("Enter a number."));

        boolean matches = random.equals(userNum);
        JOptionPane.showMessageDialog(null,"The random number is " + random + ". " + "Does it match? " + matches);

    }

}
