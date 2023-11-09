#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>
using namespace std;

//prototypes.......................................................................
string wlist();
int draw(int);
void decision();
//.................................................................................


//main.............................................................................
int main(){
cout<<"WELCOME!!!"<<endl
<<"HANGMAN"<<endl<<endl
<<"caution: STAY SAFE!!!"<<endl
<<"Never get hanged"<<endl
<<"GOOD LUCK!!!"<<endl<<endl;


decision();

return 0;
}
//.................................................................................



//Function definations


//Decision.........................................................................
void decision()
{
char name[20];
cout<<"Enter your last name: ";
cin>>name;

string wSecret=wlist(); //chosing secret word by calling the function

//finding length of the secret word
int length=0;
while(wSecret[length]!='\0')length++;
char arrGuess[length];
	for(int i=0;i<length;i++) arrGuess[i]='*';	
cout<<"The word is of length: "<<length<<endl;

//...................................................

//loop that actually decides
int times;
for(int life=1;life<7||cout<<"you lost";){

//getting input....................................................................
char guess;
cout<<endl<<endl<<"Enter any letter: ";
cin>>guess;
	times=0;
	for(int i=0;i<length;i++){
	if(guess==wSecret[i]){        	//comparing
	times++;
	arrGuess[i]=guess;                  //storing if true
	
	for(int i=0;name[i]!='\0';++i)
	{ 
	if(name[i]==guess){
		if(life>1){
		cout<<"you got bonus life!!!"<<endl;life--;
	 	}
	 }
	 }
}
}

//showing result...................................................................
if(times>0){ //if true
cout<<guess<<" is in the word "<<times<<" times."<<endl;

}
else{       //if false
cout<<endl<<guess<<" isn't in the word ";
life++;   
}  


//showing progress................................................................
cout<<endl<<"progress: "<<arrGuess;

draw(life);
if(life==7){cout<<endl<<"you lost"<<endl;break;}
//if word is guessed
if(arrGuess==wSecret){
cout<<"congrats you won!!!"<<endl<<"The word was: "<<wSecret<<endl;
break;
}


}
}


//list of words and returning a guessed word from the list
string wlist(){
	const int wNumber=100,wLength=20;
	char list[wNumber][wLength]
		= { "apple", "banana", "cherry", "grape", "orange", "strawberry", "blueberry", "kiwi", "watermelon", "pineapple",
			"carrot", "broccoli", "potato", "tomato", "cucumber", "spinach", "lettuce", "pepper", "onion", "garlic",
			"cat", "dog", "bird", "elephant", "lion", "tiger", "giraffe", "monkey", "zebra", "penguin",
			"computer", "keyboard", "mouse", "monitor", "printer", "laptop", "tablet", "phone", "headphones", "charger",
			"book", "magazine", "newspaper", "dictionary", "novel", "poetry", "fiction", "biography", "nonfiction", "encyclopedia",
			"football", "basketball", "soccer", "baseball", "hockey", "tennis", "golf", "swimming", "running", "cycling",
			"ocean", "river", "lake", "mountain", "forest", "desert", "jungle", "island", "canyon", "valley",
			"sun", "moon", "star", "planet", "galaxy", "comet", "asteroid", "meteor", "nebula", "satellite",
			"music", "art", "dance", "theater", "film", "photography", "sculpture", "painting", "poetry", "literature",
			"love", "happiness", "friendship", "peace", "freedom", "success", "adventure", "knowledge", "creativity", "wisdom" }	;
			
			srand(time(0));
			int nRand =rand () % 99;
			
			return list[nRand];
}

//Draw function
int draw(int a){
cout<<endl<<"  +---+"<<endl;
switch(a){
case 1: 
	for(int i=1;i<=4;++i)
	cout<<"      |"<<endl;
	
	break;
case 2: 
	cout <<"  0   |"<<endl;for(int i=1;i<=3;++i)
	cout<<"      |"<<endl;
	
	break;
case 3: 
	
	cout<<"  0   |"<<endl
	    <<"  |   |"<<endl;for(int i=1;i<=2;++i)
	cout<<"      |"<<endl;

	break;
case 4: 
	
	cout<<"  0   |"<<endl
	    <<" /|   |"<<endl;for(int i=1;i<=2;++i)
	cout<<"      |"<<endl;

	break;
case 5: 
	
	cout<<"  0   |"<<endl
	    <<" /|\\  |"<<endl;for(int i=1;i<=2;++i)
	cout<<"      |"<<endl;

	break;
case 6: 
	
	cout<<"  0   |"<<endl
	    <<" /|\\  |"<<endl
	    <<" /    |"<<endl;
	cout<<"      |"<<endl;

	break;
case 7: 
	
	cout<<"  0   |"<<endl
	    <<" /|\\  |"<<endl
	    <<" / \\  |"<<endl;
	cout<<"      |"<<endl;

	break;
}
cout<<setw(9)<<setfill('=')<<right<<""<<endl;	
return 0;
		
}		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
