import java.util.*;
import java.util.stream.Collectors;

public class MapToList {
    public static void doThings( List<Object> mp)  {
        //System.out.println("myName");
        String p =mp.get(0).toString();
        String[] qt = p.split(" ");
        for(int k =0; k< qt.length; k++) {
            qt[k] = qt[k] + " strong";

        }
        // l = Arrays.toString(qt);
        String str = qt[0]+"|"+qt[qt.length-1];
        System.out.println(str);
        String joinedString = Arrays
                .stream(qt)
                .collect(Collectors.joining());

        System.out.println(joinedString);
        Object o = joinedString;
        mp.add(0, o);
        System.out.println(mp.get(0).toString());

    }
    public static void main(String[] args) {
        List<Object> ol = new ArrayList<>();
        ol.add("no name");
        ol.add("new boy");
        ol.add("old girl");
        ol.add("nomen");
        ol.add("camera");
        doThings(ol);

    }
}
