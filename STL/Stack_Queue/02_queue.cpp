#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<string> q;
    q.push("tushar");
    q.push("sujata");
    q.push("priyanshu");
    q.push("yogesh");
    while(!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }
    return 0;
}