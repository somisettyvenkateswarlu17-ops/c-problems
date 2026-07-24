package day4;

import java.util.Scanner;

public class primenumber {
    public static void main(String[] args) {
        Scanner venky = new Scanner(System.in);
        int number = 0;
        System.out.println("enter the number");
        number = venky.nextInt();
        if(number==2||number==3||number==5&&number==7&&number%2!=0&&number%5!=0&&number%7!=0||number%3!=0){
           System.out.println("is a prime number");
        }
        else {
            System.out.println("not a prime number");
        }

        venky.close();
    }
}
