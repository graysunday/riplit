#include <iostream>
using namespace std;

enum { JOB_DWARF, JOB_WARRIOR, JOB_SORCERER };

struct Chracter {
  int jobType;
};

int main() {
  Chracter c;

  if (c.jobType == JOB_SORCERER) {
    cout << "SORCERER" << endl;
  }
}
