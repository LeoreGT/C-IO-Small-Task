#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>

using namespace std;
ostream& pLine(ostream& os)
{
  return os << endl << "|--------------------|" << endl;
}

int main()
{
  string person1, person2;
  int id1, id2;
  ostringstream os;
  os.fill(' ');

  cout << "Input a person's name: " << endl;
  cin  >> person1;
  cout << "Input that person's id: " << endl;
  cin  >> id1;
  if(!cin.good())
  {
    cout << "Error : invalid input. Try again." << endl;
    cin  >> id1;
  }

  cout << "Input a person's name: " << endl;
  cin  >> person2;

  cout << "Input that person's id: " << endl;
  cin  >> id2;
  if(!cin.good())
  {
    cout << "Error : invalid input. Try again." << endl;
    cin  >> id2;
  }

  os << pLine;
  os << left << setw(3) << "|" << setw(5) << "ID" << setw(3) << left << "|" << setw(10) << left << "NAME" << left << "|";
  os << pLine;
  os << left << setw(3) << "|" << setw(5) << id1 << setw(3) << left << "|" << setw(10) << left << person1 << left << "|";
  os << pLine;
  os << left << setw(3) << "|" << setw(5) << id2 << setw(3) << left << "|" << setw(10) << left << person2 << left << "|";
  os << pLine;

  cout << os.str() << endl;

}
