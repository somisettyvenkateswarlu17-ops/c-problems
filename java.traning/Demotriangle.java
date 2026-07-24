package day4;

import java.util.Scanner;

public class Demotriangle {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int limit =0; char alpha = 'Z';
        System.out.println("enter the limit ");
        limit = scan.nextInt();
        for(int row=limit;row>0;row--){
            for(int column=1;column<=row;column++){
                System.out.println(alpha);
                alpha--;
            }
            System.out.println();
        }
        scan.close();
    }
}
