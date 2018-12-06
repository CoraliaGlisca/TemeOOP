#include <iostream>
#include <vector>
#include <string>

using namespace std;
//5.6
class Dessert{
public:
    string name;                                                    //from here
    int no_Calories;

    Dessert(int no_calories = 0, string name="Ice cream"){          // constructor that uses inherited classes and calls their constructors
        this->name = name;
        this->no_Calories = no_Calories;
    };

    void setName(string name){
        this->name = name;
    }

    string getName(){
        return this->name;
    }
    void setno_Calories(int no_Calories){
        this->no_Calories = no_Calories;
    }
    int getno_Calories(string name){
        this->no_Calories = no_Calories;                //to here
    }                                                   //copy pasted from temaoop4 and changed the atributes
    void Preparation(){
        cout << "We do yada yada yada ";            //print the preparation method
    }
};

class Cake : public Dessert{
public:
    ingr_vector<string> ingredients;            //declare a vector of strings

    void setIngredients(string ingredients){
        ingredients.push_back(ingredients)      //insert elements in the vector
    }
    void getIngredients(){
        for(int iteration = 0; iteration < ingredients.size(); iteration++)       //access the vector from the beginning to end
            cout << " " << ingredients[iteration];
    }
     void Preparation(string ingredients){
         cout << "Yaba daba doo: " << ingredients;
     }
};

class BdayCake : public Dessert{
public:
    ingr_vector<string> ingredients;            //declare a vector of strings

    void setIngredients(string ingredients){
        ingredients.push_back(ingredients)      //insert elements in the vector
    }
    void getIngredients(){
        for(int iteration = 0; iteration != ingredients.size(); ++iteration)       //access the vector from the beginning to end
            cout<<" " <<ingredients[iteration];
    }
};

class Cupcake : public Cake{
public:
    string shape;
};

int main()
{
    Dessert dessert1;
    cout << endl;
    dessert1.setName("IceCream");
    cout << dessert1.getName() << endl;

    cout << endl;
    dessert1.setno_Calories(323);
    cout << dessert1.getno_Calories() << endl;

    dessert1.Preparation();

    Cake whatev;

    cout << endl;
    whatev.setName("Carpati");
    cout << whatev.getName() << endl;

    whatev.setIngredients("sugar");
    whatev.setIngredients("eggs");
    whatev.setIngredients("chocolate");
    whatev.getIngredients();

    whatev.setno_Calories(543);
    cout << whatev.getno_Calories();

}
