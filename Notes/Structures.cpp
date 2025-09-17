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

    
};

struct Customer {
    string name;
    int id;
    string email;
};

bool operator== (const Movie& first, const Movie& second ){
        return (first.title == second.title && 
            first.releaseDate.year == second.releaseDate.year && 
            first.releaseDate.month == second.releaseDate.month && 
            first.releaseDate.day == second.releaseDate.day &&
            first.isPopular == second.isPopular
        );
}

ostream& operator<<(ostream& stream, Movie& movie){
    stream << movie.title;
    return stream;
}

void showMOvie(Movie* movie){
    cout << movie -> title;
}


int main(){
    vector<Movie> movies;

    //Movie movie = {"Terminator", 1984};
    movies.push_back({"Terminator", 1984});
    movies.push_back({"Terminator 2", 1987});

    Movie movie1 = {"Terminator", 1984};
    Movie movie2 = {"Terminator 2", 1987};
    showMOvie(&movie1);



    for (auto movie: movies){
        auto [title, releaseYear, isPopular] {movie};
        cout << "Movie Title: " << title << endl;
        cout << "Movie Release Date " << releaseYear.year << endl;
        cout << "Movie Popular " << isPopular << endl;
    }
if(movie1 == movie2){
    cout << movie1 << " is equal" << endl;
}else{
    cout << movie1 << " is not" << movie2 << endl;
}
    

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
    //add == to the end of the name of the function while in strucure
    //