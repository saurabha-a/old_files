import java.util.*;
public class Mini{
    public static void main(String[] args) {
        System.out.println("Hello world!");
        System.out.println("never have never will");
        //Scanner sc = new Scanner(System.in);
        //String str = sc.nextLine();
        try {
            System.out.println("my cause");
            throw new IllegalArgumentException("this is not done");
        }catch(Exception e){
            //printStackTrace(e.getMessage());
        }
    }
}