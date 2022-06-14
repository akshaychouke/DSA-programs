#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main(){
	
	//Geratimg random number
	int rnum=1;
	srand(time(0));
	rnum=rand()%100+2;
	//cout<<rnum<<endl;
	
	//creating the variables 
	int guess;			//the input which will be entered by player
	int number_of_guesses;   // the total numbers of attempts the player took to guess the number 
	int available_chances=10; // available numbers of attempts in which player have to guess the number

	cout<<"Guess the number between 1 to 100 within 10 attempts "<<endl;	
	
	while(true){
		cout<<"Enter the number "<<endl;
		cin>>guess;
		number_of_guesses++;
		available_chances--;
		
		if(guess>rnum){
			cout<<"Please Enter small number"<<endl;
			cout<<"Now you have only "<<available_chances<<" attempts left"<<endl;
		}
		else if(guess<rnum){
			cout<<"Please Enter Big number "<<endl;
			cout<<"Now you have only "<<available_chances<<" attempts left"<<endl;
		}
		else{
			cout<<"Hurrey , You guessed it in "<<number_of_guesses<<" attempts"<<endl;
			cout<<endl;
			cout<<"\t\t\t****************Thank you****************";
			exit(0);
		}
		
		if(available_chances<=0){
			cout<<endl;
			cout<<"Your have used all avialable Attempt "<<endl;
			cout<<"The number was "<<rnum<<endl;
			cout<<endl;
			cout<<"\t\t\t****************Thank you****************";
			exit(0);
		}
	}
	return 0;
}
