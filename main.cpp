#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include "SpiralMatrixElement.h"
#include "SpiralVector.h"

using namespace std;

void displayVector(vector<int> inputVector)
{
    copy(inputVector.begin(), inputVector.end(), ostream_iterator<int>(cout, " , "));
}

int main()
{
    int inputNumber = 312051;
    SpiralVector spiralVector(inputNumber, false);
    vector<SpiralMatrixElement> spiral = spiralVector.getVector();

    SpiralMatrixElement theInputOne = spiral[spiral.size()-1];
    cout << "Element " << theInputOne.getNumber() << " , x = " << theInputOne.getXCoordinate() << " et y = " << theInputOne.getYCoordinate() << endl;
    cout << "Distance Manhattan : " << theInputOne.getManhattanDistance() << endl;

    return 0;
}
