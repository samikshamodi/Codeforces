/* samikshamodi - Samiksha Modi */
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define pb push_back
#define mp make_pair
#define f first
#define s second

#define sync ios_base::sync_with_stdio(false);cin.tie(NULL);
#define out1d(arr,size) {for(int i=0;i<size;i++) cout<<arr[i]<<" ";}
#define in2d(arr,row,col) for(int i=0;i<row;i++) for(int j=0;j<col;j++) cin>>arr[i][j];
#define out2d(arr,row,col) {for(int i=0;i<row;i++) {for(int j=0;j<col;j++) cout<<arr[i][j]<<" ";cout<<endl;}}
#define mem(arr,val) memset(arr,val,sizeof(arr));

const ll MOD = 1e9 + 7;
const ll INF = 1e18;
const ll N = 1e5 + 7;

int dr[] = { 2, 2, -2, -2, 1, 1, -1, -1 };
int dc[] = { -1, 1, 1, -1, 2, -2, 2, -2 };

bool valid(int x, int y)
{
    return x >= 0 && x < 8 && y >= 0 && y < 8;
}

struct Node
{
    int x, y, dist;
    Node(int xx, int yy, int dd = 0)
    {
        x = xx;
        y = yy;
        dist = dd;
    }
    bool operator<(const Node &o) const
    {
        return x < o.x || (x == o.x && y < o.y);
    }
};

int bfs(Node src, Node dest)
{
    set<Node> visited;
    queue<Node> q;
    q.push(src);

    while(!q.empty())
    {
        Node node = q.front();
        q.pop();

        int x = node.x;
        int y = node.y;
        int dist = node.dist;

        if(x == dest.x && y == dest.y)
            return dist;

        //location not visited
        if(!visited.count(node))
        {
            //mark as visited
            visited.insert(node);

            //inset all possible moves
            for(int i = 0; i < 8; i += 1)
                if(valid(x + dr[i], y + dc[i]))
                    q.push(Node(x + dr[i], y + dc[i], dist + 1));
        }

    }

    return INT_MAX;
}



int main()
{
    sync;
    string a, b;
    while(cin >> a >> b)
    {
        int ans=bfs(Node(a[0] - 'a', a[1] - '1'), Node(b[0] - 'a', b[1] - '1'));
        cout<<"To get from "<<a<<" to "<<b<<" takes "<<ans<<" knight moves.\n";
    }
    //Node n1=Node(1,2,13);


    return 0;
}