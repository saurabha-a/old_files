
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

public class Jmap {
    public static void main(String[] args) {
        Map<String, String> mp = null;
        try {
            mp.get("");
        }catch(NullPointerException e) {
    System.out.println ("initialise map to not null");
        }
        Map<String, String[]> np = new HashMap<>();
        np.put("str", new String[] {"riy", "yui", "mou"});
        np.put("sar", new String[] {"riyusha", "yui", "mou"});
        np.put("sir", new String[] {"riya", "yui", "mou"});
        //np.put("ser", new ArrayList<> (){"mty", "yui", "mou"});
       String str = new String(np.get("sar").toString());
      System.out.println(str);
        System.out.println(np.get("sar")[0]);





    }
}
