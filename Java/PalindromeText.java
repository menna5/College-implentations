import java.util.Scanner;
/**
 *
 * @author Menna
 */
public class PalindromeText {
    public static void main(String[] args)
    {
        Scanner num = new Scanner(System.in);
        System.out.println("Enter a string : ");
        String text = num.next();
        int size = text.length();
        boolean flag = true;
        for (int i = 0, j = size - 1; i < size; i++, j--)
        {
            if (text.charAt(i) != text.charAt(j))
            {
                System.out.println("It's not Palindrome.");
                flag = false;
                break;
            }
        }
        if (flag == true)
        {
            System.out.println("It's palindrome.");
        }
    }
}
