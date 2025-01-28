#include <iostream>
#include <string>
#include <random>
#include <vector>
using namespace std;

int rndm(int lower, int upper) {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(lower, upper);

    return dist(gen);
}

class Player {
public:
    string name;
    int uvazenie = true; 
    int hp = 100;
};

class Weapon {
public:
    string name;
    int damage;
    int dps;
    int accuracy;

    Weapon() : damage(0), dps(0), accuracy(0) {}
};

class Onehand : public Weapon {
public:
    Onehand() {

    }
};

class Longsword : public Onehand {
public:
    Longsword() {
        name = "Longsword";
        damage = 15;
        dps = 2;
        accuracy = 80;
    }
};

class Axe : public Onehand {
public:
    Axe() {
        name = "Axe";
        damage = 20; 
        dps = 3;
        accuracy = 70; 
    }
};

class Twohand : public Weapon {
public:
    Twohand() {
    }
};

int main() {
    vector<Player*> character;

    int answer;
    string player_name;

    cout << "Enter player name: ";
    cin >> player_name;

    Player* newPlayer = new Player();
    newPlayer->name = player_name;
    character.push_back(newPlayer);

    cout << "Choose your weapon:\n1. One hand\n2. Two hand\nEnter: ";
    cin >> answer;
    
    return 0;
}
