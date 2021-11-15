
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
public class Convert {
    /** Convert from Fahrenheit to Celsius */
    public static double fahrenheitToCelsius(double fahrenheit)
    {
        double result = (5.0 / 9) * (fahrenheit - 32);
        return result;
    }
    /** Convert from Celsius to Fahrenheit */
    public static double celsiusToFahrenheit(double celsius)
    {
        double result = (9.0 / 5) * celsius + 32;
        return result;
    }
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.println("Enter\n 1 - to convert from celisius to fahrenhiet\n 2 - to convert from fahrenhiet to celisius\n");
        int n = input.nextInt(), value;
        switch(n)
        {
            case 1:
                System.out.println("Enter celisius value : ");
                value = input.nextInt();
                System.out.println(celsiusToFahrenheit(value));
                break;
            case 2:
                System.out.println("Enter fahrenhiet value : ");
                value = input.nextInt();
                System.out.println(fahrenheitToCelsius(value));
                break;
            default:
                System.out.println("Invalid\n");
        }
    }
}
