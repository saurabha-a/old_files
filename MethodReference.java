interface test3{  
    void absmet();  
}  
public class MethodReference {  
    public static void statmet1(){  
        System.out.println("Hello, this is static method.");  
    }  
    public static void main(String[] args) {  
        // Referring static method  
        test3 s = MethodReference::statmet1;  
        // Calling interface method  
        s.absmet();  
    }  
}  