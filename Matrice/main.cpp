#include <iostream>
#include <cstdlib>

using namespace std;

void mskalar();
//void mmnozenje();



int main()
{
    int indeks;

    do
    {
        system("CLS");
        cout<<"Program za rad sa matricama"<<endl;
        cout<<"Meni:"<<endl;
        cout<<"1-Mnozenje matrica skalarom"<<endl;
        cout<<"2-Sabiranje dve matrica"<<endl;
        cout<<"3-Mnozenje dve matrice"<<endl;
        cout<<"4-Transponovanje matrice"<<endl;
        cout<<"5-Izlaz"<<endl;
        cout<<"\nOdaberite opciju od 1-5: ";
        cin>>indeks;

        switch(indeks)
        {
            case 1:cout<<"Mnozenje matrica skalarom"<<"\n";mskalar();break;
            case 2:cout<<"Sabiranje dve matrica"<<"\n";break;
            case 3:cout<<"Mnozenje dve matrice"<<"\n";break;
            case 4:cout<<"Transponovanje matrica"<<"\n";break;
            case 5:cout<<"Izlaz"<<"\n";break;
        }
        system("PAUSE");

    }
    while(indeks!=5);
    {

    }
    return 0;
}
