#include <iostream>
#include <vector>
#include <queue>
using namespace std;
void dfs(vector<vector<int>> G, vector<bool> visited, int node)
{
    // if(visited[node])
    //     return;
    cout<<node<<",";
    visited[node]=true;
    vector<int> neighbours = G[node];
    for(int next: neighbours)
        if(!visited[next])
            dfs(G,visited,next);
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

    vector<bool> visited(num,false);
    dfs(G,visited,0);

    return 0;
}