package day13;

import java.util.Arrays;

public class Hadlecomplie {
    public static void main(String[] args) {
        String[] alogrithm = {"Two pointer","DFS","BFS","Intervals","venky","super"};
        Arrays.stream(alogrithm).forEach(each->{System.out.println(each));
            try{
                 Thread.sleep(5000);
            }catch(interruptedExpection e){
                e.printStackTrace();
            }
        }
    }
}
