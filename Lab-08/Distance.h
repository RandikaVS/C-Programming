class Distance{

private:
    int feet;
    float inches;

public:
    Distance();
    Distance(int ft,float in);
    void inputDistance();
    void printDistance();
    void addDistance(Distance d1,Distance d2);
    ~Distance();
};
