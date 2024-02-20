#include <iostream>
#include <cstring>
#include <ctime>
#include <cstdlib>
#include <fstream>
#include <windows.h>
#include <unistd.h>
using namespace std;
void gotoxy(int x, int y)
{
    COORD coord; // coordinates of screen
    coord.X = x;
    coord.Y = y;                                                      // set value of x and y coordinates
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // take cursor to that position
}
void logo()
{
    cout
        << "_____________________________________________________________________________________________________________________________________________\n"
        << "|                                                                                                                                           |\n"
        << "|                                                                                                                                           |\n"
        << "|                                                                                                                                           |\n"
        << "|          *******                                                                                                                          |\n"
        << "|         *********                                                                                                                         |\n"
        << "|        **       **                                                       **                                                               |\n"
        << "|        **                                                                **                                                               |\n"
        << "|         **                                                               **                                                               |\n"
        << "|           *******     **       **   ****   **       **  ********         **          ****    *******     *******    ********   *******    |\n"
        << "|             ******    **       **  **  **  **     **    **               **         **  **   **    **    **    **   **         ***   **   |\n"
        << "|                  **   ** *     ** **    ** **   **      **               **        **    **  **     **   **     **  **         **     **  |\n"
        << "|                   **  **  *    ** **    ** ** **        ********         **        ********  **      **  **      ** ********   **    **   |\n"
        << "|                    ** **   *   ** ******** *****        **               **        ********  **      **  **      ** **         ******     |\n"
        << "|         **         ** **    *  ** ******** **  **       **               **        **     ** **     **   **     **  **         **    **   |\n"
        << "|          **       **  **     * ** **    ** **    **     ********         ********* **     ** **    **    **    **   ********   **     **  |\n"
        << "|           *********   **      *** **    ** **      **   ********         ********* **     ** *******     *******    ********   **      ** |\n"
        << "|                                                                                                                                           |\n"
        << "|                                                                                                                                           |\n"
        << "|                                                                                                                                           |\n"
        << "|                  **         **           **       ************                                                                            |\n"
        << "|                 **         **             **    **   *      **                    ***********************                                 |\n"
        << "|                **         **               *****   *   *    **                  *             *          * *                              |\n"
        << "|               **         **                 ***      *      **                 *           *            *   *                             |\n"
        << "|              *************               **    *******      **                *          *             *     *                            |\n"
        << "|             **         **              **             **    **               *         ******         *       *                           |\n"
        << "|            **         **                              **    **              *         *     *        *         *                          |\n"
        << "|           **         **               *               **    **             *          *    *        *           *                         |\n"
        << "|          *************              * *               **    **            *           *****        *     *       *                        |\n"
        << "|         **         **              * *                **    **           *                        *      * *      *                       |\n"
        << "|        **         **             ** **                **    **          **************************       *  * *    *                      |\n"
        << "|       **         **             **  **       **********     **          *                         *          *    *                       |\n"
        << "|      *************             **   **     **               **           *          *              *        *    *                        |\n"
        << "|     **         **              **    **   **                **            *          *   *          *           *                         |\n"
        << "|    **         **               **      ****    *******      **             *          *****          *         *                          |\n"
        << "|   **         **                **             **      **    **              *              *          *       *                           |\n"
        << "|                                **           **        **    **               *              *          *     *                            |\n"
        << "|                                 ************          *******                 *                         *   *                             |\n"
        << "|                                                                                ****************************                               |\n"
        << "|                                                                                                                                           |\n"
        << "|___________________________________________________________________________________________________________________________________________|\n";
}

void removeAnimation()
{
    system("pause>0");
    for (int i = 0; i < 80; i++)
    {
        for (int j = 0; j < 45; j++)
        {
            gotoxy(i, j);
            cout << ' ';
            gotoxy(159 - i, 44 - j);
            cout << ' ';
        }
        Sleep(30);
    }
}

