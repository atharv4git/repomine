#include <iostream>
//GETTERS AND SETTERS
using namespace std;
 
class Movie {

    private:
        string rating;

    public:
        string title;
        string director;
        

        Movie(){
            title = "no title";
            director = "no director";
            rating = "0";
        }

        Movie(string aTitle , string aDirector , string aRating){
            title = aTitle;
            director = aDirector;
            setRating(aRating);
        }

        //making some decency in rating by restricting them
        void setRating(string aRating){
            if(aRating == "G" || aRating == "PG" || aRating == "PG-13" || aRating == "R" || aRating == "NR"){
                rating = aRating;
            }
            else{
                rating = "NR";            }
        }

        //accessing / returning rating
        string getRating(){
            return rating;
        }
};

int main(){

    Movie movie1("The avengers","Joss Whedon","PG-13");
    movie1.setRating("Dog");//this will be turned into "NR"

    cout << movie1.getRating() << endl;

    return 0;
}