interface test1{  
    default void defmet1(){  
        System.out.println("This is a default method");  
    }  
}  
//@FunctionalInterface  
interface test2 extends test1{  
    void absmet1(String l1); 
}  
public class FunctionalInterface implements test2{  
    public void absmet1(String l1){  
        System.out.println(l1);  
    } 
    public static void main(String[] args) {  
        FunctionalInterface a = new FunctionalInterface();  
        a.absmet1("this will be displayed");  
        a.defmet1();  
    }  
}  