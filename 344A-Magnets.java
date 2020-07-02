import java.util.*;
import java.io.*;

public class Magnets
{

    public static void main(String[] args)
    {
        Scanner in = new Scanner (System.in);
        Stack<String> stack = new Stack<String>();
        int n = in.nextInt();
        for(int i = 0; i < n; i += 1)
        {
            String s = in.next();

            if(i==0)
            	stack.push(s);
            else if (stack.empty() == false && s.equals(stack.peek())==false)
            {                
                stack.push(s);
            }
        }
        System.out.println(stack.size());

    }

}










