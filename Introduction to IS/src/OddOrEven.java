
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
public class OddOrEven {
    public static void main(String[] args)
    {
        Scanner num = new Scanner(System.in);
        System.out.println("Enter a number : ");
        int n = num.nextInt();
        if (n % 2 == 0)
        {
            System.out.println("It's even number.");
        }
        else
        {
            System.out.println("It's odd number.");
        }
    }
}
