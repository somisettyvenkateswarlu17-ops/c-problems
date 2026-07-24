package day4;

import java.util.Scanner;

public class middletriange {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int limit = 0; char aplha = 'Z';
        System.out.println("enter the limit");
        limit = scan.nextInt();
        for(int row=limit/2+1; row<=limit;row++){
            for(int space=limit/2+1;space>row;space--)
                System.out.println(" ");
            for(int column =1;column<(row*2);column++){
                System.out.println(aplha);aplha--;

            }
            System.out.println();
        }
        scan.close();
    }
}
