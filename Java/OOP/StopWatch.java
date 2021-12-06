package javaapplication2;

public class StopWatch {
    private long startTime;
    private long endTime;

    public long getStartTime() {
        return startTime;
    }
    
    public long getEndTime() {
        return endTime;
    }
    
    public StopWatch() {
        
    }
    
    public void start() {    
        this.startTime = System.currentTimeMillis();
    }
    
    public void end() {    
        this.endTime = System.currentTimeMillis() ;
    }
    
    public float getElapsedTime() {
        return endTime - startTime;
    }
}
