//Array of Strings

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	string A[n];
	for(int i=0;i<n;i++)
	getline(cin,A[i]);
	for(int i=0;i<n;i++)
	cout<<"A["<<i<<"] = "<<A[i]<<endl;
	
	cout<<"first is "<<A[0];	//When size of Array is taken dynamically 
								//Then A[k] element is not accesssible  // Where k is the index from where input is taken
								//Here since input is from index 0, A[0] is not acessible
	return 0;
}
