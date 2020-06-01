// stock1.h -- Stock class declarations with constrcutors, destructor added

#ifndef STOCK1_H
#define STOCK1_H

class Stock
{
    private:
        char company[30];
        int  shares;
        double share_val;
        double total_val;
        void set_tot() {total_val = shares* share_val;}

    public:
        Stock(); // default constructor declaration
        Stock(const char * co, int n = 0, double pr =0.0);
        ~Stock(); // noisy destructor
        void buy(int num, double price);
        void sell(int num,double price);
        void update(double price);
        void show();

}; // again notice this 

#endif