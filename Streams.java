// filtering collections using stream
import java.util.*;  
import java.util.stream.Collectors;  
class Product1{
    int id;  
    String name;  
    float price;  
    public Product1(int id, String name, float price) {
        this.id = id;  
        this.name = name;  
        this.price = price;  
    }  
}  
public class Streams {  
    public static void main(String[] args) {  
        List<Product1> productsList = new ArrayList<Product1>();
        //Adding Products  
        productsList.add(new Product1(1,"HP Lapy",25000f));
        productsList.add(new Product1(2,"Dell Lapy",30000f));
        productsList.add(new Product1(3,"Lonevo Lapy",28000f));
        productsList.add(new Product1(4,"Sony Lapy",28000f));
        productsList.add(new Product1(5,"Apple Lapy",90000f));
        List<Product1> productPriceList2 =productsList.stream()
                                     .filter((p) -> p.price > 30000)// filtering the data  
                                     .map((p)->p)       // fetching the price
                                     .collect(Collectors.toList()); // collecting as list  
        productPriceList2.forEach(p->{
            System.out.println(p.id + " " + p.name);
        });
        int i = 300_001;
        System.out.println(i);
    }  
}
// java Stream  iterating

/*import java.util.stream.*;  
public class Streams {  
    public static void main(String[] args){  
        Stream.iterate(1, (element)->element+1)  
        .filter((element)->element% 7==5)  
        .limit(5)  
        .forEach(System.out::println);  
    }  
}  */

// using filter()
/*import java.util.*;  
class Product{  
    int id;  
    String name;  
    float price;  
    public Product(int id, String name, float price) {  
        this.id = id;  
        this.name = name;  
        this.price = price;  
    }  
}  
public class Streams {  
    public static void main(String[] args) {  
        List<Product1> productsList = new ArrayList<Product1>();
        productsList.add(new Product1(1,"HP Lapy",25000f));
        productsList.add(new Product1(2,"Dell Lapy",30000f));
        productsList.add(new Product1(3,"Lenevo Lapy",28000f));
        productsList.add(new Product1(4,"Sony Lapy",28000f));
        productsList.add(new Product1(5,"Apple Lapy",90000f));
        productsList.stream()  
                             .filter((product) -> product.price == 30000)  
                             .forEach((product) -> System.out.println(product.name));    
    }  
}  */