#include<bits/stdc++.h>
#include<cstdlib>
#include<unistd.h>

using namespace std;
const int NUM_PLAYERS = 3;
const int NUM_DELIVERIES = 6;


struct Team
{
    string TeamName;
    string players[NUM_PLAYERS];
    int score;
};

void welcomeUsers() {
    cout << "\t\t\tGULLY CRICKET APP" << endl << endl;
    usleep(400000);
    cout << "\t\t  Welcome to The Cricket World!" << endl; 
    usleep(100000);
    cout << "\t\t\t Play and Win !!!" << endl << endl;
}

void displayPlayers(string playersA[3], string playersB[3]) {

    cout << "Players of Team A: " << endl;
    for (int i = 0; i < NUM_PLAYERS; i++)
    {
        usleep(500000);
        cout << playersA[i] << endl;
    }
    cout << endl<<endl;
    usleep(500000);
    cout << "Players of Team B: " << endl;
    for (int i = 0; i < NUM_PLAYERS; i++)
    {
        usleep(500000);
        cout << playersB[i] << endl;
    }
}

void selectBatsmanAndBowler(Team& batTeam, Team& bowlTeam) {
    int batsmanIndex = rand() % NUM_PLAYERS;
    int bowlerIndex = rand() % NUM_PLAYERS;
    
    cout << "Batsman: " << batTeam.players[batsmanIndex] << endl;
    usleep(500000);
    cout << "Bowler: " << bowlTeam.players[bowlerIndex] << endl;
    cout << endl;
}

void startInning(int inning, string batTeam, string bowlTeam) { 
    cout << "In the Inning " << inning << " : " << endl ; 
    usleep(200000);
    cout <<"The Team  " << batTeam << "  is batting against The Team  " << bowlTeam << endl;
}

int playInning() {

    int runs = 0;
    for (int i = 1; i <= NUM_DELIVERIES; i++)
    {
        int run = (rand() % 7);
        runs += run;
        usleep(1500000);
        cout << "Delivery " << i << " : " << run << endl;
    }
    cout << endl << endl;

    return runs;  
}

void displayScore(Team team){
    cout << "After the inning : The score of team " << team.TeamName << " is ";
    usleep(200000);
    cout << team.score << endl;
}

void decideWinner(int teamAScore, int teamBScore) {
    cout << endl << endl;
    cout << "\t\t\tGULLY CRICKET APP" << endl << endl << endl;
    usleep(200000);
    cout << "\t\t\t FINAL SCORES: " << endl;
    usleep(500000);
    cout << "\t\t\t Team A is: " << teamAScore << endl;
    usleep(100000);
    cout << "\t\t\t Team B is: " << teamBScore << endl;

    cout << endl << endl << endl;

    usleep(1000000);

    if(teamAScore > teamBScore){
        cout << "\t\t\t CONGO !!!!!! " << endl;
        cout << "\t\t\t !!!!!! CONGO" << endl << endl;
        usleep(100000);
        cout << "\t\t    TEAM \"A\" IS THE WINNER" << endl << endl;
    } else if(teamBScore > teamAScore){
        cout << "\t\t\t CONGO !!!!!!" << endl;
        cout << "\t\t\t !!!!!! CONGO" << endl << endl;
        usleep(100000);
        cout << "\t\t     TEAM \"B\" IS THE WINNER" << endl << endl;
    } else {
        cout << "\t\t\t OOPSSSSSSS" << endl;
        cout << "\t\t\t !!!!:::!!!!" << endl << endl;
        usleep(100000);
        cout << "\t\t\t It'S A TIE" << endl << endl;
    }
}


int main(){
    srand(time(0));

    Team A , B;
    A.TeamName = "A";
    B.TeamName = "B";
    string playersA[NUM_PLAYERS] = {"A1", "A2", "A3"};
    string playersB[NUM_PLAYERS] = {"B1", "B2", "B3"};

    for (int i = 0; i < NUM_PLAYERS; i++)
    {
        A.players[i] = playersA[i];
        B.players[i] = playersB[i];
    }
    

    usleep(800000);

    cout << endl << endl;

    welcomeUsers();
    usleep(2000000);
    displayPlayers(playersA, playersB);
    cout << endl << endl;

    usleep(500000);
    system("cls");

    cout << "First Inning: " << endl << endl;
    usleep(2000000);
    selectBatsmanAndBowler(A, B);
    usleep(1000000);
    startInning(1, A.TeamName, B.TeamName);
    cout << endl << endl;
    A.score = playInning();
    usleep(2000000);
    displayScore(A);
    cout << endl<< endl;

    usleep(1000000);

    cout << "Second Inning: " << endl << endl;
    usleep(2000000);
    selectBatsmanAndBowler(B, A);
    usleep(1000000);
    startInning(2, B.TeamName, A.TeamName);
    cout << endl << endl;
    B.score = playInning();
    usleep(2000000);
    displayScore(B);

    usleep(4000000);

    system("cls");

    decideWinner(A.score, B.score);


    return 0;
}