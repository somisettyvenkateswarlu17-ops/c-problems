package day4;

import java.util.Scanner;

public class endofseasonsale {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        double time = 21.00;
        int required = 0, playable = 0,stock = 20,invioce = 0;
        while (stock>0&&time<=21.45) {
            System.out.println("let us know the quanity");
            required = scan.nextInt();
            if(required<=stock){
                System.out.println("enter the amount tompay");
                playable = scan.nextInt();
                if(playable>=(required*25600))
                {stock-= required; 
                invioce++;}
            else {
                 System.out.println("insufficent to buy");}
            }else System.out.println("available "+stock);
            time+=0.01;

        }
        System.out.println("invoice "+invioce);
        scan.close();
    }
}
