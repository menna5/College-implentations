
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
public class Triangle {

    public static void main(String[] args) {
        System.out.println("Enter first edge : ");
        Scanner num1 = new Scanner(System.in);
        int a = num1.nextInt();
        System.out.println("Enter second edge : ");
        Scanner num2 = new Scanner(System.in);
        int b = num2.nextInt();
        System.out.println("Enter third edge : ");
        Scanner num3 = new Scanner(System.in);
        int c = num3.nextInt();
        if (a + b > c && a + c > b && b + c > a) {
            System.out.println("The perimeter of the triangle = " + (a + b + c));
        } else {
            System.out.println("It's invalid.");
        }
    }
}
