
import java.util.Scanner;
/**
 *
 * @author Menna
 */
public class Average {

    public static int average(int[] array) {
        int sum = 0;
        for (int i = 0; i < 10; i++) {
            sum += array[i];
        }
        return sum / 10;
    }

    public static double average(double[] array) {
        double sum = 0;
        for (int i = 0; i < 10; i++) {
            sum += array[i];
        }
        return sum / 10;
    }

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int[] array = new int[10];
        System.out.println("Enter ten values : ");
        for (int i = 0; i < 10; i++) {
            System.out.println("Enter value number " + (i + 1) + " : ");
            array[i] = input.nextInt();
        }
        System.out.println(average(array));
    }

}
