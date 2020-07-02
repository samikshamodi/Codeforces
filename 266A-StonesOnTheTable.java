import java.util.*;

public class StonesOnTheTable
{

    public static void main(String[] args)
    {
        Scanner in = new Scanner (System.in);
        int n = in.nextInt();
        Stack<String> stack = new Stack<String>();
        String s = in.next();
        for(int i = 0; i < s.length(); i += 1)
        {
        	if(stack.empty())
        		stack.push(Character.toString(s.charAt(i)));
        	else
        		if(Character.toString(s.charAt(i)).equals(stack.peek())==false)
        			stack.push(Character.toString(s.charAt(i)));

        }
        System.out.println(n-stack.size());


    }

}










