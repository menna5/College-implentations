
import java.util.Scanner;
/**
 *
 * @author Menna
 */
public class PatternB {
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        System.out.println("Enter a number : ");
        int n = input.nextInt();
        for (int i = n; i > 0; i--)
        {
            for (int j = 1; j <= i; j++)
            {
                System.out.printf(j + " ");
            }
            System.out.println();
        }
    }
}
