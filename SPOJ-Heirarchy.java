import java.util.*;

public class Heirarchy
{

    static ArrayList<Integer>result = new ArrayList<Integer>();
    static int n;

    static void toputil(ArrayList<ArrayList<Integer>>adj, int s, boolean[] visited)
    {
        visited[s] = true;
        for(Integer child : adj.get(s))
        {
            if(!visited[child])
                toputil(adj, child, visited);
        }
        result.add(s);
    }

    static void topologicalsort(ArrayList<ArrayList<Integer>>adj)
    {

        boolean[] visited = new boolean[n];
        for(int i = 0; i < n; i += 1)
        {
            if(!visited[i])
                toputil(adj, i, visited);
        }
    }

    public static void main(String[] args)
    {
        Scanner in = new Scanner (System.in);
        n = in.nextInt();
        int k = in.nextInt();

        ArrayList<ArrayList<Integer>>adj = new ArrayList<ArrayList<Integer>>();
        for(int i = 0; i < n; i += 1)
            adj.add(new ArrayList<Integer>());

        for(int i = 0; i < k; i += 1)
        {
            int w = in.nextInt();
            while(w-- > 0)
            {
                int x = in.nextInt() - 1;
                adj.get(i).add(x);
            }
        }

        topologicalsort(adj);
       // System.out.println(result);
        

        int pos=-1;
        int[]boss=new int[n];
        for(int i=n-1;i>=0;i--)
        {
        	int student=result.get(i);
        	boss[student]=pos;
        	pos=student;
        }

        for(int i=0;i<n;i+=1)
        	System.out.println(boss[i]+1);
    }

}










