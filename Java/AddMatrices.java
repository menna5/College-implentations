
import java.util.Scanner;

/**
 *
 * @author Menna
 */
public class AddMatrices {

    static Scanner input = new Scanner(System.in);

    public static double[][] fillMatrix(int rows, int cols) {
        double[][] c = new double[rows][cols];
        System.out.println("Eenter array elements : ");
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                c[i][j] = input.nextInt();
            }
        }
        return c;
    }

    public static double[][] addMatrix(double[][] a, double[][] b) {
        double[][] c = new double[a.length][a[0].length];
        for (int i = 0; i < a.length; i++) {
            for (int j = 0; j < a[0].length; j++) {
                c[i][j] = a[i][j] + b[i][j];
            }
        }
        return c;
    }

    public static int getRowSize() {
        System.out.println("Enter row size : ");
        int row = input.nextInt();
        return row;
    }

    public static int getColSize() {
        System.out.println("Enter col size : ");
        int col = input.nextInt();
        return col;
    }

    public static void main(String[] args) {
        int rowSize = getRowSize();
        int colSize = getColSize();
        double[][] a = fillMatrix(rowSize, colSize);
        double[][] b = fillMatrix(rowSize, colSize);
        double[][] c = addMatrix(a, b);
        for (int i = 0; i < rowSize; i++) {
            for (int j = 0; j < colSize; j++) {
                System.out.printf(a[i][j] + b[i][j] + "\t");
            }
            System.out.println();
        }
    }

}
