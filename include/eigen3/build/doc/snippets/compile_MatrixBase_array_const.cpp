#include <Eigen/Dense>
#include <iostream>

using namespace Eigen;
using namespace std;

int main(int, char**)
{
  cout.precision(3);
  Vector3d v(-1,2,-3);
cout << "the absolute values:" << endl << v.array().abs() << endl;
cout << "the absolute values plus one:" << endl << v.array().abs()+1 << endl;
cout << "sum of the squares: " << v.array().square().sum() << endl;

  return 0;
}
