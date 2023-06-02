#include <iostream>
#include <vector>
using namespace std;
void dfs(vector<vector<int>> G, vector<bool> visited, int node, vector<int> parent)
{
    // if(visited[node])
    //     return;
    visited[node]=true;
    vector<int> neighbours = G[node];
    for(int next: neighbours)
        if(!visited[next])
        {
            dfs(G,visited,next,parent);
            parent[next]=node;
        }
}
string fun(int V, vector<vector<int>> G, int src, int dest)
{
    vector<bool> visited(V,false);
    vector<int> parent(V,-1);
    dfs(G, visited, src, parent);

    if(parent[dest]==-1)
        return "No such path exists\n";
    else
        return "yes path exists\n";
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

    int src,dest;
    cout<<"Enter source: ";
    cin>>src;
    cout<<"Enter destination: ";
    cin>>dest;

    cout<<fun(num,G,src,dest);

    return 0;
}