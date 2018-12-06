#include <iostream>
#include <string>

using namespace std;

class Mecanism{
public:
    string Mname;
    int power;

    Mecanism(string name = "Mac", int power = 12){
        this -> Mname = name;
        this -> power = power;
    };
    void setMName(string name){
        this -> Mname = name;
    }
    string getMName(){
        return this -> Mname;
    }
    void setPower(int power){
        this -> power = power;
    }
    int getPower(){
        return this -> power;
    }
};

class MasinaDeCalcul{
public:
    string MCname;
    int speed;

    MasinaDeCalcul(string name = "Auch", int speed = 103){
        this -> MCname = name;
        this -> speed = speed;
    };
    void setName(string name){
        this -> MCname = name;
    }
    string getName(){
        return this -> MCname;
    }
    void setSpeed(int power){
        this -> speed = speed;
    }
    int getSpeed(){
        return this -> speed;
    }
};

class Computer : public MasinaDeCalcul{
public:
    string ComputerName;

     Computer(string name = "Computercv"){
        this -> ComputerName = name;
    };
    void setCName(string name){
        this -> ComputerName = name;
    }
    string getCName(){
        return this -> ComputerName;
    }
};

class Robot : public Mecanism, public Computer{
public:
    string RobotName;

     Robot(string name = "Rrrrobot"){
        this -> RobotName = name;
    };
    void setRName(string name){
        this -> RobotName = name;
    }
    string getName(){
        return this -> RobotName;
    }
};

int main()
{
    Robot agh;
    agh.setMName("RobotRock");              //attribute from class Mecanism
    cout << agh.getMName() << endl;

    agh.setSpeed(234);                      //attribute from class MasinaDeCalcul
    cout << agh.getSpeed() << endl;

    agh.setCName("Asus");                   //attribute from class Computer
    cout  << agh.getCName() << endl;
}
