class item{
    int itemCode;
    float unitPrice;
    float discount;

    public:
    item();
    item(int code,float price);
    ~item();
    void setDiscount(float punitPrice);
    float getDiscount();
    float discountedPrice();
    void display();


};
