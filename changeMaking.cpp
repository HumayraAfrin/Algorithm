#include<bits/stdc++.h>
using namespace std;
int main()
{
    while(1){
        int avail_changes;
        float ret_change;
        cout<<"Enter the amount of changes you are returned: \n";
        cin>>ret_change;
        cout<<"How many changes are available : \n";
        cin>>avail_changes;
        float changes[avail_changes];
        cout<<"Enter "<<avail_changes<<" changes"<<endl;
        for(int i=0;i<avail_changes;i++)
            cin>>changes[i];
        float total=0.0;
        vector<float>v;

        ///counting the minimum coins
        sort(changes,changes+avail_changes);
        for(int i=avail_changes-1;i>=0;i--)
        {
            if(total==ret_change)break;
            if(changes[i]>ret_change)continue;
            else{
                int k=1;
                while((total+changes[i])<=ret_change)total+=changes[i],k++;
                k--;
                while(k--)v.push_back(changes[i]);
            }
        }

        int v_size=v.size();///number of coins
        cout<<endl<<"The total number of coins are : "<<v_size<<endl<<endl;
        cout<<"The coins are :\n";
        for(int i=0;i<v_size;i++)
            cout<<v[i]<<" ";
        cout<<endl<<endl<<endl<<"Again,"<<endl;
    }
    return 0;
}

/*
// nabil vr code
#include <bits/stdc++.h>
using namespace std;

//int notes[] = {1, 2, 5, 10, 20, 50, 100, 500, 1000}; /// 1 3 5 6 9 : 11
int notes[5000];
int n = 5;

void CoinChange(int v)
{
    vector<int> ans, res;
    int cnt, xam = 10000000000;
    int V = v;
    for(int p = n-1; p >= 0; p--)
    {
        cnt = 0;
        V = v;
        for(int i = p; i>=0; i--)
        {
            while (V >= notes[i])
            {
                V -= notes[i];
                ans.push_back(notes[i]);
                cnt++;
            }
        }
        if(xam>cnt&&V==0)
        {
            xam = cnt;
            res = ans;
        }
        ans.clear();
    }
    for (int i = 0; i < res.size(); i++)
        cout << res[i] << "  ";
}

int main()
{
    int x;
    cout<<"Please enter the number of notes: ";
    cin>>n;
    cout<<"Enter the nodes: ";
    for(int i = 0; i < n; i++) cin>>notes[i];
    sort(notes, notes+n);
    cout<<"Please enter amount to make changes: ";
    cin>>x;
    cout << "Minimal number of change for " << x << " is ";
    CoinChange(x);
    return 0;
}
*/
