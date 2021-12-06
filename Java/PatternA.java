
import java.util.Scanner;
/**
 *
 * @author Menna
 */
public class PatternA {
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        System.out.println("Enter a number : ");
        int n = input.nextInt();
        for (int i = 0; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                System.out.printf(j + " ");
            }
            System.out.println();
        }
    }
}
