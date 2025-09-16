// TM C++ structures notes

#include <iostream>
#include <string>
#include <vector>

using namespace std;


struct Date{
    short year = 1900;
    short month = 1;
    short day = 1;
};

struct Movie {
    string title;
    Date releaseDate;
    bool isPopular = true;

    bool == (const Movie& movie){
        if (title == movie.title && 
            releaseDate.year == movie.releaseDate.year && 
            releaseDate.month == movie.releaseDate.month && 
            releaseDate.day == movie.releaseDate.day &&
            isPopular == movie.isPopular
        ){
            return true;
        }else{
            return false;
        }
    }
};

struct Customer {
    string name;
    int id;
    string email;
};

int main(){
    vector<Movie> movies;

    //Movie movie = {"Terminator", 1984};
    movies.push_back({"Terminator", 1984});
    movies.push_back({"Terminator 2", 1987});

    Movie movie1 = {"Terminator", 1984};
    Movie movie2 = {"Terminator 2", 1987};



    for (auto movie: movies){
        auto [title, releaseYear, isPopular] {movie};
        cout << "Movie Title: " << title << endl;
        cout << "Movie Release Date " << releaseYear.year << endl;
        cout << "Movie Popular " << isPopular << endl;
    }

    cout << movie1.equals(&movie2) << endl;

    Customer Greg;
    Greg.name = "Greg";
    Greg.id = 123;
    Greg.email = "Greg.george@outlook.com";

    cout << Greg.name << "'s ID is " << Greg.id << " and his email is " << Greg.email << endl;
    
    return 0;
}




//What are structures?
    //A custom data type, an abstract one known as a adt
//How do you build a structure?
    //Struct name {
    
    //};
//What can be held in a structure?
    //Int, String, Bool, Short
//How do you access the information in a structure?
    //object.proprerty
//How do you overload an operator
    //