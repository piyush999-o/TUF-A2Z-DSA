#include <bits/stdc++.h>
using namespace std;


bool comp(pair<int, int> p1, pair<int, int> p2){
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;

    if(p1.first > p2.first) return true;
    return false;

}

int main(){

    vector<int> v;
    v.push_back(9);
    v.push_back(5);
    v.push_back(8);
    v.push_back(4);
    v.push_back(7);

    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    
    // sort(v.begin(), v.end());
    sort(v.begin(), v.end(), greater<int>());
    

    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;


    // Pair:

    pair<int, int> p[] = {{2, 1}, {4, 1}, {5, 9}, {1, 2}}; 
    // p[3] = ;
    
    for (int i = 0; i < 4; i++)
    {
        cout<<p[i].first<<" : "<<p[i].second<<endl;
    }
    cout<<endl;
    
    
    sort(p, p+4, comp);
    
    cout<<"After Sorting:"<<endl;
    for (int j = 0; j < 4; j++)
    {
        cout<<p[j].first<<" : "<<p[j].second<<endl;
    }
    cout<<endl;
    
    



    return 0;
}