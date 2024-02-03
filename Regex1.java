import java.util.Arrays;
import java.util.regex.Matcher;
import java.util.regex.Pattern;
import java.util.stream.Collectors;

public class Regex1 {
    public static void main(String[] args) {
        String rt ="23|56|78";
        String uom = "in";
        String[] ab = rt.split("\\|");
        StringBuilder sb = new StringBuilder();
        for(int i=-0; i < ab.length -1; i++) {
            sb.append(ab[i]);
            sb.append(" " + uom + "|");
        }
        sb.append(ab[ab.length -1]);
        sb.append(" " + uom);
       String joinedString = Arrays
                .stream(ab)
                .collect(Collectors.joining());
        System.out.println(joinedString);
        System.out.println(sb.toString());
        System.out.println(sb.length());

        /*String tst = "56|67|ryeuiwyuiey";
        String regex = "^[\\|]+$";
        if (tst.matches("\\|")) System.out.println("paqssed");
        else System.out.println("fail");*/
        String Str = "name common personality";
        String[] ar = Str.split(" ");
        System.out.println(ar.toString());
        getPrint(ar.toString());
        Integer[] cr = new Integer [] {13, 67 ,89};
        getPrint(cr.toString());
        String[] array = { "cat", "mouse" };
        String delimiter = "|";
        String result = String.join(delimiter, array);
        System.out.println(result);
        Pattern pat = Pattern.compile("[|]");
        Matcher match = pat.matcher("");
        String t = match.find() ? "yes" : "no";
        String p = "".toString();
        System.out.print(t);
        System.out.print(p);
        System.out.println("thisde");



    }
    public static void getPrint(String str) {
        System.out.println(str);
    }
}
