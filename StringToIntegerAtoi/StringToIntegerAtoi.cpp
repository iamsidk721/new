#include <bits/stdc++.h>
#include "../crio/cpp/io/FastIO.hpp"
#include <sstream>
using namespace std;

class StringToIntegerAtoi {
public:
    // Implement your solution by completing the below function	
    int myAtoi(string str) {
		int ans = stoi(str),f=0,x=str.size();
       
        return ans;
    }
};

int main() {
	FastIO();
	string str;
	cin >> str;
	int result = StringToIntegerAtoi().myAtoi(str);
	cout << result;
	return 0;
}
