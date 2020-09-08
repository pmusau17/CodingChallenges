//frnd2tmp.cpp -- template class with non-template friends
#include <iostream>


template <typename T>
class HasFriend
{
    private:
        T item;
        static int ct;
    public:
        HasFriend(const T & i): item(i) {ct++;}
        ~HasFriend() {ct--;}
        friend void counts();
        friend void reports(HasFriend<T> & hf); // template parameter

};



// each specialization has its own static data member 
template <typename T>
int HasFriend<T>::ct =0;

// non template friend to all HasFriend<T> classes

void counts()
{
    using std::cout;
    using std::endl;
    cout << "int count: " << HasFriend<int>::ct << ";";
    cout << "double count: " << HasFriend<double>::ct << endl;
}

// non-template friend to the hasFriend<int> class

void reports(HasFriend<int> & hf)
{
    using std::cout;
    using std::endl;
    cout << "HasFriend<int>: " << hf.item << endl;
}

// non-template friend to the HasFriend<double> class 
void reports(HasFriend<double> & hf)
{
    using std::cout;
    using std::endl;
    cout << "HasFriend<double>: " << hf.item << endl;
}

int main()
{
    using std::cout;
    using std::endl;
    cout << "No objects declared: ";
    counts(); 
    HasFriend<int> hfi1(10);
    cout << "after hfi1 declared: ";
    counts();
    HasFriend<int> hfi2(20);
    cout << "after hfi2 declared: ";
    counts();
    HasFriend<double> hfdb(10.5);
    cout << "after hfdb declared: ";
    counts();
    reports(hfi1);
    reports(hfi2);
    reports(hfdb);

    return 0;
}