#include "iostream"
using namespace std;

class tile
{
    //to store edge length of square tile
    private:
            int edge_length;
    public:
            tile(int);
            friend class floor;
};

tile::tile(int edge_length)
{
    this->edge_length=edge_length;
}

class floor
{
    //to store length and width of a rectangular floor
    private:
            int length;
            int width;
    public:
            floor(int,int);
            void totaltiles(tile t);
};

floor::floor(int length,int width)
{
    this->length=length;
    this->width=width;
}

void floor::totaltiles(tile t)
{
    int area;
    int nooftiles;
    area=length*width;
    nooftiles=area/(t.edge_length*t.edge_length);
    cout<<nooftiles<<endl;
}

int main()
{
    tile t(3);
    floor floorobj(20,30);
    floorobj.totaltiles(t);
    return 0;
}