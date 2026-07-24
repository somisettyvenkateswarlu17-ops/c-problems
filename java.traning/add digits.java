package day4;

import java.util.Scanner;

public class adddigits {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int sum = 0,number =0;
        System.out.println("Enter the number");
        number = scan.nextInt();
        while (number>10) {
            sum =0;
            while(number>0){

          int digit =  number%10;
            sum+=digit;
            number/=10;
            }
           number = sum;
         }
                System.out.println(number);
         scan.close();
    }
}
