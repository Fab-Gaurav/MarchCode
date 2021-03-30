import java.util.*;

public class JatinSaini664{
    public static int countWords(String s){
        int words=0, i=0;
        while(i<s.length()){
            if(s.charAt(i)==' '){
                words++;
            }
            i++;
        }
        if(s.charAt(i-1)!=' ')
            words++;
        return words;
    }
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);

        String s = scn.nextLine();
        System.out.println(countWords(s));
    }
}