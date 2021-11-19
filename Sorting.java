
import java.util.Scanner;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author Menna
 */
public class Sorting {
    public static void displaySortedNumbers( double num1, double num2, double num3)
    {
        if (num1 > num2)
        {
            double temp = num1;
            num1 = num2;
            num2 = temp;
        }
        if (num2 > num3)
        {
            double temp = num1;
            num1 = num2;
            num2 = temp;
        }
        System.out.println(num1);
        System.out.println(num2);
        System.out.println(num3);
    }
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        System.out.println("Enter three numbers : ");
        double num1 = input.nextInt(), num2 = input.nextInt(), num3 = input.nextInt();
        displaySortedNumbers(num1, num2, num3);
    }
}
