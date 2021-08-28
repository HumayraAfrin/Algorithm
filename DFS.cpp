#include<iostream>
#include<vector>
#include<cstring>
#include<cstdio>
using namespace std;
void dfs(int node);
vector <int> graph[100];
int visited[1000];
int main()
{
    int nodes, edges;
    cout<<"Number of nodes and edges : "<<endl;
    cin>>nodes>>edges;
    int u,v;
    cout<<"Enter  source and end nodes if each edge respectively"<<endl;
    for(int i=0;i<edges;i++)
    {
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
   memset(visited,-1,sizeof(visited));
   dfs(1);
}
void dfs(int node)
{
    cout<<" node "<<node<<" is visited "<<endl;
    visited[node]=1;
    for(int i=0;i<graph[node].size();i++)
    {
        if(visited[graph[node][i]]==-1)
        {
        	//printf("From : %d => To : %d\n",node, graph[node][i]);
            dfs(graph[node][i]);
        }
    }
    return;
}


/*#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int cost[50][50],i,j,k,n,stk[50],top,v,visit[50],visited[50];

int main()
{
    int m;
    cout <<"Enter number of vertices : ";
    cin >> n;
    cout <<"Enter number of edges : ";
    cin >> m;
    cout <<"\nEDGES :\n";
    for(k=1; k<=m; k++)
    {
        cin >>i>>j;
        cost[i][j]=1;
    }

    cout <<"Enter initial vertex : ";
    cin >>v;
    cout <<"ORDER OF VISITED VERTICES : ";
    cout << v <<" ";
    visited[v]=1;
    k=1;
    while(k<n)
    {
        for(j=n; j>=1; j--)
            if(cost[v][j]!=0 && visited[j]!=1 && visit[j]!=1)
            {
                visit[j]=1;
                stk[top]=j;
                top++;
            }
        v=stk[--top];
        cout<<v << " ";
        k++;
        visit[v]=0;
        visited[v]=1;
    }
}
*/
