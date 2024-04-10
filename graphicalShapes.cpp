#include<iostream>
using namespace std;

char board;

void Rectangle()
{
    int len, wid;
    cout << "What is your board type? "; cin >> board;
    cout << "Enter rectangle length: "; cin >> len;
    cout << "Enter rectangle width: "; cin >> wid;

    for(int i=0; i<wid+2; i++){cout << board;}         // top of rectangle(rectangle width + 2) => ************
    for(int i=0; i<len; i++)                           // draw rectangle length
        {
        cout << endl << board;                         // first board                          =>  *
        for(int j=0; j<wid; j++){cout << " ";}         // space between two board              =>  *  space
        cout << board;                                 // second board                         =>  *          *
        }
        cout << endl;
    for(int i=0; i<wid+2; i++){cout << board;}       // // bottom of rectangle(rectangle width + 2)
    cout << endl;
}

void Square()
{
    int len;
    cout << "What is your board type? "; cin >> board;
    cout << "Enter square length: "; cin >> len;

    for(int i=0; i<len+2; i++){cout << board;}        // same rectangle logic
    for(int i=0; i<len; i++)
        {
        cout << endl << board;
        for(int j=0; j<len; j++){cout << " ";}
        cout << board;
        }
    cout << endl;
    for(int i=0; i<len+2; i++){cout << board;}
    cout << endl;
}
void equiltriangle()
{
    int b, c=0;      // c counter
    cout << "What is your board type? "; cin >> board;
    cout << "Enter triangle base: "; cin >> b;

    for(int i=0; i<=b; i++){cout << " ";} cout << board << endl;  // (b+1 spaces) + board
    for(int i=1; i<=b; i++)                             // number of lines in the mid(b)
    {
        for(int j=i; j<=b; j++){cout << " ";}          // 1st line j=0(from 0 to b spaces) // 2nd lines j=1(from 1 to b spaces).....
                                                      // => the spaces will decrease each line before the board
        cout << board;                              // (    *)
                                                   //  (   *)
                                                  //   (  *)
        for(int k=0; k<i+c; k++){cout << " ";}      // for print spaces between tow boards, c and i for increase 2 space each line,
                                                   // each of them increase 1 each line so the sum is 2
        cout << board << endl;                    //  (    * *)(   *   *) (  *     *) ( *       *)
        c++;
    }
    for(int i=0; i<(b*2)+3; i++){cout << board;}   // for print the baise
    cout << endl;
}
void Rangletri()
{
    int b, h,c=0, s=0;
    cout << "What is your board type? "; cin >> board;
    cout << "Enter triangle base: "; cin >> b;
    cout << "Enter triangle hight: "; cin >> h;
    for(int i=0; i<=b+1; i++){cout << board;}
    cout << endl;
    for(int i=0; i<h; i++)
    {
        cout << board;
        for(int k=0; k<=i+c; k++){cout << " ";s=k;}
        for(int f=0; f<=b-s-1; f++){cout << board;}
        cout << endl;
        c++;
    }
    for(int i=0; i<=b+1; i++){cout << board;}
    cout << endl;
}


void Rhombus()
{
    int len, c=1;
    cout << "What is your board type? "; cin >> board;
    cout << "Enter rhombus length: "; cin >> len;

    // print the top
    for(int i=0; i<=len; i++){cout << " ";}
    cout << board << endl;


    // print the top part and the mid
    for(int k=0; k<len+1; k++)
    {
        for(int i=len; i>k; i--){cout << " ";}
        cout << board;
        for(int i=0; i<c; i++){cout << " ";}
        c+=2;                    // space between board increase
        cout << board << endl;
    }
    c-=2;
    // print the bottom part
    for(int k=0; k<len; k++)
    {
        for(int i=0; i<k+1; i++){cout << " ";}
        cout << board;
        c-=2;                   // space between board increase
        for(int i=0; i<c; i++){cout << " ";}
        cout << board << endl;
    }


    // print the end
    for(int i=0; i<=len; i++){cout << " ";}
    cout << board << endl;
}


int main()
{
    int shape, choise;
    cout << "*Welcome to the Graphical shapes program*\n";
    cout << " 1: rectangle \n 2: square \n 3: equilateral triangle \n 4: right angled triangle \n 5: rhombus \n 6: exit\n";
    while(true)
    {
    cout << "Choose the shape you want to draw or exit: ";cin >> shape;

    if(shape==1)
    {
        Rectangle();
    }
    else if(shape==2)
    {
        Square();
    }
    else if(shape==3)
    {
        equiltriangle();
    }
    else if(shape==4)
    {
        Rangletri();
    }
    else if(shape==5)
    {
        Rhombus();
    }
    else if(shape==6)
    {
        cout << "*Thank you for using our program*\n";
        break;
    }
    else
    {
        cout << "\aInvalid try again!\n\n";  // '\a' The program will emit a sound when an invalid value is entered
        continue;
    }

    cout << " 1)Continue\n 2)Exit\n _";
    cin >> choise;
    if(choise == 1)
        continue;
    else if(choise == 2)
    {
        cout << "*Thank you for using our program*\n";
        break;
    }
    else
        break;
    }

    return 0;
}
