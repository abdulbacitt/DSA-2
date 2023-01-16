#include<iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
	map<string, vector<string> > mp;

	int n;
	cin >> n;

    vector< string > temp;
    bool next_time = false;

	while (n--) {
		string str;
		cin >> str;

        bool status = true;
        if(next_time)
        for( auto strn: temp) {
            if(strn == str) {
                status = false;
            }
        }
        if(status){
        temp.push_back(str);
		// add all prefixes to the map
		string cur = "";
		for (auto c : str)
			cur += c, mp[cur].push_back(str);
            }
        next_time = true;    
	}

    int queries;
    cin >> queries;

    while(queries--) {
        string str;
        cin >> str;

        for( auto phrz: mp[str]) {
            cout << phrz << " ";
        }

        cout << " \n " ;

    }
	return 0;
}
