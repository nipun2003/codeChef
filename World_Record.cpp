#include <bits/stdc++.h>
using namespace std;

int main()
{
	// your code goes here
	int testCase;
	cin >> testCase;
	vector<vector<double>> vec(testCase);
	for (int i = 0; i < testCase; i++)
	{
		vec[i] = vector<double>(4);
		for (int j = 0; j < 4; j++)
		{
			double a;
			cin>>a;
			vec[i][j]=a;
		}
	}

	for(int i=0;i<testCase;i++)
	{
		double res=1;
		for(int j=0;j<4;j++)
		{
			res=res*vec[i][j];
		}
		double result=100/res;
		result=round(result*100)/100;
		if(result<9.58){
			cout<<fixed<<"YES"<<endl;
		}
		else{
			cout<<fixed<<"NO"<<endl;
		}

	}
	return 0;
}
