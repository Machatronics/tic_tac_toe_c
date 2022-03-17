#include <iostream>
using namespace std;
char matrix[3][3] = {'1','2','3','4','5','6','7','8','9'};
char player = 'X';
void Draw()
{
    for(int i = 0; i < 3; i++)
    {
        for ( int j = 0 ; j <3;j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

}
void Input()
{
    int a;
    cout << "Press the number of the field:";
    cin >> a ;
    switch(a){
        case 1 : matrix[0][0] = player;
        case 2 : matrix[0][1] = player;
        case 3 : matrix[0][2] = player;
        case 4 : matrix[1][0] = player;
        case 5 : matrix[1][1] = player;
        case 6 : matrix[1][2] = player;
        case 7 : matrix[2][0] = player;
        case 8 : matrix[2][1] = player;
        case 9 : matrix[2][2] = player;
    }
}
void TogglePlayer()
{
    if(player == 'X')
        player = '0';
    else
    player = 'X';

}

int main()
{
    Draw();
    while(1)
    {
        Input();
        Draw();
        TogglePlayer();
        system("pause");
    }
    return 0;
}