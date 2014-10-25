#include"LeetCode.h"
#include<stack>

int LeetCode::evalRPN(vector<string> &tokens){
	int sum;
	string operators="+-*/";
	stack<int>sta;
	for(int i=0;i<tokens.size();i++){
		if(operators.find(tokens[i])==string::npos){
			sta.push(atoi(tokens[i].c_str()));
		}

		else{
			int a=sta.top();
			sta.pop();
			int b=sta.top();
			sta.pop();
			if(tokens[i]=="+"){
				sta.push(a+b);
			}
			if(tokens[i]=="-"){
				sta.push(b-a);
			}
			if(tokens[i]=="*"){
				sta.push(a*b);
			}
			if(tokens[i]=="/"){
				sta.push(b/a);
			}
		}		
	}
	sum=sta.top();
	return sum;

}

