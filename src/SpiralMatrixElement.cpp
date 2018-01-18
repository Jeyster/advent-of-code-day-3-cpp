#include "../include/SpiralMatrixElement.h"
#include <cmath>

SpiralMatrixElement::SpiralMatrixElement(int number, int xCoordinate, int yCoordinate) : m_number(number), m_xCoordinate(xCoordinate), m_yCoordinate(yCoordinate)
{
}

int SpiralMatrixElement::getNumber() const
{
    return m_number;
}

int SpiralMatrixElement::getXCoordinate() const
{
    return m_xCoordinate;
}

int SpiralMatrixElement::getYCoordinate() const
{
    return m_yCoordinate;
}

int SpiralMatrixElement::getManhattanDistance() const
{
    return fabs(m_xCoordinate) + fabs(m_yCoordinate);
}
