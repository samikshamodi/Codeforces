import java.util.*;

public class FormingTeams
{
    static boolean cycle;
    static int cnt;
    static int vis[] = new int[100005];

    static void dfs(int s, int last, ArrayList<ArrayList<Integer>>adj)
    {
        cnt++;
        if(vis[s] == 1)
        {
            cycle = true;
            return;
        }
        vis[s] = 1;
        for(int child : adj.get(s))
        {
            if(child != last)
                dfs(child, s, adj);
        }
    }
    public static void main(String[] args)
    {
        Scanner in = new Scanner (System.in);
        int n = in.nextInt();
        int m = in.nextInt();
        ArrayList<ArrayList<Integer>>adj = new ArrayList<ArrayList<Integer>>();
        for(int i = 0; i < n; i += 1)
            adj.add(new ArrayList<Integer>());

        while(m-- > 0)
        {
            int a = in.nextInt() - 1;
            int b = in.nextInt() - 1;
            adj.get(a).add(b);
            adj.get(b).add(a);

        }

        int ans = 0;
        for(int i = 0; i < n; i += 1)
        {
            cycle = false;
            cnt = 0;
            if(vis[i] != 1)
                dfs(i, -1, adj);
            //if there is a cycle of odd elements then increase answer by 1. In short the graph is not bipartite
            if(cycle == true && cnt % 2 == 1)
                ans += 1;
            //if graph is not bipartite then it is odd ka cycle
        }
        System.out.println(ans + (n - ans) % 2);

    }

}










