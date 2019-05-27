#include<iostream>
using namespace std;
int main()
{
	int n;
    cin>>n;
    cout<<(n/10+7)%10*1000+(n+7)%10*100+(n/1000+7)%10*10+(n/100+7)%10;
}
