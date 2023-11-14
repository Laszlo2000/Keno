#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int coin;
int numbers[20];
int mynums[10];
int db_talalat = 0;
int tipus;

//Nev es jatektipus bekerese
void in()
{
    string nev;
    cout << "Add meg a neved: ";
    getline(cin, nev);
    cout << "Udvozlunk a jatekban " <<  nev << "!" << endl;
    cout << "Add meg a jatek tipusat (1-10): ";
    cin >> tipus;
}

//READ TO N
void readton()
{
  int n;
  for(int i=0; i<10; i++)
  {
    cout << "Add meg a szamodat: ";
    cin >> n;
    mynums[i] = n;
  }
  cout << "Az altalad megadott szamok: ";
  for(int i=0; i<10; i++)
  {
    cout << mynums[i] << " ";
  }
  cout << endl;
}

//Egyenleg feltoltes
void coin_upload()
{
    int value = 0;
    cout << "Add meg, hogy mennyi Coint-t szeretnel feltolteni: ";
    cin >> value;
    coin = coin + value;
}

//Ne legyenek duplikalt szamok
int isdup(int size, int arr[], int num)
{
  for(int i=0; i<size; i++)
  {
    if(arr[i] == num)
    {
      return 1;
    }
  }
  return 0;
}

//Sorsolas szamok random generalasa
int numbers_generate()
{
  srand(time(0));
  cout << "A sorsolt szamok: ";
    for (int i = 0; i < 20; i++)
    {
      int rnum = rand() % 20 + 1;
      while(isdup(20, numbers, rnum))
      {
        rnum = rand() % 20 + 1;
      }
      numbers[i] = rnum;
      cout << numbers[i] << " ";
    }
    cout  << endl;
    return 0;
}

//A szamok egyezosegenek vizsgalata
void talalatok()
{
      int getNumbersLength = sizeof(numbers) / sizeof(int);
      int getMynumsLength = sizeof(mynums) / sizeof(int);

      cout << "Az eltalalt szamaid: ";
      for(int j=0; j<getNumbersLength; j++)
      {
        for(int i=0; i<getMynumsLength; i++)
        {
          if(numbers[j] == mynums[i])
          {
            db_talalat++;
            cout << numbers[j] << " ";
          }
        }
      }
      cout << endl;
      cout << "Osszesen " << db_talalat << " talalatod volt." << endl;
}

void nyerotabla()
{
  int matrix[11][10]=
  {
    {1000000,0,0,0,0,0,0,0,0,0},
    {8000,100000,0,0,0,0,0,0,0,0},
    {350,1200,20000,0,0,0,0,0,0,0},
    {30,100,350,5000,0,0,0,0,0,0},
    {3,12,25,60,500,0,0,0,0,0},
    {0,0,0,2,3,10,100,0,0,0},
    {0,0,0,0,0,2,2,15,0,0},
    {0,0,0,0,0,0,0,1,6,0},
    {0,0,0,0,0,0,0,0,0,2},
    {2,2,1,1,1,0,0,0,0,0}
  };
  cout << "A nyeremenyed: " << matrix[10-db_talalat][10-tipus] * coin << " Coin";
}

int main() {
  in();
  coin_upload();
  readton();
  numbers_generate();
  talalatok();
  //cout << "A nyeremenyed: " << nyerotabla() << " Coin";
  nyerotabla();
  return 0;
}