#include<iostream>
using namespace std;
int main(){
	string correctPassword ="12345";
	string enteredPassword; 
	int attempts = 0;
	start :
		if (attempts >=3){
			cout<<"too many incorrect password "<<endl;
			return 1;
			
		}
		cout<<"enter password : ";
		cin>>enteredPassword;
		
		if (enteredPassword==correctPassword){
			cout<<"wellcome"<<endl;
			return 0;
		}else{
			attempts++;
			cout<<"incorrect.attempets left"<<3-attempts<<endl;
			goto start;
		}
		return 0;
}
