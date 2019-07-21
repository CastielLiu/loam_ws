#include<iostream>
#include<vector>

using namespace std;
int main()
{
	vector<int> array1(10,1);
	vector<int> array2(20,2);
	
	array1.assign(6,12);
	
	for(size_t i=0; i<array1.size(); ++i)
		cout << array1[i] <<endl;
	return 0;	
}
