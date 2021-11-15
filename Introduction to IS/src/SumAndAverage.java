
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
public class SumAndAverage {
    public static void main(String[] args)
    {
        int n, sum = 0, avg = 0, count = -1;
        do
        {
            Scanner num = new Scanner(System.in);
            System.out.println("Enter a number : ");
            n = num.nextInt();
            count++;
            sum += n;
        } while (n != 0);
        avg = sum / count;
        System.out.println("Sum = " + sum + " And The average = " + avg);
        
    }
}
