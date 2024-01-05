#include <iostream>
#include<conio.h>
#include <cstdlib>
#include <time.h>
using namespace std;

void resetare(int tabla[8][8])
{
    int i,j;
     for(int i = 0; i < 8; i++)
        for(int j = 0; j < 8; j++)
            tabla[i][j] = 0;
}

void plasare(int tabla[8][8])
{
    int i,c;

    resetare(tabla);

    srand(time(NULL));

    for(i=0;i<8;i++)
    {
            c=rand()%8;
            tabla[i][c]=1;
    }

}

void afisare(int tabla[8][8])
{
    char opt,i,j;
    do{
        
        cout<<"Apasati tasta ENTER pentru a genera sau ESC pentru a iesi:"<<endl;
        opt=_getch();
        if(opt==13){
        plasare(tabla);
            for(i=0;i<8;i++)
                {
                    for(j=0;j<8;j++)
                    {
                        if(tabla[i][j]==1)
                        cout<<'T'<<" ";
                        else
                        cout<<tabla[i][j]<<" ";
                    }
                    cout<<endl; 
                }
        }
    }while(opt!=27);
}

int main()
{    
    int tabla[8][8]={0};
    afisare(tabla);
    return 0;
}