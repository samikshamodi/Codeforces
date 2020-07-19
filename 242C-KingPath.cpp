/* samikshamodi - Samiksha Modi */
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;

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

//all 8 possible moves the king can make
int dr[] = {0, 0, -1, 1, -1, -1, 1, 1};
int dc[] = {-1, 1, 0, 0, -1, 1, -1, 1};

//stores all the valid cells where the king can move
set<Node> valid;

int bfs(Node src, Node dest)
{
    set<Node>visited;
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

        if(!visited.count(node))
        {
            visited.insert(node);
            for(int i = 0; i < 8; i += 1)
                if(valid.count(Node(x+ dr[i], y + dc[i])))
                    q.push(Node(x + dr[i], y + dc[i], dist + 1));
        }
    }

    return INT_MAX;
}



int main()
{
    sync;
    int i, j, x, y;
    cin >> i >> j >> x >> y;
    int n;
    cin >> n;
    for(int i = 0; i < n; i += 1)
    {
        int r, a, b;
        cin >> r >> a >> b;
        for(int j = a; j <= b; j += 1)
        {
            Node temp=Node(r,j);
            valid.insert(temp);
        }

    }

    int ans = bfs(Node(i, j), Node(x, y));
    if(ans == INT_MAX)
        cout << -1;
    else
        cout << ans;

    return 0;
}