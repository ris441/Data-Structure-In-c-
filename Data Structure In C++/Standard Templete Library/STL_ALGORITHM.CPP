#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(8);

    v.push_back(8);
    v.push_back(8);
    v.push_back(8);

    // v.push_back(10);
    v.push_back(11);
    v.push_back(12);
    v.push_back(14);
    // binary search is bool return type of fuction
    cout << binary_search(v.begin(), v.end(), 5) << endl;
    string ans = (binary_search(
                      v.begin(), v.end(), 10) == 1)
                     ? "Element is Present"
                     : "Element is not Present ";
    cout << ans << endl;
    // In the lower bound output is just smaller value that
    // is present in anytype of data type which
    // return the index value   .
    // if lower bound is present in the any type of data type
    // or container then return the index of that particular Lower bound
    // index.
    cout << "printing the vector.. " << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    vector<int>::iterator it = lower_bound(v.begin(), v.end(), 13);
    cout << "lower bound for 13-> " << *it << endl;
    cout << "lower bound for 11-> " << *lower_bound(v.begin(), v.end(), 11) << endl;
    cout << "lower bound for 12 (index) -> " << lower_bound(v.begin(), v.end(), 12) - v.begin() << endl;

    // upper Bound
    cout << "Upper bound for 11 (index)=> " << upper_bound(v.begin(), v.end(), 11) - v.begin() << endl;
    vector<int>::iterator it1 = upper_bound(v.begin(), v.end(), 13);
    cout << "upper bound for 13-> " << *it1 << endl;
    cout << "upper bound for 11-> " << *upper_bound(v.begin(), v.end(), 11) << endl;

    int a = 9, b = 4;
    cout << "maximum = " << max(a, b) << endl;
    cout << "minimum = " << min(a, b) << endl;

    swap(a, b);
    cout << "After the swaping " << endl
         << " a = " << a << " b = " << b << endl;
    // reverse String
    string s = "vaday hbahsir";
    reverse(s.begin(), s.end());
    cout << "Reversed String = " << s << endl;

    cout << "After the rotation of vector five times ..." << endl;
    rotate(v.begin(), v.begin() + 5, v.end());
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "After sorting the vector ... " << endl;
    sort(v.begin(), v.end());
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}