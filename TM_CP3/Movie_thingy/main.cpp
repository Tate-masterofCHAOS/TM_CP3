//TM CP3 movie project

#include <iostream>
#include <filesystem>
#include <limits>
#include <fstream>
#include <iomanip>
#include <vector>
#include <algorithm>

using namespace std;

struct Movie{
    string name;
    string director;
    string year;
    string genre;
    string rating;
};

namespace fs = std::filesystem;

int Search_Movies(){
    cout << "Do you want to search by (1)name, (2)director, (3)year, (4)genre, (5)rating: ";
    int choice;
    cin >> choice;
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear input buffer

    cout << "Enter your search term: ";
    string search_term;
    getline(cin, search_term);

    ifstream ifile("movies.csv");
    string line;
    vector<Movie> movies;
    if(ifile.is_open()){
        getline(ifile, line); // Skip header if present
        while(getline(ifile,line)){
            istringstream iss(line);
            string item;
            Movie movie;
            getline(iss, item, ','); movie.name = item;
            getline(iss, item, ','); movie.director = item;
            getline(iss, item, ','); movie.year = item;
            getline(iss, item, ','); movie.genre = item;
            getline(iss, item, ','); movie.rating = item;
            movies.push_back(movie);
        }
        ifile.close();

        cout << "Search results:\n";
        for(const Movie& i : movies){
            bool match = false;
            switch(choice) {
                case 1: match = (i.name == search_term); break;
                case 2: match = (i.director == search_term); break;
                case 3: match = (i.year == search_term); break;
                case 4: match = (i.genre == search_term); break;
                case 5: match = (i.rating == search_term); break;
                default: cout << "Invalid choice.\n"; return 0;
            }
            if(match) {
                cout << i.name << " " << i.director << " " << i.year << " " << i.genre << " " << i.rating << endl;
            }
        }
    }
    else {
        cout << "Error opening file" << endl;
    }
    return 0;
}

enum options{
    add = 1,
    search,
    quit,
};

int main(){
    while (true) {
    cout << "would you like to add a Movie, search for one or quit?(1/2/3): " ;
    int choice;
    cin >> choice;
    if (choice == options::add){
        ofstream ofile("movies.csv", ios::app);
        cout << "Current working directory: " << fs::current_path() << endl;
        cout << "Attempting to open: " << fs::absolute("movies.csv") << endl;

        if(ofile.is_open()){
            string name;
            string director;
            string year;
            string genre;
            string rating;
            cout << "Enter the name: ";
            cin >> name;
            cout << "Enter the director's name: ";
            cin >> director;
            cout << "Enter the year of release: ";
            cin >> year;
            cout << "Enter the genre: ";
            cin >> genre;
            cout << "Enter the rating: ";
            cin >> rating;
            ofile << name << "," << director << "," << year << "," << genre << "," << rating << endl;
            ofile.close();
            cout << "Movie added added!" << endl;

        }
        else{
            cout << "Error opening file" << endl;
        }
    }
    else if (choice == options::search){
        Search_Movies();
    }
    else if (choice == options::quit){
        break;
    }
}
    return 0;
}
