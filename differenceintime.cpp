#include <bits/stdc++.h> 
using namespace std; 
int removeColon(string s) 
{ 
	if (s.size() == 4) 
		s.replace(1, 1, ""); 
	
	if (s.size() == 5) 
		s.replace(2, 1, ""); 
	
	return stoi(s); 
} 

// Main function which finds difference 
string diff(string s1, string s2) 
{ 

	int time1 = removeColon(s1); 
	int time2 = removeColon(s2); 
	int hourDiff = time2 / 100 - time1 / 100 - 1; 
	int minDiff = time2 % 100 + (60 - time1 % 100); 

	if (minDiff >= 60) { 
		hourDiff++; 
		minDiff = minDiff - 60; 
	} 
	string res = to_string(hourDiff) + ':' + to_string(minDiff); 
	return res; 
} 
int main() 
{ 
  cin>>string s1>>string s2;
	cout << diff(s1, s2) << endl; 
	return 0; 
} 
