#include"LeetCode.h"

void main(){
	LeetCode object;
	vector<string>s;
	s.push_back("3");
	s.push_back("2");
	s.push_back("+");
	cout<<object.evalRPN(s);
}