void play1();
void board();
int roll();
void checklocation(int &p1, int &p2, int s1, int s2, int s3, int l1, int l2, int l3);
void instruction();
void game();
void login();
void Register();
void forgot();
// declaration of arrays for board
string player1[100];
string computer[100];
string arr[3000];
int main()
{
    // main function for login and regiestration pages
    logo();
    removeAnimation();
    Sleep(2000);
    system("color 4F");
    gotoxy(50, 6);
    cout << "----- MENU -----";
    gotoxy(0, 0);
    int option;
    gotoxy(22, 9);
    cout << "1.LOGIN";
    gotoxy(22, 11);
    cout << "2.REGIESTER";
    gotoxy(22, 13);
    cout << "3.FORGOT USERNAME OR PASSWORD";
    gotoxy(22, 15);
    cout << "4.QUIT";
    gotoxy(22, 17);
    cout << "Enter option:";
    cin >> option;
    switch (option)
    {
    case 1:
        login();
        break;
    case 2:
        Register();
        break;
    case 3:
        forgot();
        break;
    case 4:
        return 0;
        break;
    default:
        gotoxy(22, 11);
        cout << "Wrong option" << endl;
        break;
    }

    return 0;
}

// game function for game purpose
void game()
{
    int option;
    system("color 4F");
    gotoxy(50, 6);
    cout << "----- GAME -----";
    gotoxy(22, 9);
    cout << "1.PLAY" << endl;
    gotoxy(22, 11);
    cout << "2.ABOUT GAME" << endl;
    gotoxy(22, 13);
    cout << "3.Main Menu" << endl;
    gotoxy(22, 17);
    cout << "Choose Option:";
    cin >> option;

    switch (option)
    {
    case 1:
        system("cls");
        play1();
        break;
    case 2:
        instruction();
        break;
    case 3:
        system("cls");
        main();
        break;
    default:
        cout << "Wrong Option" << endl;
        sleep(3);
        system("cls");
        break;
    }
    // Register page
}
void Register()
{
    system("CLS");
    system("color 8F");
    gotoxy(45, 6);
    cout << "----- REGISTRATION -----";
    int q = 0;
    string regname, regpass, suser, spass;
    gotoxy(22, 9);
    cout << "Enter username :";
    cin >> regname;
    gotoxy(22, 11);
    cout << "Enter userpassword :";
    cin >> regpass;
    ifstream lookuser;
    // read form
    lookuser.open("file1.txt");
    if (lookuser.is_open())
    {
        while (lookuser >> suser >> spass)
        {
            // condition to check if user is already regiestered
            if (suser == regname || spass == regpass)
            {
                q = 1;
                break;
            }
        }
        lookuser.close();
    }
    if (q == 1)
    {
        gotoxy(22, 13);
        cout << "Already have account" << endl;
        cin.get();
        cin.get();
        system("cls");
        main();
    }
    // register page for new user
    // write form
    fstream myfile;
    myfile.open("file1.txt", ios::app);
    if (myfile.is_open())
    {
        myfile << regname << ' ' << regpass << endl;
        myfile.close();
    }
    gotoxy(22, 13);
    cout << "Register Successsfully" << endl;
    sleep(3);
    system("cls");
    game();
}
// login form
void login()
{
    system("cls");
    system("color 3F");
    gotoxy(50, 6);
    cout << "----- LOGIN -----";

    int x = 0;
    string user, password, us, pa;

    gotoxy(22, 9);
    cout << "Enter username :";
    cin >> user;
    gotoxy(22, 11);
    cout << "Enter userpassword :";
    cin >> password;
    ifstream file;
    file.open("file1.txt", ios::in);
    if (file.is_open())
    {
        // to check user is register
        while (file >> us >> pa)
        {
            if (us == user && pa == password)
            {
                x = 1;
                break;
            }
        }
        file.close();
    }
    if (x == 1)
    {
        gotoxy(20, 15);
        cout << "Welcome again " << user << endl;
        cin.get();
        sleep(3);
        system("cls");
        game();
    }
    // user is not register
    else
    {
        gotoxy(22, 19);
        cout << "Wrong Information" << endl;
        cin.get();
        cin.get();
        system("cls");
        main();
    }
}
// if user forgets password or username
void forgot()
{
    system("CLS");
    system("color 9F");
    gotoxy(45, 6);
    cout << "----- FORGOT -----";
    int choice;
    gotoxy(22, 9);
    cout << "1.Search by username" << endl;
    gotoxy(22, 11);
    cout << "2.Search by password" << endl;
    gotoxy(22, 13);
    cout << "3.Main Menu" << endl;
    gotoxy(22, 15);
    cout << "Enter option:";
    cin >> choice;
    system("cls");
    gotoxy(45, 6);
    cout << "----- Enter Details -----";
    switch (choice)
    {
    case 1:
    {
        system("cls");
        int q = 0;
        string searchuser, suser, spass;
        gotoxy(22, 9);
        cout << "Enter username you know" << endl;
        gotoxy(22, 11);
        cin >> searchuser;
        ifstream lookuser;
        lookuser.open("file1.txt");
        if (lookuser.is_open())
        {
            while (lookuser >> suser >> spass)
            {
                if (suser == searchuser)
                {
                    q = 1;
                    break;
                }
            }
            lookuser.close();
        }
        if (q == 1)
        {
            // password
            gotoxy(20, 15);
            cout << "Account found and password is " << spass << endl;
            cin.get();
            cin.get();
            sleep(3);
            system("cls");
            main();
        }
        else
        {
            // user is not in data
            gotoxy(22, 17);
            cout << "Account not found" << endl;
            cin.get();
            sleep(3);
            system("cls");
            main();
        }
        break;
    }
    case 2:
    {
        system("cls");
        int p = 0;
        string searchuser1, suser1, spass1;
        gotoxy(22, 9);
        cout << "Enter password you know" << endl;
        gotoxy(22, 11);
        cin >> searchuser1;
        ifstream lookUser1;
        lookUser1.open("file1.txt");
        if (lookUser1.is_open())
        {
            while (lookUser1 >> suser1 >> spass1)
            {
                if (spass1 == searchuser1)
                {
                    p = 1;
                    break;
                }
            }
            lookUser1.close();
        }
        if (p == 1)
        {
            gotoxy(20, 15);
            cout << "Account found and username is " << suser1 << endl;
            cin.get();
            sleep(5);
            system("cls");
            main();
        }
        else
        {
            // user not in data
            gotoxy(22, 17);
            cout << "Account not found" << endl;
            cin.get();
            sleep(3);
            system("cls");
            main();
        }
        break;
    }
    case 3:
    {
        main();
        sleep(3);
        system("cls");
        break;
    }
    default:
    {
        cout << "Wrong option";
        cin.get();
        sleep(3);
        system("cls");
        forgot();
    }
    }
}
// about game
void instruction()
{
    system("CLS");
    system("color 9F");
    cout << "\t\t\t\t----- INSTRUCTIONS -----\n";
    cout << "There are 3 snakes and 3 Ladders in board" << endl;
    cout << "If you got ladder your position will got Increase" << endl;
    cout << "If you got snake your possition will decrease" << endl;
    cout << "S for snake and L for ladder" << endl;
    cout << "S1 is dangerous and if you got it your position will decrease by 7" << endl;
    cout << "S2 is more dangerous and if you got it your position will decrease by 10" << endl;
    cout << "S3 is most dangerous and if you got it your position will decrease by 15" << endl;
    cout << "L1 is normal and if you got it your position will increase by 4" << endl;
    cout << "L2 is average and if you got it your position will increase by 8" << endl;
    cout << "L3 is powerful and if you got it your position will increase by 12" << endl;
    cout << "r to roll dice" << endl;
    cin.get();
    cin.get();
    sleep(3);
    system("cls");
    game();
}
// game data
void play1()
{
    srand(time(NULL));
    // intializing positions of player1 and computer
    for (int i = 1; i <= 100; i++)
    {
        player1[i] = "  ";
        computer[i] = "  ";
    }
    // intializing array with space
    for (int i = 1; i <= 100; i++)
    {
        arr[i] = "  ";
    }
    // generating random positions for ladders and snakes
    int s1 = rand() % 98 + 11; // between 11 and 98
    int s2 = rand() % 88 + 21; // between 88 and 21
    int s3 = rand() % 76 + 31; // between 76 and 31
    int l1 = rand() % 89 + 9;  // between 89 and 9
    int l2 = rand() % 79 + 7;  // between 79 and 7
    int l3 = rand() % 69 + 5;  // between 69 and 5
    // if snakes and ladder at same positions
    // generating random positions again to snakes and ladders
    while (s1 == l1 && s1 == l2 && s1 == l3 && s2 == l1 && s2 == l2 && s2 == l3 && s3 == l1 && s3 == l2 && s3 == l3)
    {
        s1 = rand() % (98) + 4;
        s2 = rand() % (88) + 3;
        s3 = rand() % (77) + 2;
        l1 = rand() % (89) + 4;
        l2 = rand() % (79) + 3;
        l3 = rand() % (69) + 2;
    }
    // Giving names to Snakes and Ladders
    arr[s1] = "S1";
    arr[s2] = "S2";
    arr[s3] = "S3";
    arr[l1] = "L1";
    arr[l2] = "L2";
    arr[l3] = "L3";
    board();
    int p1 = 0;
    int p2 = 0;
    int r = 0;
    char input;
    while (p1 != 100 || p2 != 100) // Loop runs while player1 or computer got 100 / Wins
    {
        player1[p1] = "  ";
        computer[p2] = "  ";
        do
        {
            cout << "Please Enter r to roll dice: ";
            cin >> input;
        } while (input != 'r');
        if (input == 'r')
        {
            if (p1 > 100)
            {
                p1 = p1;
            }
            else
            {
                r = roll();
                p1 = p1 + r;
                if (p1 > 100) // If by adding position becomes greater than 100 minus the dice numbers
                {
                    p1 = p1 - r;
                }
                cout << "Player 1 got " << r << endl;
                if (r == 6)
                {
                    r = roll();
                    p1 = p1 + r;
                    if (p1 > 100) // Again checking position whether its greater than 100
                    {
                        p1 = p1 - r;
                    }

                    cout << "Player 1 got " << r << " at 2nd turn" << endl;
                    if (r == 6)
                    {
                        r = roll();
                        p1 = p1 + r;
                        if (p1 > 100 && r != 6) // Checking after roll value is not greater than 6 and position of player 1 greater than 100
                        {
                            p1 = p1 - r;
                        }
                        if (r == 6)
                        {
                            p1 = p1 - 18; // Subtract the value player 1 got
                            cout << "Three consecutive 6's which is 0 " << endl;
                        }
                        else
                        {
                            cout << "Player 1 got " << r << " at 3rd turn" << endl;
                        }
                    }
                }
            }
        }
        // same checking for 2nd Player

        if (input == 'r')
        {
            if (p2 > 100)
            {
                p2 = p2;
            }
            else
            {
                r = roll();
                p2 = p2 + r;
                if (p2 > 100) // If by adding position becomes greater than 100 minus the dice numbers
                {
                    p2 = p2 - r;
                }
                cout << "computer got " << r << endl;
                if (r == 6)
                {
                    r = roll();
                    p2 = p2 + r;
                    if (p2 > 100) // Again checking position whether its greater than 100
                    {
                        p2 = p2 - r;
                    }

                    cout << "computer got " << r << " at 2nd turn" << endl;
                    if (r == 6)
                    {
                        r = roll();
                        p2 = p2 + r;
                        if (p2 > 100 && r != 6) // Checking after roll value is not greater than 6 and position of computer greater than 100
                        {
                            p2 = p2 - r;
                        }
                        if (r == 6)
                        {
                            p2 = p2 - 18; // Subtract the value computer got
                            cout << "Three consecutive 6's which is 0 " << endl;
                        }
                        else
                        {
                            cout << "computer got " << r << " at 3rd turn" << endl;
                        }
                    }
                }
            }
        }
        // Assingning players name
        player1[p1] = "P1";
        computer[p2] = "C1";
        board();

        // calling function of checklocation
        checklocation(p1, p2, s1, s2, s3, l1, l2, l3);
        // use of break to stop the game if someone won
        if (p1 == 100 && p2 == 100)
        {
            cout << "DRAW!!";
            break;
        }
        if (p1 == 100)
        {
            cout << "Player 1 Has Won!!!";
            break;
        }
        else if (p2 == 100)
        {
            cout << "computer Has Won!!!";
            break;
        }
    }
}
void board()
{
    system("color 1F");
    sleep(2);
    system("cls");
    cout << " ____________________________________________________________________" << endl;
    cout << "|  "
         << "100  "
         << "|  "
         << "99  "
         << "|  "
         << "98  "
         << "|  "
         << "97  "
         << "|  "
         << "96  "
         << "|  "
         << "95  "
         << "|  "
         << "94  "
         << "|  "
         << "93  "
         << "|  "
         << "92  "
         << "|  "
         << "91  |" << endl;
    cout << "|" << arr[100] << " " << player1[100] << computer[100] << "|" << arr[99] << "" << player1[99] << computer[99] << "|" << arr[98] << "" << player1[98] << computer[98] << "|" << arr[97] << "" << player1[97] << computer[97] << "|" << arr[96] << "" << player1[96] << computer[96] << "|" << arr[95] << "" << player1[95] << computer[95] << "|" << arr[94] << "" << player1[94] << computer[94] << "|" << arr[93] << "" << player1[93] << computer[93] << "|" << arr[92] << "" << player1[92] << computer[92] << "|" << arr[91] << "" << player1[91] << computer[91] << "|";
    cout << endl
         << " ----------------------------------------------------------------------" << endl;
    cout << "|  "
         << "81   "
         << "|  "
         << "82  "
         << "|  "
         << "83  "
         << "|  "
         << "84  "
         << "|  "
         << "85  "
         << "|  "
         << "86  "
         << "|  "
         << "87  "
         << "|  "
         << "88  "
         << "|  "
         << "89  "
         << "|  "
         << "90  |" << endl;
    cout << "|" << arr[81] << " " << player1[81] << computer[81] << "|" << arr[82] << "" << player1[82] << computer[82] << "|" << arr[83] << "" << player1[83] << computer[83] << "|" << arr[84] << "" << player1[84] << computer[84] << "|" << arr[85] << "" << player1[85] << computer[85] << "|" << arr[86] << "" << player1[86] << computer[86] << "|" << arr[87] << "" << player1[87] << computer[87] << "|" << arr[88] << "" << player1[88] << computer[88] << "|" << arr[89] << "" << player1[89] << computer[89] << "|" << arr[90] << "" << player1[90] << computer[90] << "|";
    cout << endl
         << " ----------------------------------------------------------------------" << endl;
    cout << "|  "
         << "80   "
         << "|  "
         << "79  "
         << "|  "
         << "78  "
         << "|  "
         << "77  "
         << "|  "
         << "76  "
         << "|  "
         << "75  "
         << "|  "
         << "74  "
         << "|  "
         << "73  "
         << "|  "
         << "72  "
         << "|  "
         << "71  |" << endl;
    cout << "|" << arr[80] << " " << player1[80] << computer[80] << "|" << arr[79] << "" << player1[79] << computer[79] << "|" << arr[78] << "" << player1[78] << computer[78] << "|" << arr[77] << "" << player1[77] << computer[77] << "|" << arr[76] << "" << player1[76] << computer[76] << "|" << arr[75] << "" << player1[75] << computer[75] << "|" << arr[74] << "" << player1[74] << computer[74] << "|" << arr[73] << "" << player1[73] << computer[73] << "|" << arr[72] << "" << player1[72] << computer[72] << "|" << arr[71] << "" << player1[71] << computer[71] << "|";
    cout << endl
         << " ----------------------------------------------------------------------" << endl;
    cout << "|  "
         << "61   "
         << "|  "
         << "62  "
         << "|  "
         << "63  "
         << "|  "
         << "64  "
         << "|  "
         << "65  "
         << "|  "
         << "66  "
         << "|  "
         << "67  "
         << "|  "
         << "68  "
         << "|  "
         << "69  "
         << "|  "
         << "70  |" << endl;
    cout << "|" << arr[61] << " " << player1[61] << computer[61] << "|" << arr[62] << "" << player1[62] << computer[62] << "|" << arr[63] << "" << player1[63] << computer[63] << "|" << arr[64] << "" << player1[64] << computer[64] << "|" << arr[65] << "" << player1[65] << computer[65] << "|" << arr[66] << "" << player1[66] << computer[66] << "|" << arr[67] << "" << player1[67] << computer[67] << "|" << arr[68] << "" << player1[68] << computer[68] << "|" << arr[69] << "" << player1[69] << computer[69] << "|" << arr[70] << "" << player1[70] << computer[70] << "|";
    cout << endl
         << " ----------------------------------------------------------------------" << endl;
    cout << "|  "
         << "60   "
         << "|  "
         << "59  "
         << "|  "
         << "58  "
         << "|  "
         << "57  "
         << "|  "
         << "56  "
         << "|  "
         << "55  "
         << "|  "
         << "54  "
         << "|  "
         << "53  "
         << "|  "
         << "52  "
         << "|  "
         << "51  |" << endl;
    cout << "|" << arr[60] << " " << player1[60] << computer[60] << "|" << arr[59] << "" << player1[59] << computer[59] << "|" << arr[58] << "" << player1[58] << computer[58] << "|" << arr[57] << "" << player1[57] << computer[57] << "|" << arr[56] << "" << player1[56] << computer[56] << "|" << arr[55] << "" << player1[55] << computer[55] << "|" << arr[54] << "" << player1[54] << computer[54] << "|" << arr[53] << "" << player1[53] << computer[53] << "|" << arr[52] << "" << player1[52] << computer[52] << "|" << arr[51] << "" << player1[51] << computer[51] << "|";
    cout << endl
         << " ----------------------------------------------------------------------" << endl;
    cout << "|  "
         << "41   "
         << "|  "
         << "42  "
         << "|  "
         << "43  "
         << "|  "
         << "44  "
         << "|  "
         << "45  "
         << "|  "
         << "46  "
         << "|  "
         << "47  "
         << "|  "
         << "48  "
         << "|  "
         << "49  "
         << "|  "
         << "50  |" << endl;
    cout << "|" << arr[41] << " " << player1[41] << computer[41] << "|" << arr[42] << "" << player1[42] << computer[42] << "|" << arr[43] << "" << player1[43] << computer[43] << "|" << arr[44] << "" << player1[44] << computer[44] << "|" << arr[45] << "" << player1[45] << computer[45] << "|" << arr[46] << "" << player1[46] << computer[46] << "|" << arr[47] << "" << player1[47] << computer[47] << "|" << arr[48] << "" << player1[48] << computer[48] << "|" << arr[49] << "" << player1[49] << computer[49] << "|" << arr[50] << "" << player1[50] << computer[50] << "|";
    cout << endl
         << " ----------------------------------------------------------------------" << endl;
    cout << "|  "
         << "40   "
         << "|  "
         << "39  "
         << "|  "
         << "38  "
         << "|  "
         << "37  "
         << "|  "
         << "36  "
         << "|  "
         << "35  "
         << "|  "
         << "34  "
         << "|  "
         << "33  "
         << "|  "
         << "32  "
         << "|  "
         << "31  |" << endl;
    cout << "|" << arr[40] << " " << player1[40] << computer[40] << "|" << arr[39] << "" << player1[39] << computer[39] << "|" << arr[38] << "" << player1[38] << computer[38] << "|" << arr[37] << "" << player1[37] << computer[37] << "|" << arr[36] << "" << player1[36] << computer[36] << "|" << arr[35] << "" << player1[35] << computer[35] << "|" << arr[34] << "" << player1[34] << computer[34] << "|" << arr[33] << "" << player1[33] << computer[33] << "|" << arr[32] << "" << player1[32] << computer[32] << "|" << arr[31] << "" << player1[31] << computer[31] << "|";
    cout << endl
         << " ----------------------------------------------------------------------" << endl;
    cout << "|  "
         << "21   "
         << "|  "
         << "22  "
         << "|  "
         << "23  "
         << "|  "
         << "24  "
         << "|  "
         << "25  "
         << "|  "
         << "26  "
         << "|  "
         << "27  "
         << "|  "
         << "28  "
         << "|  "
         << "29  "
         << "|  "
         << "30  |" << endl;
    cout << "|" << arr[21] << " " << player1[21] << computer[21] << "|" << arr[22] << "" << player1[22] << computer[22] << "|" << arr[23] << "" << player1[23] << computer[23] << "|" << arr[24] << "" << player1[24] << computer[24] << "|" << arr[25] << "" << player1[25] << computer[25] << "|" << arr[26] << "" << player1[26] << computer[26] << "|" << arr[27] << "" << player1[27] << computer[27] << "|" << arr[28] << "" << player1[28] << computer[28] << "|" << arr[29] << "" << player1[29] << computer[29] << "|" << arr[30] << "" << player1[30] << computer[30] << "|";
    cout << endl
         << " ----------------------------------------------------------------------" << endl;
    cout << "|  "
         << "20   "
         << "|  "
         << "19  "
         << "|  "
         << "18  "
         << "|  "
         << "17  "
         << "|  "
         << "16  "
         << "|  "
         << "15  "
         << "|  "
         << "14  "
         << "|  "
         << "13  "
         << "|  "
         << "12  "
         << "|  "
         << "11  |" << endl;
    cout << "|" << arr[20] << " " << player1[20] << computer[20] << "|" << arr[19] << "" << player1[19] << computer[19] << "|" << arr[18] << "" << player1[18] << computer[18] << "|" << arr[17] << "" << player1[17] << computer[17] << "|" << arr[16] << "" << player1[16] << computer[16] << "|" << arr[15] << "" << player1[15] << computer[15] << "|" << arr[14] << "" << player1[14] << computer[14] << "|" << arr[13] << "" << player1[13] << computer[13] << "|" << arr[12] << "" << player1[12] << computer[12] << "|" << arr[11] << "" << player1[11] << computer[11] << "|";
    cout << endl
         << " ----------------------------------------------------------------------" << endl;
    cout << "|  "
         << "1    "
         << "|  "
         << "2   "
         << "|  "
         << "3   "
         << "|  "
         << "4   "
         << "|  "
         << "5   "
         << "|  "
         << "6   "
         << "|  "
         << "7   "
         << "|  "
         << "8   "
         << "|  "
         << "9   "
         << "|  "
         << "10  |" << endl;
    cout << "|" << arr[1] << " " << player1[1] << computer[1] << "|" << arr[2] << "" << player1[2] << computer[2] << "|" << arr[3] << "" << player1[3] << computer[3] << "|" << arr[4] << "" << player1[4] << computer[4] << "|" << arr[5] << "" << player1[5] << computer[5] << "|" << arr[6] << "" << player1[6] << computer[6] << "|" << arr[7] << "" << player1[7] << computer[7] << "|" << arr[8] << "" << player1[8] << computer[8] << "|" << arr[9] << "" << player1[9] << computer[9] << "|" << arr[10] << "" << player1[10] << computer[10] << "|";
    cout << endl
         << " ----------------------------------------------------------------------" << endl;
}
// roll function
int roll()
{
    int x;
    x = rand() % (6) + 1;
    return x;
}
// checklocation function //taking refernce values to change the original location
void checklocation(int &p1, int &p2, int s1, int s2, int s3, int l1, int l2, int l3)
{
    int pos1 = 0, pos2 = 0;
    int b = 0;
    if (p1 == s1)
    {
        pos1 = p1;
        p1 = p1 - 7;
        if (p1 < 0)
        {
            p1 = 0;
        }
        cout << "Player 1 got snake at " << pos1 << " and moved to " << p1 << endl;
        b = 1;
    }
    else if (p1 == s2)
    {
        pos1 = p1;
        p1 = p1 - 10;
        if (p1 < 0)
        {
            p1 = 0;
        }
        cout << "Player 1 got snake at " << pos1 << " and moved to" << p1 << endl;
        b = 1;
    }
    else if (p1 == s3)
    {
        pos1 = p1;
        p1 = p1 - 15;
        if (p1 < 0)
        {
            p1 = 0;
        }
        cout << "Player 1 got snake at " << pos1 << " and moved to " << p1 << endl;
        b = 1;
    }
    if (p2 == s1)
    {
        pos2 = p2;
        p2 = p2 - 7;
        if (p2 < 0)
        {
            p2 = 0;
        }
        cout << "computer got snake at " << pos2 << " and moved to " << p2 << endl;
        b = 1;
    }
    else if (p2 == s2)
    {
        pos2 = p2;
        p2 = p2 - 10;
        if (p2 < 0)
        {
            p2 = 0;
        }
        cout << "computer got snake at " << pos2 << " and moved to " << p2 << endl;
        b = 1;
    }
    else if (p2 == s3)
    {
        pos2 = p2;
        p2 = p2 - 15;
        if (p2 < 0)
        {
            p2 = 0;
        }
        cout << "computer got snake at" << pos2 << " and moved to " << p2 << endl;
        b = 1;
    }
    if (p1 == l1)
    {
        pos1 = p1;
        p1 = p1 + 4;
        cout << "Player 1 got  LADDER at " << pos1 << " and moved to " << p1 << endl;
        b = 1;
    }
    else if (p1 == l2)
    {
        pos1 = p1;
        p1 = p1 + 8;
        cout << "Player 1 got  LADDER at " << pos1 << " and moved to " << p1 << endl;
        b = 1;
    }
    else if (p1 == l3)
    {
        pos1 = p1;
        p1 = p1 + 12;
        cout << "Player 1 got LADDER at " << pos1 << " and moved to " << p1 << endl;
        b = 1;
    }
    if (p2 == l1)
    {
        pos2 = p2;
        p2 = p2 + 4;
        cout << "computer got LADDER at " << pos2 << " and moved to " << p2 << endl;
        b = 1;
    }
    else if (p2 == l2)
    {
        pos2 = p2;
        p2 = p2 + 8;
        cout << "computer got LADDER at " << pos2 << " and moved to " << p2 << endl;
        b = 1;
    }
    else if (p2 == l3)
    {
        pos2 = p2;
        p2 = p2 + 12;
        cout << "computer got LADDER at " << pos2 << " and moved to " << p2 << endl;
        b = 1;
    }
    if (b == 1)
    {
        player1[p1] = "P1";
        computer[p2] = "C1";
        player1[pos1] = " ";
        computer[pos2] = " ";
        board();
        roll();
    }
}
