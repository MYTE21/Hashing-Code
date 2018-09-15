/**
*** C++ program to demonstrate functionality of unordered_map
**/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    /**
       Declaring umap to be of <string, double> type
       key will be of string type and mapped value will
       be of double type
    */
    unordered_map<string, double> umap;

    // inserting values by using [] operator
    umap["PI"] = 3.14;
    umap["root2"] = 1.414;
    umap["root3"] = 1.732;
    umap["log10"] = 2.302;
    umap["loge"] = 1.0;

    // inserting value by insert function
    umap.insert(make_pair("e", 2.718));
    umap.insert(make_pair("First Prime", 2)) ;

    string key = "PI";
    if (umap.find(key) == umap.end()) cout<<key<<" not found...!"<<endl<<endl ;    // If key not found in map iterator to end is returned
    else cout<<"Found : "<<key<<endl<<endl ; ;    // If key found then iterator to that key is returned

    key = "lambda";
    if (umap.find(key) == umap.end()) cout<<key<<" not found...!"<<endl<<endl ;
    else cout<<"Found : "<<key<<endl<<endl ;

    //    iterating over all value of umap
    unordered_map<string, double>:: iterator itr;

    cout << "All Elements : \n";
    for (itr = umap.begin(); itr != umap.end(); itr++)
    {
            cout<<'\t'<<itr->first<<"  "<<itr->second<<endl ;  /* itr works as a pointer to pair<string, double>
                                                                  type itr->first stores the key part  and
                                                                  itr->second stroes the value part
                                                               */
     }

     return 0 ;
}
