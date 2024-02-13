#include <iostream>
using namespace std;

int inputDay(int num)
{
    cout << "Enter day (1 to 31): ";

    while (1)
    {
        if (scanf("%d", &num) == 1)
        {
            if (num < 1 || num > 31)
            {
                puts("Invalid input");
            }
            else
            {
                // printf("%s %d", "You entered: ", num);
                break;
            }
        }
        else
        {
            puts("Invalid");
            while (getchar() != '\n')
                ;
        }
    }

    return num;
}

int inputMonth(int num)
{
    cout << "Enter month (1 to 12): ";

    while (1)
    {
        if (scanf("%d", &num) == 1)
        {
            if (num < 1 || num > 12)
            {
                puts("Invalid input");
            }
            else
            {
                // printf("%s %d", "You entered: ", num);
                break;
            }
        }
        else
        {
            puts("Invalid");
            while (getchar() != '\n')
                ;
        }
    }

    return num;
}

int inputYear(int num)
{
    cout << "Enter year: ";

    while (1)
    {
        if (scanf("%d", &num) == 1)
        {
            if (num < 1)
            {
                puts("Invalid input");
            }
            else
            {
                // printf("%s %d", "You entered: ", num);
                break;
            }
        }
        else
        {
            puts("Invalid");
            while (getchar() != '\n')
                ;
        }
    }

    return num;
}

class Date
{
private:
    int day;
    int month;
    int year;

public:
    // setter functions
    void setDay(int x)
    {
        day = x;
    }
    void setMonth(int x)
    {
        month = x;
    }
    void setYear(int x)
    {
        year = x;
    }

    // getter functions
    int getDay() const
    {
        return day;
    }
    int getMonth() const
    {
        return month;
    }
    int getYear() const
    {
        return year;
    }

    void displayDate() const
    {
        cout << "----------------" << endl;
        cout << "Date: ";
        cout << day << "/" << month << "/" << year << endl;
        cout << "----------------" << endl;
    }
};

int main(void)
{
    Date day1;

    int day;
    int month;
    int year;

    cout << "-----------------------------" << endl;
    cout << "Static Date object (only one)" << endl;
    cout << "-----------------------------" << endl;

    day = inputDay(day);
    month = inputMonth(month);
    year = inputYear(year);

    day1.setDay(day);
    day1.setMonth(month);
    day1.setYear(year);

    day1.displayDate();
    cout << endl;

    cout << "--------------------------------" << endl;
    cout << "Dyanmically created Date objects" << endl;
    cout << "--------------------------------" << endl;

    int size;
    cout << "Enter Size of Array: ";
    cin >> size;
    cout << endl;
    Date *arr = new Date[size];
    for (int i = 0; i < size; i++)
    {
        cout << "(" << i + 1 << "):" << endl;
        int arrDay;
        int arrMonth;
        int arrYear;

        arrDay = inputDay(arrDay);
        arrMonth = inputMonth(arrMonth);
        arrYear = inputYear(arrYear);

        arr[i].setDay(arrDay);
        arr[i].setMonth(arrMonth);
        arr[i].setYear(arrYear);

        cout << endl;
    }

    cout << endl;
    cout << "----------------" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Date " << i + 1 << ": " << arr[i].getDay() << "/" << arr[i].getMonth() << "/" << arr[i].getYear() << endl;
    }
    cout << "----------------" << endl;

    delete[] arr;
    // when you dynamically allocate memory for an array using 'new[]', you should deallocate that memory using 'delete[]' to free up the space

    return 0;
}
