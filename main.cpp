#include <iostream>

using namespace std;

int main()
{
   unsigned short pret = 7000;
   const short clima = 500, tractiune = 1000, scauneDePiele = 250, boxe = 125;
   char raspuns;

   cout << "Doriti clima(500euro)?(d/n)" << endl;
   cin >> raspuns;
   if((raspuns == 'd') || (raspuns == 'D'))
    pret = pret + clima;

    cout << "Doriti tractiune(1000euro)?(d/n)" << endl;
   cin >> raspuns;
   if((raspuns == 'd') || (raspuns == 'D'))
    pret = pret + tractiune;

    cout << "Doriti scauneDePiele(250euro)?(d/n)" << endl;
   cin >> raspuns;
   if((raspuns == 'd') || (raspuns == 'D'))
    pret = pret + scauneDePiele;

    cout << "Doriti 8 boxe(125euro)?(d/n)" << endl;
   cin >> raspuns;
   if((raspuns == 'd') || (raspuns == 'D'))
    pret = pret + boxe;
   cout << "Pretul final al masinii este " << pret <<endl;
    return 0;
}
