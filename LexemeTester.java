import java.io.*;
public class LexemeTester {
	public static void main(String[] args) {
		File myFile = new File("src/lexeme.txt");
		File badFile = new File("src/lexeme2.txt");
	       try{
	       BufferedReader reader = new BufferedReader(new FileReader(myFile));
	      
	       String current;
	       while ((current = reader.readLine()) != null) {
	           for(int i=0; i<current.length(); i++) {
	               char letter = current.charAt(i);
	               if((letter>='A' && letter<='Z') || (letter>='a' && letter<='z') || (letter>='0' && letter<='9')) {
	            	   System.out.print(letter);
	               }
	               else {
	                   System.out.println("\n"+letter);
	               }
	           }
	         }
	       }
	       catch(Exception f) {
	           System.out.println(f);
	       }
	} 
}
