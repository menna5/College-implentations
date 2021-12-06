
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
public class Palindrome {
    public static boolean isPalindrome(int num)
    {
        int sum = 0, temp = num;
        while (temp > 0)
        {
            sum = (sum * 10) + (temp % 10);
            temp /= 10;
        }
        return sum == num;
    }
    public static void main(String[] args)
    {
        Scanner num = new Scanner(System.in);
        System.out.println("Enter a number : ");
        int n = num.nextInt();
        if (isPalindrome(n))
        {
            System.out.println("It's Palindrome.");
        }
        else
        {
            System.out.println("It's not palindrome.");
        }
    }
}
