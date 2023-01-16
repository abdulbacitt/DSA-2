#include<iostream>
#include<map>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
    int entries;

    cin >> entries;

    map<string, vector<string> > mp;

    while(entries--) {

        string str, full_name = "";
        int len;
        vector<string> part_name;

        cout << " Enter the length of the name " <<endl;

        cin >> len;
        while(len--){
        
        cin >> str;

        full_name += str;
        part_name.push_back(full_name);
        }
        for(auto cur: part_name) {
            mp[cur].push_back(full_name);
            cout << cur << ":" << mp[cur].front() << endl;
            
        }
    }

    int queries;
    cin >> queries;

    while (queries--) {
		string str;
		cin >> str;

		for (auto cur : mp[str])
			cout << cur << " ";
		cout << "\n";
	}

    return 0;
}