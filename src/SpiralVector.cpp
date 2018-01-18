#include "../include/SpiralVector.h"
#include <iostream>

using namespace std;

SpiralVector::SpiralVector(int inputNumber, bool isSecondStar)
{
    if(isSecondStar)
    {
        m_spiralVector = buildSpiralVectorDay2(inputNumber);
    }
    else
    {
        m_spiralVector = buildSpiralVector(inputNumber);
    }
}


vector<SpiralMatrixElement> SpiralVector::getVector() const
{
    return m_spiralVector;
}

vector<SpiralMatrixElement> buildSpiralVector(int const& length)
{
    vector<SpiralMatrixElement> spiral;
    int spiralNumber = spiralNumberContaining(length);

    spiral.push_back(SpiralMatrixElement(1,0,0));
    int number(2);
    for(int i(1); i <= spiralNumber; i++)
    {
        for(int j(-i+1); j <= i; ++j)
        {
            if(number <= length)
            {
                spiral.push_back(SpiralMatrixElement(number,i,j));
                number++;
            }
        }
        for(int j(i-1); j >= -i; --j)
        {
            if(number <= length)
            {
                spiral.push_back(SpiralMatrixElement(number,j,i));
                number++;
            }
        }
        for(int j(i-1); j >= -i; --j)
        {
            if(number <= length)
            {
                spiral.push_back(SpiralMatrixElement(number,-i,j));
                number++;
            }
        }
        for(int j(-i+1); j <= i; ++j)
        {
            if(number <= length)
            {
                spiral.push_back(SpiralMatrixElement(number,j,-i));
                number++;
            }
        }
    }

    return spiral;
}

