#include <iostream>
#include <math.h>
using namespace std;
int main(){
	double sum = 0, mean, sd, topFraction=0 ,inSqrt, inBracket[20] ;
	int i, SIZE=20, number[SIZE];
	
	for (i=0; i<SIZE; i++)
		number[i] = 0;
		
	for (i=0; i<SIZE; i++){
		cout<<"Enter number "<<(i+1) <<" : ";
		cin>>number[i];
		sum += number[i];
	}
	mean = sum/SIZE;
	
	for (i=0; i<SIZE; i++){
		inBracket[i] = pow(number[i] - mean,2);
		topFraction += inBracket[i];
	}
	inSqrt = topFraction/ (SIZE-1);
	sd = sqrt(inSqrt);
	
	cout<<endl<< "Mean is : "<< mean << endl;
	cout<< "Standard Deviation is : "<< sd <<endl;
	 
return 0;
}

