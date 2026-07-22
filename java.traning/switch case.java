package day2;

import java.util.Scanner;

public class intrest {
    public static void main(String[] args) {
        int months =0; double cost = 0, emi = 0;
        Scanner scan = new Scanner(System.in);
        System.out.println("the amount eligible for emi");
        cost = scan.nextDouble();
        if(cost>=5000){
            System.out.println("eligible for emi "+cost);
            System.out.println("enter the months");
            months = scan.nextInt();
            switch (months) {
                case 12:case 9:case 6:case 3:
                    emi = ((cost+(cost*0.05))/months);
                    System.out.println("ROI 5 percentage");
                     break;
              case 24:
                    emi = ((cost+(cost*0.10))/months);
                     System.out.println("ROI 10 percentage");
                     break;
               case 36:
                    emi = ((cost+(cost*0.15))/months);
                     System.out.println("ROI 15 percentage");
                     break;
                     
                default:
                    System.out.println("enter the vaild months");
                    break;
                

            }
            System.out.println("your pay emi "+emi);
        }else{
            System.out.println(cost+"cost is not eligible");
        }
        scan.close();
    }
}
