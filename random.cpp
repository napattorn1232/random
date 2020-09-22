#include <iostream>
#include <time.h>
using namespace std;
int Guess(int);
int main(){
	int n1,Round,count=0;
	srand(time(NULL));
	Round=1+rand()%10;
	cout<<"###Welcome to guessing number game###"<<endl;
	cout<<"Secret number has been chosen"<<endl;
	count=Guess(Round);
	cout<<"Congratulations!"<<endl;
	cout<<"The secret number is "<<Round<<endl;
	cout<<"You made "<<count<<" guesses"<<endl;
	


	return(0);
}
int Guess( int Round)
{ int count=0,n1;
do{
	cout<<"Guess the number (1 to 10):";
	cin>>n1;
	
	if(n1>Round)
		cout<<"The secret number is lower"<<endl;
	if(n1<Round)
		cout<<"The secret number is highe"<<endl;;
      count++;
}
while(n1!=Round);
	return(count);
}