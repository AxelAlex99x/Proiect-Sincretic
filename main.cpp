#include <iostream>
#include<conio.h>
#include <cstdlib>
#include <time.h>
using namespace std;

void plasare(int tabla[8][8])
{
    int i,c;

    srand(time(NULL));

    for(i=0;i<8;i++)
    {
            c=rand()%8;
            tabla[i][c]=1;
    }

}

int main()
{    
    int tabla[8][8]={0};
    return 0;
}