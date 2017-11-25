#include <iostream>
#include <string>
#include <sstream>

using namespace std;

struct movies_t{
    string title;
    int year;
}mine, yours;

void printmovie(movies_t movie);

int main()
{
    string mystr;

    mine.title = "2001 A Space Odyssey";
    mine.year = 1996;

    cout << "Enter title = ";
    getline(cin,yours.title);
    cout << "Enter year = ";
    getline(cin,mystr);
    stringstream(mystr) >> yours.year;

    cout << "My favorite movie is = ";
    printmovie(mine);
    cout << endl;
    cout << "And yours is = ";
    printmovie(yours);
    return 0;
}

void printmovie(movies_t movie)
{
    cout << movie.title;
    cout <<"("<< movie.year <<")";
}
