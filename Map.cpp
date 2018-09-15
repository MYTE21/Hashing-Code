/**
Map1s are associative containers that store elements in a mapped fashion.
Each element has a key value and a mapped value.
No two mapped values can have same key values.

-----------------------------
Functions associated with map:
-----------------------------
begin() - Returns an iterator to the first element in the map
end() - Returns an iterator to the theoretical element that
        follows last element in the map
size() - Returns the number of elements in the map
max_size() - Returns the maximum number of elements that the map can hold
empty() - Returns whether the map is empty
pair insert(keyvalue,Map1value) - Adds a new element to the map
erase(iterator position) - Removes the element at the position
                           pointed by the iterator
erase(const g)- Removes the key value 'g' from the map
clear() - Removes all the elements from the map

key_comp() / value_comp() - Returns the object that determines how the elements in the map are ordered ('<' by default)
find(const g) - Returns an iterator to the element with key value 'g' in the map if found, else returns the iterator to end
count(const g) - Returns the number of matches to element with key value 'g' in the map
lower_bound(const g) - Returns an iterator to the first element that is equivalent to mapped value with key value 'g' or definitely will not go before the element with key value 'g' in the map
upper_bound(const g) - Returns an iterator to the first element that is equivalent to mapped value with key value 'g' or definitely will go after the element with key value 'g' in the map

*/

#include <iostream>
#include<cstdio>
#include <map>
#include <iterator>
using namespace std ;

#define endl '\n'

int main()
{
    map<int, int>Map1 ;        // empty Map1 container

    // insert elements in random order
    Map1.insert(pair <int, int> (1, 40));
    Map1.insert(pair <int, int> (2, 30));
    Map1.insert(pair <int, int> (3, 60));
    Map1.insert(pair <int, int> (4, 20));
    Map1.insert(pair <int, int> (5, 50));
    Map1.insert(pair <int, int> (6, 50));
    Map1[7] = 10 ;
    Map1[8] = 70 ;
    Map1[9] = 20 ;
    Map1[10] = 100 ;


    // printing Map1 Map1
    map <int, int> :: iterator itr;
    cout << "\nThe Map1 Map1 is : \n";
    cout << "\tKEY\tELEMENT\n";
    for (itr = Map1.begin(); itr != Map1.end(); ++itr)
    {
        cout  <<  '\t' << itr->first
              <<  '\t' << itr->second << '\n';
    }
    cout << endl;

    // assigning the elements from Map1 to Map2
    map <int, int> Map2(Map1.begin(), Map1.end());

    // print all elements of the Map1 Map2
    cout << "\nThe Map1 Map2 after assign from Map1 is : \n";
    cout << "\tKEY\tELEMENT\n";
    for (itr = Map2.begin(); itr != Map2.end(); ++itr)
    {
        cout  <<  '\t' << itr->first
              <<  '\t' << itr->second << '\n';
    }
    cout << endl;

    // remove all elements up to element with key=3 in Map2
    cout << "\nMap2 after removal of elements less than key=3 : \n";
    cout << "\tKEY\tELEMENT\n";
    Map2.erase(Map2.begin(), Map2.find(3));
    for (itr = Map2.begin(); itr != Map2.end(); ++itr)
    {
        cout  <<  '\t' << itr->first
              <<  '\t' << itr->second << '\n';
    }

    // remove all elements with key = 4
    int num;
    num = Map2.erase (4);
    cout << "\nMap2.erase(4) : ";
    cout << num << " removed \n" ;
    cout << "\tKEY\tELEMENT\n";
    for (itr = Map2.begin(); itr != Map2.end(); ++itr)
    {
        cout  <<  '\t' << itr->first
              <<  '\t' << itr->second << '\n';
    }

    cout << endl;

    //lower bound and upper bound for Map1 Map1 key = 5
    cout << "Map1.lower_bound(5) : " << "\tKEY = ";
    cout << Map1.lower_bound(5)->first << '\t';
    cout << "\tELEMENT = " << Map1.lower_bound(5)->second << endl;
    cout << "Map1.upper_bound(5) : " << "\tKEY = ";
    cout << Map1.upper_bound(5)->first << '\t';
    cout << "\tELEMENT = " << Map1.upper_bound(5)->second << endl;

    return 0;

}
