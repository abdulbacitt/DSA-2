#include<iostream>
#include<set>
#include<map>
#include<vector>

using namespace std;

int main() {
    int entries;
    cin >> entries;

    map <string, set<string> > mp;

    while(entries--){

        string str;
        cin >> str;

        string curr = "";

        for(auto c : str)
        curr +=c, mp[curr].insert(str);
    }

    int q;
    cin >> q;

    while(q--){
        string str;
        cin >> str;

        for(auto strn: mp[str]) {
            cout << strn << " ";
        }

        cout << " \n ";
    }

    return 0;
}