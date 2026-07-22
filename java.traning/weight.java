package day2;

import java.util.Scanner;

public class param {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        double weight = 0, height = 0, bmi = 0;
        String status ="";
        System.out.println("welcome to know the staus");
        System.out.println("enter the weight");
        weight = scan.nextDouble();
        System.out.println("enter the height");
        height = scan.nextDouble();
        height = height/100;
        bmi = weight/(height*height);
        status = (bmi<18.0)?"underweight":
        (bmi>=18.0&&bmi<24.0)?"normal":
        (bmi>=24.0&&bmi<28.0)?"over weight":"obese";
        System.out.println(status+" is your health condition");
          scan.close();
    }
}
