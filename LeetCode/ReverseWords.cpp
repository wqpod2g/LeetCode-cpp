#include"LeetCode.h"
#include<stack>


void  LeetCode::ReverseWords(string &s)
{
	string temp;
	stack<string> st;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]!=' ')
		{
			temp=temp+s[i];
		}

		else
		{
			if(temp!="")
				st.push(temp);
			temp="";
			
		}
	}
	if(temp!="")
		st.push(temp);
	s="";
	while(st.size()>1)
	{
		s=s+st.top();
		st.pop();
		s=s+" ";

	}
	if(st.empty())
	s="";
	else
	s=s+st.top();

	
}