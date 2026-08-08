#include <bits/stdc++.h>
using namespace std;

int main(){
    // Pairs:
    // pair<int, int> p = {5, 3};
    // cout<<p.first;


    // VECTORS:
    vector<int> v1;
    v1.push_back(1);
    v1.emplace_back(2);
    
    cout<<v1[0]<<endl;
    cout<<v1[1]<<endl;

    // ALLOTING 3 blocks with value 20 :
    vector<int> v2(3, 20);
    // cout<<v2[2];
    for (int i = 0; i < 3; i++)
    {
        cout<<v2[i]<<endl;
    }

    // ALLOTING 5 blocks with default value;
    vector <int> v4(5);

    // ALLOTING pairs:
    vector <pair<int, int>> v3;
    v3.push_back({34, 56});
    v3.emplace_back(90, 89); // emplace_back don't require "{}" curly brackets;
    cout<<v3[0].second<<endl;
    cout<<v3[1].first<<endl;                      ;




    
    vector <int> v(3, 12);
    v.push_back(52);
    v.push_back(63);

    vector <int>::iterator itr = v.begin(); // ITERATOR syntax
    // cout<<*(itr)<<endl;

    for (vector<int>::iterator it = v.begin(); it < v.end(); it++) // TYPE:1 for printing vector
    {
        cout<<*it<<" ";
    }
    cout<<endl;

    // v.erase(v.begin()+1); For only one element
    v.erase(v.begin()+1, v.end()-1); // Format: [start, end) <-- Intervals


    for (auto it = v.begin(); it < v.end(); it++) // TYPE:2 for printing vector
    {
        cout<<*it<<" ";
    }
    cout<<endl;

    // v.insert(v.begin()+1, 90); For only one element, 
    v.insert(v.begin()+1, 2, 30); // Format: (location, no_of_elements, elements);

    for (auto it: v) // TYPE:3 for printing vector
    {
        cout<<it<<" ";
    }
    
    
    /*
    More method:

    v.rbegin();
    v.rend();

    v.pop_back();
    v.size();
    v.swap(v2);
    v.clear();
    v.empty();
    
    also 1 is known as copy something....(28:42)

    */



    return 0;
}