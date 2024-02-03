import java.io.File;
import java.io.IOException;
import java.nio.file.Files;
import java.util.stream.Stream;

public class Parallel {
	public static void main(String[] args) throws IOException {

		// Creating a File object
		File fileName = new File("C:\\Users\\abhinaw\\Documents\\testing1.txt");
		// using the lines() method to
		// read one line at a time from the text file
		Stream<String> text = Files.lines(fileName.toPath());

		// Creating parallel streams using parallel() method
		text.parallel().forEach(System.out::println);
		text.close(); // closing the stream
	}
}
