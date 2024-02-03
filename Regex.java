import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.StringJoiner;
import java.util.regex.Matcher;
import java.util.regex.Pattern;
import java.util.stream.Collectors;

public class Regex {
    public static void main(String[] args) {
        Pattern pat = Pattern.compile("[ | ]") ;
       // String regex = "[|]+$";
        Matcher mat  = pat.matcher("a in|a in|c in");
        if(mat.find()) System.out.println("match" );
        else System.out.println("unmatch");
        String s = "name in|game in|no in";
        String t = s.replace("|", " ");
        //String[] sp = s.split("\\|");
       // System.out.println(t);
        String[] d = t.split("in");
        System.out.println("d:" +Arrays.toString(d));
        String joinedString = Arrays
                .stream(d)
                .collect(Collectors.joining());
        String[] uy = joinedString.trim().split("  ");
        System.out.println("uy:" +Arrays.toString(uy));

        String joinedString1 = Arrays
                .stream(uy)
                .collect(Collectors.joining());
       System.out.println(joinedString);
        System.out.println(joinedString1);
        System.out.println(uy.length);
        StringBuilder sb = new StringBuilder();
        for(int i =0; i< uy.length-1; i++) {
            sb.append(uy[i]);
            sb.append("|");
        }
        System.out.println(sb.toString());
        System.out.println(sb.length());

        sb.append(uy[uy.length -1]);
        String ps = sb.toString().trim();
        System.out.println(sb.toString().trim() );
        System.out.println(sb.length() );
        System.out.println(ps);
        System.out.println(ps.length());

       /* String u = Arrays.toString(d).replace(" ", "|");
        System.out.println(u);*/
       // String tq = d.toString();

       /*String r =Arrays.toString(d).replace(" ", "");
       // System.out.println(r);
        String[] rt = tq.split(" ");
        System.out.println(rt.toString());
        StringBuilder sb = new StringBuilder();
        System.out.println(rt.length);
        for(int i =0; i< rt.length -1; i++) {
            //StringBuilder s1 = new StringBuilder(rt[i]);
            System.out.println(rt[i]);
            sb.append(rt[i]);
            sb.append(new StringBuilder("|"));
        }

        sb.append(rt[rt.length-1]);
       // System.out.println(sb.toString());
        //String str = res.toString();
       // for(int i=0; i< sp.length; i++)
        //str = sp[i] +" ";
      //  String[] p = str.split("\\w");
       // System.out.println("string = " + str);
     //   for(String t : sp) System.out.println(t);*/

    }
}
