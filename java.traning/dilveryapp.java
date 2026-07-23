package day3;


import java.util.Scanner;

public class Delivery {
    public static void main(String[] args) {
        Scanner sc=  new Scanner(System.in);
        System.out.println("Enter your name: ");
        String Name =sc.nextLine();
        System.out.println("Enter your address: ");
        String address = sc.nextLine();
        System.out.println("Enter your Mobile Number: ");
        String Mobile  = sc.nextLine();
        System.out.println("Enter your order Cost: ");
        double cost = sc.nextDouble();
        double deliveryCharge=0;
        double totalAmount;

        if(cost>500){
            deliveryCharge = 0;
            System.out.println("Free Delivery");
        }else if(cost > 200){
            deliveryCharge = cost*0.05;
        }else{
            deliveryCharge=50;
        }
        totalAmount = cost + deliveryCharge;

        System.out.println("\n-------Order Details------");
                System.out.println("Name :" + Name);
                System.out.println("address:"+ address);
                System.out.println("Mobile Number:"+ Mobile);
                System.out.println("Order Cost:"+ cost); 
                 System.out.println("Delivery charge:"+ deliveryCharge);
                 System.out.println("Total Amount:"+ totalAmount);
                 sc.close();
     } 
}

