#include<bits/stdc++.h>
using namespace std;

// code by sufiyan_12
int main()
{
	int n = 5; // size of vector

	 // vector to find next greater element
	vector<int> a={2,12,4, 14, 19};

	 // vector to store next greater element
	vector<int> nge(n, -1);
	
	// stack to evaluate result
	stack<int> st; 

	for(int i=0; i<n; ++i){
		// if current element is next greater of previous elements
		// So, mark it nge and pop that element from stack
		while(st.size() and a[st.top()] <= a[i]){
			nge[st.top()] = a[i];
			st.pop();
		}
		st.push(i);
	}
}