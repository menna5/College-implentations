package oopApp;

public class Stock {
    private final String name;
    private double previousClosingPrice;
    private double currentPrice;

    public Stock() {
        this.name = "Our Stock";
    }

    public void setPreviousClosingPrice(double previousClosingPrice) {
        this.previousClosingPrice = previousClosingPrice;
    }

    public void setCurrentPrice(double currentPrice) {
        this.currentPrice = currentPrice;
    }

    public String getName() {
        return name;
    }

    public double getPreviousClosingPrice() {
        return previousClosingPrice;
    }

    public double getCurrentPrice() {
        return currentPrice;
    }
    
    public double getChangePercent() {
        return ((previousClosingPrice - currentPrice) / (previousClosingPrice + currentPrice)) * 100;
    }
}