vector<SpiralMatrixElement> buildSpiralVectorDay2(int const& inputNumber)
{
    vector<SpiralMatrixElement> spiral;
    int spiralNumber(1);
    spiral.push_back(SpiralMatrixElement(1,0,0));

    int number(0);
    bool isEnd(false);
    while(!isEnd)
    {
        for(int j(-spiralNumber+1); j <= spiralNumber; ++j)
        {
            number = 0;
            vector<SpiralMatrixElement>::iterator it;
            for(it = spiral.begin(); it != spiral.end(); ++it)
            {
                if((it->getXCoordinate() == spiralNumber-1) && (it->getYCoordinate() == j-1))
                {
                    number += it->getNumber();
                }
                if((it->getXCoordinate() == spiralNumber-1) && (it->getYCoordinate() == j))
                {
                    number += it->getNumber();
                }
                if((it->getXCoordinate() == spiralNumber-1) && (it->getYCoordinate() == j+1))
                {
                    number += it->getNumber();
                }
                if((it->getXCoordinate() == spiralNumber) && (it->getYCoordinate() == j+1))
                {
                    number += it->getNumber();
                }
                if((it->getXCoordinate() == spiralNumber+1) && (it->getYCoordinate() == j+1))
                {
                    number += it->getNumber();
                }
                if((it->getXCoordinate() == spiralNumber+1) && (it->getYCoordinate() == j))
                {
                    number += it->getNumber();
                }
                if((it->getXCoordinate() == spiralNumber+1) && (it->getYCoordinate() == j-1))
                {
                    number += it->getNumber();
                }
                if((it->getXCoordinate() == spiralNumber) && (it->getYCoordinate() == j-1))
                {
                    number += it->getNumber();
                }
            }
            spiral.push_back(SpiralMatrixElement(number,spiralNumber,j));

            if(number > inputNumber)
            {
                isEnd = true;
                break;
            }

        }

        if(isEnd)
        {
            break;
        }

        for(int j(spiralNumber-1); j >= -spiralNumber; --j)
        {
            number = 0;
            vector<SpiralMatrixElement>::iterator it;
            for(it = spiral.begin(); it != spiral.end(); ++it)
            {
                if((it->getXCoordinate() == j-1) && (it->getYCoordinate() == spiralNumber-1))
                {
                    number += it->getNumber();
                }
                if((it->getXCoordinate() == j-1) && (it->getYCoordinate() == spiralNumber))
                {
                    number += it->getNumber();
                }
                if((it->getXCoordinate() == j-1) && (it->getYCoordinate() == spiralNumber+1))
                {
                    number += it->getNumber();
                }
                if((it->getXCoordinate() == j) && (it->getYCoordinate() == spiralNumber+1))
                {
                    number += it->getNumber();
                }
                if((it->getXCoordinate() == j+1) && (it->getYCoordinate() == spiralNumber+1))
                {
                    number += it->getNumber();
                }
                if((it->getXCoordinate() == j+1) && (it->getYCoordinate() == spiralNumber))
                {
                    number += it->getNumber();
                }
                if((it->getXCoordinate() == j+1) && (it->getYCoordinate() == spiralNumber-1))
                {
                    number += it->getNumber();
                }
                if((it->getXCoordinate() == j) && (it->getYCoordinate() == spiralNumber-1))
                {
                    number += it->getNumber();
                }
            }
            spiral.push_back(SpiralMatrixElement(number,j,spiralNumber));

            if(number > inputNumber)
            {
                isEnd = true;
                break;
            }
        }

        if(isEnd)
        {
            break;
        }

        for(int j(spiralNumber-1); j >= -spiralNumber; --j)
        {
            number = 0;
            vector<SpiralMatrixElement>::iterator it;
            for(it = spiral.begin(); it != spiral.end(); ++it)
            {
                if((it->getXCoordinate() == -spiralNumber-1) && (it->getYCoordinate() == j-1))
                {
                    number += it->getNumber();
                }
                if((it->getXCoordinate() == -spiralNumber-1) && (it->getYCoordinate() == j))
                {
                    number += it->getNumber();
                }
                if((it->getXCoordinate() == -spiralNumber-1) && (it->getYCoordinate() == j+1))
                {
                    number += it->getNumber();
                }
                if((it->getXCoordinate() == -spiralNumber) && (it->getYCoordinate() == j+1))
                {
                    number += it->getNumber();
                }
                if((it->getXCoordinate() == -spiralNumber+1) && (it->getYCoordinate() == j+1))
                {
                    number += it->getNumber();
                }
                if((it->getXCoordinate() == -spiralNumber+1) && (it->getYCoordinate() == j))
                {
                    number += it->getNumber();
                }
                if((it->getXCoordinate() == -spiralNumber+1) && (it->getYCoordinate() == j-1))
                {
                    number += it->getNumber();
                }
                if((it->getXCoordinate() == -spiralNumber) && (it->getYCoordinate() == j-1))
                {
                    number += it->getNumber();
                }
            }
            spiral.push_back(SpiralMatrixElement(number,-spiralNumber,j));
            if(number > inputNumber)
            {
                isEnd = true;
                break;
            }
        }

        if(isEnd)
        {
            break;
        }

        for(int j(-spiralNumber+1); j <= spiralNumber; ++j)
        {
            number = 0;
            vector<SpiralMatrixElement>::iterator it;
            for(it = spiral.begin(); it != spiral.end(); ++it)
            {
                if((it->getXCoordinate() == j-1) && (it->getYCoordinate() == -spiralNumber-1))
                {
                    number += it->getNumber();
                }
                if((it->getXCoordinate() == j-1) && (it->getYCoordinate() == -spiralNumber))
                {
                    number += it->getNumber();
                }
                if((it->getXCoordinate() == j-1) && (it->getYCoordinate() == -spiralNumber+1))
                {
                    number += it->getNumber();
                }
                if((it->getXCoordinate() == j) && (it->getYCoordinate() == -spiralNumber+1))
                {
                    number += it->getNumber();
                }
                if((it->getXCoordinate() == j+1) && (it->getYCoordinate() == -spiralNumber+1))
                {
                    number += it->getNumber();
                }
                if((it->getXCoordinate() == j+1) && (it->getYCoordinate() == -spiralNumber))
                {
                    number += it->getNumber();
                }
                if((it->getXCoordinate() == j+1) && (it->getYCoordinate() == -spiralNumber-1))
                {
                    number += it->getNumber();
                }
                if((it->getXCoordinate() == j) && (it->getYCoordinate() == -spiralNumber-1))
                {
                    number += it->getNumber();
                }
            }
            spiral.push_back(SpiralMatrixElement(number,j,-spiralNumber));
             if(number > inputNumber)
            {
                isEnd = true;
                break;
            }
        }

        ++spiralNumber;
    }

    return spiral;
}


int spiralMatrixElements(int const& spiralNumber)
{
    int elementsNumber = 1;
    for(int i(0); i <= spiralNumber; ++i)
    {
        elementsNumber += 8 * i;
    }

    return elementsNumber;
}

int spiralNumberContaining(int const& number)
{
    int spiralNumber = 0;
    bool isContaining = false;

    if(number == 1)
    {
        return 0;
    }

    while(!isContaining)
    {
        if((spiralMatrixElements(spiralNumber) < number) && (spiralMatrixElements(spiralNumber+1) >= number))
        {
            isContaining = true;
        }
        ++spiralNumber;
    }

    return spiralNumber;
}

void displayVector(vector<SpiralMatrixElement> inputVector)
{
    vector<SpiralMatrixElement>::iterator it;
    for(it = inputVector.begin(); it != inputVector.end(); ++it)
    {
        cout << "Element " << it->getNumber() << " , x = " << it->getXCoordinate() << " et y = " << it->getYCoordinate() << endl;
    }
}
