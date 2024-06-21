#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

class RPSgame{
	
	public:
	string playername;
    int totalrounds;
    int playerscore;
    int computerscore;
    int round;
		
    //constructor
    RPSgame() {
        //function for genrate random number
        srand(time(0));
    }
    
	public:
	//get player name
    void getplayername(){
    	
        cout<<"*--*--*--*--*--*--*--*--*--*--*--*--*--*"<<endl;
        cout<<"                 NAME"<<endl;
        cout<<"*--*--*--*--*--*--*--*--*--*--*--*--*--*"<<endl;
        
        cout<<"Enter Your Name: ";
        cin>>playername;
    }
    
	public:
    //get total rounds
    void gettotalround(){
    	
        cout<<"\n*--*--*--*--*--*--*--*--*--*--*--*--*--*"<<endl;
        cout<<"                 ROUNDS"<<endl;
        cout<<"*--*--*--*--*--*--*--*--*--*--*--*--*--*"<<endl;
        
        cout<<playername<<", how many rounds do you want to play? : ";
        cin>>totalrounds;
    }
	public:
    //play rounds
    void playrounds(){
        for(round=1;round<=totalrounds;round++){
        	
            cout<<"\n*--*--*--*--*--*--*--*--*--*--*--*--*--*"<<endl;
            cout<<"                 GAME"<<endl;
            cout<<"*--*--*--*--*--*--*--*--*--*--*--*--*--*"<<endl;
            
            cout<<"\nRound No: "<<round<<"/"<<totalrounds<<endl;
            cout<<"* "<<playername<<"'s score: "<<playerscore<<endl;
            cout<<"* Computer's score: "<<computerscore<<endl;

            int playerchoice = getplayerchoice();
            int computerchoice = getcomputerchoice();

            displaychoice(playerchoice, computerchoice);
            roundwinner(playerchoice, computerchoice);
        }
    }
    
	public:
    //get player's choice
    int getplayerchoice(){
    	
        int choice;
        
        cout<<"\n1. Rock"<<endl;
        cout<<"2. Paper"<<endl;
        cout<<"3. Scissors"<<endl;
        
        do{	cout<<"\nSelect your choice: ";
            cin>>choice;
        }
		while(choice!=1 && choice!=2 && choice!=3);
    }
    
	public:
    //generate computer's choice
    int getcomputerchoice(){
        return (rand()%3)+1;
    }
    
	public:
	int playerchoice;
	int computerchoice;
	
    //display choices
    void displaychoice(int playerchoice, int computerchoice){
        cout<<"\n"<<playername<<" chose: ";
        switch(playerchoice){
            case 1:
			cout<<"Rock"<<endl;
			break;
			
            case 2:
			cout<<"Paper"<<endl;
			break;
			
            case 3:
			cout<<"Scissors"<<endl;
			break;
        }
        
        cout<<"Computer chose: ";
        switch (computerchoice){
            case 1:
			cout<<"Rock"<<endl;
			break;
			
            case 2:
			cout<<"Paper"<<endl;
			break;
			
            case 3:
			cout<<"Scissors"<<endl;
			break;
        }
    }
	public:
    //winner of a round
    void roundwinner(int playerchoice, int computerchoice){
    	
        if (playerchoice==1 && computerchoice==3 || playerchoice==2 && computerchoice==1 || playerchoice==3 && computerchoice==2){
            cout<<"\n"<<playername<<" wins this round!"<<endl;
            playerscore++;
        }
		else if(playerchoice==computerchoice){
            cout<<"\nIt's a draw!"<<endl;
        }
		else{
            cout<<"\nComputer wins this round!"<<endl;
            computerscore++;
        }
    }
    
	public:
    //display the final score and result of game
    void displayresult(){
    	
        cout<<"\n*--*--*--*--*--*--*--*--*--*--*--*--*--*"<<endl;
        cout<<"                 FINAL SCORE"<<endl;
        cout<<"*--*--*--*--*--*--*--*--*--*--*--*--*--*"<<endl;
        
        cout<<playername<<"'s score: "<<playerscore<<endl;
        cout<<"Computer's score: "<<computerscore<<endl;

        if(playerscore==computerscore){
            cout<<"\nThe game is a draw!"<<endl;
        }
		else if(playerscore>computerscore){
            cout<<"\n "<< playername<<", you won the game!"<<endl;
        }
		else{
            cout<<"\n computer won the game!"<<endl;
        }
    }
};

main(){
	
    //start the game
    RPSgame game;
    game.getplayername();
    game.gettotalround();
    game.playrounds();
    game.displayresult();
    
}

