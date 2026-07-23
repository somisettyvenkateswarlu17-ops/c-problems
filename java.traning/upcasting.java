package day3;

public class upcasting {
    public static void main(String[] args) {
        String contactName="venky";
        System.out.println(contactName.toLowerCase());
        Object obj1 = contactName; // upcasting
        System.out.println(obj1);
        obj1 = 12.5;
        System.out.println(obj1);
        Object obj2 = false;
        Boolean data = (Boolean) obj2; // down casting 
        System.out.println(data);
        
         
    }
}
