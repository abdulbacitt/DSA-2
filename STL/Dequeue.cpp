#include<iostream>
#include<deque>
#include<vector>

using namespace std;

int main() {
    vector<int> a { 1, 2, 3};
    deque<char> charc { 'a', 'e', 'i', 'o', 'u'};

    for(char c: charc) {
        cout << c;
        charc.pop_front();
    }
    cout << " \n";

    cout << charc.size() <<endl;

    for(int &c : a) {
        cout << c;
    }

    vector<int> v { 3, -4, 7, -2, -1, 3, -5, 10, -3 };

	// let's remove negative values
	for (auto it = v.begin(); it != v.end();) {
		if (*it < 0)
		{	// You MUST use the returned iterators as erase invalidates it
			// Working on some cases != working all cases/data structures
			it = v.erase(it);
			// It points to the next element. Don't increment it
		}
		else
			++it;	// update ONLY if not removed
	}
	// 3 7 3 10 3
    cout << " \n";
	for (auto &val : v)
		cout << val << " ";
    return 0;

}