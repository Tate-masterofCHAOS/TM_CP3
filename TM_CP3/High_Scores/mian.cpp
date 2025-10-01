//TM CP3 High scores project

#include <iostream>
#include <limits>
#include <fstream>
#include <iomanip>
#include <vector>
#include <algorithm>

using namespace std;

struct Score{
    string name;
    int score;
    string date;
};



int Show_High_Scores(){
    ifstream ifile;
    ifile.open("scores.csv");
    string line;
    vector<Score> scores;
    if(ifile.is_open()){
        getline(ifile, line);
        while(getline(ifile,line)){
            istringstream iss(line);
            string item;
            
            Score score;
            getline(iss, item, ',');
            score.name = item;

            getline(iss, item, ',');
            score.score = stoi(item);

            getline(iss, item, ',');
            score.date = item;

            scores.push_back(score);
        }
        ifile.close();
        sort(scores.begin(), scores.end(), [](const Score& a, const Score& b) {
            return a.score > b.score;
        });
        for(const Score& i : scores){
        cout << setw(10) << left << i.name
         << setw(10) << i.score
         << setw(12) << i.date << endl;
    }
    return 0;
}
}
int main(){
    while (true) {
    cout << "High Scores: " << endl;
    Show_High_Scores();
    cout << "would you like to add a score or view one or quit?(1/2/3): " ;
    string choice;
    cin >> choice;
    if (choice == "1"){
        ofstream ofile("scores.csv", ios::app);
        ofile.open("scores.csv");
        if(ofile.is_open()){
            string name;
            int score;
            string date;
            cout << "Enter your name: ";
            cin >> name;
            cout << "Enter your score: ";
            cin >> score;
            cout << "Enter the date in yy-mm-dd format with the dashes: ";
            cin >> date;
            ofile << "Name,Score,Date" << endl;
            ofile << name << "," << score << "," << date << endl;
            ofile.close();
            cout << "Score added!" << endl;
        }
        else{
            cout << "Error opening file" << endl;
        }
    if (choice == "2"){
        Show_High_Scores();
    }
    if (choice == "3"){
        break;
    }
}
}
return 0;
}