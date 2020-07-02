import java.util.*;

public class PoliceRecruits
{

    public static void main(String[] args)
    {
        Scanner in = new Scanner (System.in);
        int n = in.nextInt();
        Stack<Integer> stack = new Stack<Integer>();
        while(n-- > 0)
        {
            int x = in.nextInt();
            if(stack.empty())
            {
                if(x == -1)
                    stack.push(-1);
                else
                {
                    while(x-- > 0)
                        stack.push(1);
                }
            }
            else
            {
                if(x == -1)
                {
                    if(stack.empty() == false)
                    {
                        if(stack.peek() == 1)
                            stack.pop();
                        else
                            stack.push(x);
                    }
                    else
                        stack.push(x);
                }
                else
                {
                    while(x-- > 0)
                        stack.push(1);
                }
            }
        }

        int cnt = 0;
        int nn=stack.size();

        for(int i = 0; i < nn; i += 1)
        {
    		//System.out.println(stack.pop());
           
            if(stack.pop() == -1)
                cnt++;
        }
        System.out.println(cnt);
    }


}










