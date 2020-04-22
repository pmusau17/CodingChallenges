// travel.cpp -- using structures with functions 

#include <iostream>

// define structure
struct travel_time
{
    int hours;
    int minutes;
};

// define constant
const int MINS_PER_HR = 60;

// function prototype 
// input: two travel_time structs
// output: sum of travel_time struct
travel_time sum(travel_time t1, travel_time t2);

// function that shows the time of 
// travel time 
void show_time(travel_time t);

int main()
{
    using namespace std;
    travel_time day1 = {5,45}; // 5 hrs, 45 min
    travel_time day2 = {4,55}; // 4 hrs, 55 min

    travel_time trip = sum(day1,day2);

    cout << "Two-day total: ";
    show_time(trip);

    travel_time day3 = {4,32};
    
    cout << "Three-day total: ";
    show_time(sum(trip,day3));

    return 0;
}

travel_time sum(travel_time t1, travel_time t2)
{
    travel_time total;
    
    total.minutes = (t1.minutes + t2.minutes) % MINS_PER_HR;
    total.hours = (t1.hours+t2.hours) + (t1.minutes+t2.minutes)/ MINS_PER_HR;

    return total;
}

void show_time(travel_time t)
{
    using namespace std;
    cout << t.hours << " hours, ";
    cout << t.minutes << " minutes\n";
}