import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.function.*;
import java.util.regex.*;
import java.util.stream.*;
import static java.util.stream.Collectors.joining;
import static java.util.stream.Collectors.toList;

public class MarsExploration {
    static int marsExploration(String s2)
    {
        String sos = "SOS";
        int c=0;
        for(int i=0;i<s2.length();i++)
        {
            if(s2.charAt(i)!=sos.charAt(i%3))c++;
        }
        return c;
    }
    
    public static void main(String[] args) {
        
        Scanner s = new Scanner(System.in);
        String s1 = s.nextLine();
        System.out.println(marsExploration(s1));
    }
}