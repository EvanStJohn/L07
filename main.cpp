#include <iostream>
#include <vector>

using namespace std;

class StarWars {

};

class Moon {
private:
    struct data_tower {
        int totalAntennas;
        float sendingSignal;
        string message;
    };
public:
    void input(vector<data_tower> *tower);
    void API();
};

class World{

};

void Moon::API()
{
    vector<data_tower> tower, *towerPointer;
    towerPointer = &tower;

    input(towerPointer);
}

void Moon::input(vector<data_tower> *tower)
{
    int input;
    cout << "what is the total of antennas" << endl;
    cin >> input;


}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}