#include <iostream>
using namespace std;
int main(){
	int num=1, positive=0, negative=0, total=0;
	double i=0, average;
	cout<<"Enter an integer value, the program exits if the input is 0: "<<endl;
	while (num!=0){
		cin>>num;
		i++;
		total += num;
		if (num>0)
			positive++;
		if (num<0)
			negative++;
	}
average = total/ (i-1);
cout<<"The number of positives is "<<positive<<endl;
cout<<"The number of negatives is "<<negative<<endl;
cout<<"The total is "<<total<<endl;
cout<<"The average is "<<average<<endl;
cout<<"i is"<<i;
return 0;
}

