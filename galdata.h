#ifndef GALDATA_H
#define GALDATA_H

class GalData
{
public:
    GalData();
    int getBlock();
    int getColumn();
    int getRow();
    char getName();
    int getId();
    void setBlock(int b);
    void setColumn(int c);
    void setRow (int r);
    void setName (char* n);
    void setId(int id);

private:
    int block = 0;
    int column = 0;
    int row = 0;
    char* name = "";
    int id = 0;
};

#endif // GALDATA_H
