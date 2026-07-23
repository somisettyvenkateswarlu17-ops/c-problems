package day3;

public class TypeParsing {
    public static void main(String[] args) {
        String strwt ="64.10", strHt = "158";
        double weight = Double.parseDouble(strwt);
        int height = Integer.parseInt(strHt);
        double ht = (double)height/100;
        double bmi = (double)(weight/(ht*ht));
        System.out.println("you BMI "+bmi);
    }
}
