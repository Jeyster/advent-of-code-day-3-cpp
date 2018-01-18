#ifndef SPIRALVECTOR_H
#define SPIRALVECTOR_H

#include "SpiralMatrixElement.h"
#include <vector>

class SpiralVector
{
    public:
        SpiralVector(int inputNumber, bool isSecondStar);
        std::vector<SpiralMatrixElement> getVector() const;

    protected:

    private:
        std::vector<SpiralMatrixElement> m_spiralVector;
};

std::vector<SpiralMatrixElement> buildSpiralVector(int const& length);
std::vector<SpiralMatrixElement> buildSpiralVectorDay2(int const& inputNumber);
int spiralMatrixElements(int const& spiralNumber);
int spiralNumberContaining(int const& number);
void displayVector(std::vector<SpiralMatrixElement> inputVector);

#endif // SPIRALVECTOR_H
