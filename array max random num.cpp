#include <iostream>
#include <cstdlib>
using namespace std;
double maxRand(int num[]);
int main()
{
	int SIZE=20, num[SIZE], i, max;
	
	for(i=0; i<SIZE; i++){
		cout<<"Number "<<(i+1) <<" : ";
		num[i] = rand();
		cout<<num[i]<<endl;
	}
	
	max = maxRand(num);
	cout<< endl <<"Max = "<<max<<endl;
	
return 0;
}
double maxRand(int num[]){
	int SIZE=20, i, max = 0;
	for(i=0; i<SIZE; i++){
		if(num[i] > max){
		max = num[i];
	    }
	}
	return max;
}

