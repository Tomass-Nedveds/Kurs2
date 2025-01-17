#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Media{
    public:
        string extension;
        string title;
        int size;
        int age;
        Media(){};
        Media(string ex, string tl, int s, int a): extension(ex), title(tl), size(s), age(a){};
};

    class Vidio : public Media{
        protected:
            int lenght;
            int resolution;
        
        public:
            Vidio(){};
            Vidio(int ln, int rs): lenght(ln), resolution(rs){};

    };
        class Move : public Vidio{

        };

        class Series : public Vidio{

        };

    //Audio
    class Audio : public Media{

    };

            class Music : public Audio{
                protected:

            };

            class Recording : public Audio{

            };

    //Text
    class Text : public Media{
        
    };
        class Book : public Audio{

        };

        class Note : public Audio{

        };

    //Image
    class Image : public Media{


    };

        class Photo : public Image{

        };

        class Meme : public Image{

        };


int main()
{
    string answer;

    Move myMove;
    myMove.title = "Graz";
    myMove.size =  12;

    cout << myMove.title;




    /*cout << "1.Vidio" << endl << "2.Audio" << endl << "3.Text" << endl << "4.Image" << endl;
    cout << endl;
    cout << "Answer: ";
    cin >> answer;
    cout << "---------------" << endl;
    if ("Vidio" == answer){
        cout << "1.Move" << endl << "2.Series" << endl << endl;
        cout << "Answer: ";
        cin >> answer;
    }
    if ("Move" == answer){

    }
    */
return 0;
}
