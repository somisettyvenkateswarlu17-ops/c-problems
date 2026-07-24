package day4;

import java.util.Scanner;

public class Gaintwheel {
    public static void main(String[] args) {
        Scanner venky = new Scanner(System.in);
        for(int cabin=91;cabin>=87;cabin--){
            System.out.println("new cabain arrived");
            for(int person=1;person<=4;){
                System.out.println("let me know the age");
                int age = venky.nextInt();
                if(age>=18&&age<=60){
                    person ++;
                    System.out.println("enjoyn the ride ");
                }
                else {
                    System.out.println("stafety is imporant");
                }
                
            }
            

        }

        venky.close();

    }
}
