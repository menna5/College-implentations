package oopApp;

import java.util.Scanner;

public class App {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        StopWatch obj = new StopWatch();
        obj.start();
        System.out.println("Enter the previous closing price of stock ");
        double PrePrice = input.nextDouble();
        System.out.println("Enter the current price of stock ");
        double currentPrice = input.nextDouble();
        Stock obj2 = new Stock();
        obj2.setCurrentPrice(currentPrice);
        obj2.setPreviousClosingPrice(PrePrice); 
        System.out.println("The percentage of stock = " + obj2.getChangePercent());
        obj.end();
        System.out.println("The elapsed time in milliseconds" + obj.getElapsedTime());
    }
    
}
