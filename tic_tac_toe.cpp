#include<bits/stdc++.h>
using namespace std;

char ch[9] = {'1','2','3','4','5','6','7','8','9'}; 
int num;
char player1 = {'X'};
char player2 = {'O'};

void draw();
void player_1();
void player_2();
bool X_wins();
bool O_wins();
bool is_draw();

int main()
{
    do{
        draw();
        player_1();
        draw();

        if(X_wins())
        {
            cout<<"\n\n Player 1 WINS!"<<endl;
            break;
        }

        if(is_draw())
        {
            cout<<"Match Draw! Try Again..."<<endl;
            break;
        }

        player_2();
        draw();

        if(O_wins())
        {
             cout<<"\n\n Player 2 WINS!"<<endl;
            break;
        }
        if(is_draw())
        {
            cout<<"Match Draw! Try Again..."<<endl;
            break;
        }

    }while(true);

    return 0;
}
void draw()
{
    system("cls");
    cout<<"=============TIC TAC TOE============"<<endl;
    cout<<"\n\t PLAYER <1>::X\n";
    cout<<"\n\t PLAYER <2>::O\n";
    cout<<endl<<endl;
   
    cout<<"\t\t"<<ch[0]<<"|"<<ch[1]<<"|"<<ch[2]<<"\n";
    cout<<"\t\t---------------"<<endl;

    cout<<"\t\t"<<ch[3]<<"|"<<ch[4]<<"|"<<ch[5]<<"\n";
    cout<<"\t\t---------------"<<endl;
    
    cout<<"\t\t"<<ch[6]<<"|"<<ch[7]<<"|"<<ch[8]<<"\n";
    cout<<"\t\t---------------"<<endl; 
}
void player_1()
{
    cout<<"\t\t Player <1> Enter number: ";
    cin>>num;

    switch(num)
    {
        case 1:
        ch[0]= player1;
        break;
        case 2:
        ch[1]=player1;
        break;
        case 3:
        ch[2]=player1;
        break;
        case 4:
        ch[3]=player1;
        break;
        case 5:
        ch[4]=player1;
        break;
        case 6:
        ch[5]=player1;
        break;
        case 7:
        ch[6]=player1;
        break;
        case 8:
        ch[7]=player1;
        break;
        case 9:
        ch[8]=player1;
        break;
        default:
        cout<<"\t\t\nEnter Number from 1 to 9"<<endl;
        player_1();
        break;
    }
}

void player_2()
{
    cout<<"\t\t Player <2> Enter number: ";
    cin>>num;

    switch(num)
    {
        case 1:
        ch[0]=player2;
        break;
        case 2:
        ch[1]=player2;
        break;
        case 3:
        ch[2]=player2;
        break;
        case 4:
        ch[3]=player2;
        break;
        case 5:
        ch[4]=player2;
        break;
        case 6:
        ch[5]=player2;
        break;
        case 7:
        ch[6]=player2;
        break;
        case 8:
        ch[7]=player2;
        break;
        case 9:
        ch[8]=player2;
        break;
        default:
        cout<<"\t\t\nPlaease Enter Number from 1 to 9"<<endl;
        player_2();
        break;
    }
}

bool X_wins()
{
    if(ch[0] == 'X' && ch[1] == 'X' && ch[2] == 'X') 
    return true;
    else if(ch[3] == 'X' && ch[4] == 'X' && ch[5] == 'X') 
    return true;
    else if(ch[6] == 'X' && ch[7] == 'X' && ch[8] == 'X') 
    return true;
    else if(ch[0] == 'X' && ch[3] == 'X' && ch[6] == 'X') 
    return true;
    else if(ch[1] == 'X' && ch[4] == 'X' && ch[7] == 'X') 
    return true;
    else if(ch[2] == 'X' && ch[5] == 'X' && ch[8] == 'X') 
    return true;
    else if(ch[0] == 'X' && ch[4] == 'X' && ch[8] == 'X') 
    return true;
    else if(ch[2] == 'X' && ch[4] == 'X' && ch[6] == 'X') 
    return true;
    else 
    return false;
}
bool O_wins()
{
    if(ch[0] == 'O' && ch[1] == 'O' && ch[2] == 'O') 
    return true;
    else if(ch[3] == 'O' && ch[4] == 'O' && ch[5] == 'O') 
    return true;
    else if(ch[6] == 'O' && ch[7] == 'O' && ch[8] == 'O') 
    return true;
    else if(ch[0] == 'O' && ch[3] == 'O' && ch[6] == 'O') 
    return true;
    else if(ch[1] == 'O' && ch[4] == 'O' && ch[7] == 'O') 
    return true;
    else if(ch[2] == 'O' && ch[5] == 'O' && ch[8] == 'O') 
    return true;
    else if(ch[0] == 'O' && ch[4] == 'O' && ch[8] == 'O') 
    return true;
    else if(ch[2] == 'O' && ch[4] == 'O' && ch[6] == 'O') 
    return true;
    else 
    return false;
}
bool is_draw()
{
    for (int i=0;i<9;i++)
    {
        if(ch[i] != 'X' && ch[i] != 'O')
        {
            return false;
        }
    }
    return true;
}