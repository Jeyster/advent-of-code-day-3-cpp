#ifndef SPIRALMATRIXELEMENT_H
#define SPIRALMATRIXELEMENT_H


class SpiralMatrixElement
{
    public:
        SpiralMatrixElement(int number, int xCoordinate, int yCoordinate);
        int getNumber() const;
        int getXCoordinate() const;
        int getYCoordinate() const;
        int getManhattanDistance() const;


    protected:

    private:
        int m_number;
        int m_xCoordinate;
        int m_yCoordinate;
};

#endif // SPIRALMATRIXELEMENT_H
