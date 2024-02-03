/******
 * using predefined functional interface Runnable to refer static method.
 */
public class MethodReference2 {  
    public static void ThreadStatus(){  
        System.out.println("Thread is running...");  
    }  
    public static void main(String[] args) {  
        Thread t2=new Thread(MethodReference2::ThreadStatus);  
        t2.start();       
    }  
}  

/*********
 * Using predefined apply() method in functional interface Bifunction to refer to a static method.
 ********/
import java.util.function.BiFunction;  
class Arithmetic{  
public static int add(int a, int b){  
return a+b;  
}  
}  
public class MethodReference2 {  
public static void main(String[] args) {  
BiFunction<Integer, Integer, Integer>adder = Arithmetic::add;  
int result = adder.apply(10, 20);  
System.out.println(result);  
}  
}  

/*****
 * You can also override static methods by referring methods. Here, we have defined and overloaded three add methods.
 */

import java.util.function.BiFunction;  
class Arithmetic{  
public static int add(int a, int b){  
return a+b;  
}  
public static float add(int a, float b){  
return a+b;  
}  
public static float add(float a, float b){  
return a+b;  
}  
}  
public class MethodReference2 {  
public static void main(String[] args) {  
BiFunction<Integer, Integer, Integer>adder1 = Arithmetic::add;  
BiFunction<Integer, Float, Float>adder2 = Arithmetic::add;  
BiFunction<Float, Float, Float>adder3 = Arithmetic::add;  
int result1 = adder1.apply(10, 20);  
float result2 = adder2.apply(10, 20.0f);  
float result3 = adder3.apply(10.0f, 20.0f);  
System.out.println(result1);  
System.out.println(result2);  
System.out.println(result3);  
}  
}  

/****
 * In the following example, we are referring non-static methods. You can refer methods by class object and anonymous object.
 */

interface Sayable{  
    void say();  
}  
public class InstanceMethodReference2 {  
    public void saySomething(){  
        System.out.println("Hello, this is non-static method.");  
    }  
    public static void main(String[] args) {  
       // InstanceMethodReference2 methodReference = new InstanceMethodReference2(); // Creating object  
        // Referring non-static method using reference  
          //  Sayable sayable = methodReference::saySomething;  
        // Calling interface method  
           // sayable.say();  
            // Referring non-static method using anonymous object  
           Sayable sayable2 = new InstanceMethodReference2()::saySomething; // You can use anonymous object also ;anonymous object 
            // Calling interface method  
           sayable2.say();  
    }  
}  

// as runnable interface has only one abstract method 'start()'
public class InstanceMethodReference2 {  
    public void printnMsg(){  
        System.out.println("Hello, this is instance method");  
    }  
    public static void main(String[] args) {  
    Thread t2=new Thread(new InstanceMethodReference2()::printnMsg);  
        t2.start();       
    }  
}  
