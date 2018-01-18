#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include "include/SpiralMatrixElement.h"
#include "include/SpiralVector.h"

using namespace std;

void displayVector(vector<int> inputVector)
{
    copy(inputVector.begin(), inputVector.end(), ostream_iterator<int>(cout, " , "));
}

int main()
{
    int inputNumber = 312051;

    /* !!! PART 1 !!! */
    cout << "!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
    cout << "!!!!!!!! PART 1 !!!!!!!!" << endl;
    cout << "!!!!!!!!!!!!!!!!!!!!!!!!" << endl << endl;

    SpiralVector spiralVector(inputNumber, false);
    vector<SpiralMatrixElement> spiral = spiralVector.getVector();

    SpiralMatrixElement theInputOne = spiral[spiral.size()-1];
    cout << "Element " << theInputOne.getNumber() << " , x = " << theInputOne.getXCoordinate() << " et y = " << theInputOne.getYCoordinate() << endl;
    cout << "Distance Manhattan : " << theInputOne.getManhattanDistance() << endl << endl << endl;


    /* !!! PART 2 !!! */
    cout << "!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
    cout << "!!!!!!!! PART 2 !!!!!!!!" << endl;
    cout << "!!!!!!!!!!!!!!!!!!!!!!!!" << endl << endl;

    SpiralVector spiralVector2(inputNumber, true);
    vector<SpiralMatrixElement> spiral2 = spiralVector2.getVector();
    SpiralMatrixElement result = spiral2[spiral2.size()-1];
    cout << "Element " << result.getNumber() << " , x = " << result.getXCoordinate() << " et y = " << result.getYCoordinate() << endl;


    return 0;
}
