#include <bits/stdc++.h>

using namespace std;

class Mammal
{
public:
  Mammal()
  {
  }
  void view()
  {
    cout << "Mammal" << endl;
  }
};

class WingedAnimal
{
public:
  WingedAnimal()
  {
  }
  void look()
  {
    cout << "WingedAnimal" << endl;
  }
};

class Bat : public Mammal, public WingedAnimal
{
};

int main(int argc, char *argv[])
{
  Bat b1;
  b1.view();
  b1.look();

  return 0;
}
