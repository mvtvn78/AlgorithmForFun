#include<bits/stdc++.h>
int arr[]= {2,7,11,15};
int n = sizeof(arr)/sizeof(int);
void TwoSum(int target)
{
	for(int i =0;i <n-1;++i)
	{
		for(int j = i+1; j<n;++j)
		{
			if(target - arr[j] == arr[i])
				std::cout<<i<<j<<std::endl;
		}
	}
}
int main(){
	TwoSum(17);
}