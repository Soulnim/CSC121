#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
	int user=3, comp;
	while (user != 0 && user != 1 && user != 2){
		cout<<"Enter 0 for scissor"<<endl;
		cout<<"Enter 1 for rock"<<endl;
		cout<<"Enter 2 for paper"<<endl;
		cout<<"Enter : ";
		cin>>user;
		cout<<endl;
	}
	comp = rand()%2;
	
	if (user==0){
		cout<<"You use scissor"<<endl;
		if (comp==0){
			cout<<"Computer use scissor"<<endl;
			cout<<"Draw"<<endl;
		}
		else if(comp==1){
			cout<<"Computer use rock"<<endl;
			cout<<"Computer win"<<endl;
		}
		else if(comp==2){
			cout<<"Computer use paper"<<endl;
			cout<<"You win"<<endl;
		}
	}
	else if(user==1){
		cout<<"You use rock"<<endl;
		if (comp==0){
			cout<<"Computer use scissor"<<endl;
			cout<<"You win"<<endl;
		}
		else if(comp==1){
			cout<<"Computer use rock"<<endl;
			cout<<"Draw"<<endl;
		}
		else if(comp==2){
			cout<<"Computer use paper"<<endl;
			cout<<"Computer win"<<endl;
		}
	}
	else if(user==2){
		cout<<"You use paper"<<endl;
		if (comp==0){
			cout<<"Computer use scissor"<<endl;
			cout<<"Computer win"<<endl;
		}
		else if(comp==1){
			cout<<"Computer use rock"<<endl;
			cout<<"You win"<<endl;
		}
		else if(comp==2){
			cout<<"Computer use paper"<<endl;
			cout<<"Draw"<<endl;
		}
	}
return 0;
}

