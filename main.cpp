#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

bool verificare(int tabla[8][8], int c)
{ 
    int i;
    for(i=0;i<8;i++)
    {
        if(tabla[i][c]==1)
            return false;
    }
    return true;
}

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
            while(!verificare(tabla,c))
            {
                c=rand()%8;
            }
            tabla[i][c]=1;
    }

}

void afisare(int tabla[8][8])
{
    char opt;
    int i,j;
    do{
        
        cout<<"Introduceti caracterul 'G' pentru a genera sau 'X' pentru a iesi:"<<endl;
        cin>>opt;
        if(opt=='G')
        {
           
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
    }while(opt!='X');
}

int main()
{    
    int tabla[8][8]={0};
    afisare(tabla);
    return 0;
}