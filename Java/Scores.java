
import java.util.Scanner;
/**
 *
 * @author Menna
 */
public class Scores {

    public static int MAX_NUM = 100;
    public static int average(int[] arr) {
        int sum = 0;
        for (int i = 0; i < arr.length; i++) {
            sum += arr[i];
        }
        return sum / arr.length;
    }
    public static int biggerScores(int[] arr, int avg) {
        int count = 0;
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] >= avg) {
                count++;
            }
        }
        return count;
    }
    public static int smallerScores(int[] arr, int avg) {
        int count = 0;
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] < avg) 
                count++;
        }
        return count;
    }
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int[] arr = new int[100];
        int i = 0, n;
        do 
        {
            System.out.println("Enter value : ");
            n = input.nextInt();
            arr[i] = n;
            i++;
            if (i > 100)
            {
                break;
            }
        } while (n > 0);
        i--;
        int avg = average(arr);
        System.out.println("The scores are above or equal to the average " + biggerScores(arr, avg));
        System.out.println("The scores are below the average " + smallerScores(arr, avg));
    }

}
