#include <iostream>
#include <vector>
#include <queue>
using namespace std;
void bfs(vector<vector<int>> G, int num)
{
    queue<int> q;
    vector<bool> visited(num,false);
    q.push(0);
    visited[0]=true;
    while(!q.empty())
    {
        int node = q.front();
        cout<<node<<",";
        q.pop();
        vector<int> neighbours = G[node];
        for(int next: neighbours)
        {
            if(!visited[next])
            {
                q.push(next);
                visited[next]=true;
            }
        }
    }

}
int main()
{
    vector<vector<int>> G;
    int num;
    cout<<"Enter number of vertices: ";
    cin>>num;
    for(int i=0;i<num;i++)
    {
        int num_edge;
        cout<<"Enter number of edges connected to vertex "<<i<<" : ";
        cin>>num_edge;
        vector<int> temp;
        cout<<"Enter connected vertices:";
        for(int j=0;j<num_edge;j++)
        {
            int x;
            cin>>x;
            if(x>=num)
            {
                cout<<"invalid"<<endl;
                continue;
            }
            temp.push_back(x);
        }
        G.push_back(temp);
        temp.clear();
    }

    bfs(G,num);

    return 0;
}