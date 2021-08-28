#include<bits/stdc++.h>
using namespace std;
vector<int>Graph[100];
bool visited[1000];
int bfs(int source);
int main()
{
    int node,edge;
    cout<<"Enter the number of nodes and edges"<<endl;
    cin>>node>>edge;
    for(int i=1;i<=edge;i++)
    {
        int u,v;
        cout<<"enter edge(source and destination): "<<endl;
        cin>>u>>v;
        Graph[u].push_back(v);
        Graph[v].push_back(u);
    }
    cout<<"Enter the source node"<<endl;
    int source;
    cin>>source;
    bfs(source);

}
int bfs(int source)
{
    queue<int>Q;
    Q.push(source);
    visited[source]=true;
    while(!Q.empty())
    {
        int u=Q.front();
        cout<<u<<" ";
        Q.pop();
        for(int i=0;i<Graph[u].size();i++)
        {
           int v=Graph[u][i];
           while(!visited[v])
           {
               visited[v]=true;
               Q.push(v);
           }

        }
    }

}



/*#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int cost[50][50],i,j,k,n,qu[50],front,rare,v,visit[50],visited[50];

main()
{
    int m;
    cout <<"Enter number of vertices : ";
    cin >> n;
    cout <<"Enter number of edges : ";
    cin >> m;
    cout <<"\nEDGES : \n";
    for(k=1; k<=m; k++)
    {
        cin >>i>>j;
        cost[i][j]=1;
    }

    cout <<"Enter initial vertex : ";
    cin >>v;
    cout <<"Visitied vertices\n";
    cout << v<<" ";
    visited[v]=1;
    k=1;
    while(k<n)
    {
        for(j=1; j<=n; j++)
            if(cost[v][j]!=0 && visited[j]!=1 && visit[j]!=1)
            {
                visit[j]=1;
                qu[rare++]=j;
            }
        v=qu[front++];
        cout<<v << " ";
        k++;
        visit[v]=0;
        visited[v]=1;
    }
}
*/
