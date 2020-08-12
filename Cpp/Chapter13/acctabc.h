// acctabc.h -- bank account classes 
#ifndef ACCTABC_H_
#define ACCTABC_H_

// Abstract Base Class
class AcctABC
{
    private:
        enum {MAX = 35};
        char fullName[MAX];
        long acctNum;
        double balance;

    protected:
        const char * FullName() const {return fullName};
        long AcctNum() const {return acctNum;}
        std::ios_base::fmtflags SetFormat() const;
    public:
        AcctABC(const char *s = "Nullbody", long an = -1, double bal = 0.0);
        void Deposit(double amt);
        virtual void Withdraw(double amt) = 0; // pure virtual function 
        double Balance() const {return balance;}
        virtual void ViewAcct() const =0; // pure virtual function 
        virtual ~AcctABC() {}
};

// Brass Account Class 
class