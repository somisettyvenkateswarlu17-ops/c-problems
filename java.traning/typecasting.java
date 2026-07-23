package day3;

public class typecating {
     public static void main(String[] args) {
        long zeta = 88l; char alpha = '\0';
        alpha = (char)zeta;
        System.out.println(alpha);
        short micro = 92; int fella = 0;
        fella = micro;
        float seek = 0.0F; seek = micro;
        byte sigma = 0; sigma = (byte)micro;
        char check = 'R', match = 'a';
        check = (char)(check^match);
        match = (char)(check^match);
        check = (char)(check^match);
       System.out.println(check+""+match);
       
     }
}
