import java.time.LocalDate;
import java.time.format.DateTimeFormatter;
import java.time.format.DateTimeParseException;
import java.time.format.ResolverStyle;
import java.util.Locale;

public class wrk1 {
    public static boolean isValid(String dateStr) {
        DateTimeFormatter dateFormatter = DateTimeFormatter.ofPattern("dd-MM-uu", Locale.US)
                .withResolverStyle(ResolverStyle.STRICT);
        try {
            dateFormatter.parse(dateStr);
        } catch (DateTimeParseException e) {
            return false;
        }
        return true;
    }
     public static void main(String[] args) {
       /* DateTimeFormatter dateFormatter = DateTimeFormatter.ofPattern("dd-MM-uu", Locale.US)
                 .withResolverStyle(ResolverStyle.STRICT);
*/
         System.out.println(isValid("28-02-22"));
         System.out.println(isValid("2019-03-30"));
     }
}
