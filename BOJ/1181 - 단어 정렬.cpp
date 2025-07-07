#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compareFunction(string a, string b) {

    return (a.length()!=b.length())?a.length()<b.length() : a<b;
}

int main()
{
    int n;
    cin >> n;

    vector<string> dict;
    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;
        dict.push_back(str);
    }

    sort(dict.begin(), dict.end(), compareFunction);

    vector<string>::iterator iter,iter2;
    
    for (iter = dict.begin() + 1; iter != dict.end(); iter++) {
        if(*iter == *(iter-1)){
            iter=dict.erase(iter-1);
        }
    }

    for (iter = dict.begin(); iter != dict.end(); iter++) {
        cout<<*iter<<endl;
    }

    return 0;
}