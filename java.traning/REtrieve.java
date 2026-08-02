package day9;
import java.util.Arrays;
public class Retrieve{
	Loan[] hdfc =new Loan[5];
	public Retrieve(){
		hdfc[0]=new Loan(2345678864L,567,17.5F);
		hdfc[1]=new Loan(9876543456L,568,11.0F);
		hdfc[2]=new Loan(2345678765L,569,13.2F);
		hdfc[3]=new Loan(98765434567L,566,15F);
		hdfc[4]=new Loan(45678765678L,565,12.5F);
	}
	public void read(float user){
		System.out.println(user+" roi matched records");
		Arrays.stream(hdfc).filter(each->each.getRoi()>=user).forEach(obj->System.out.println(obj));
	}
	public void read(long number){
		System.out.println(number+"Loan Records");
		Arrays.stream(hdfc).filter(each->each.getLoanNo()==number).forEach(obj->System.out.println(obj));
	}
	public void read(int amount){
		System.out.println("Loan records less than "+ amount);
		Arrays.stream(hdfc).filter(each->each.getPrinciple()<=amount).forEach(obj->System.out.println(obj));
	}
	public static void main(String[] args){
		Retrieve ret=new Retrieve();
		ret.read(15.0f);
		ret.read(8654345678L);
		ret.read(400000);
	}
}
