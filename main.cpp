#include <iostream>
#include <vector>

using namespace std;



class Moon {
public:
    struct data_tower {
        int totalAntennas;
        float *sendingSignal;
        string message;
    };
    void input(data_tower *tower);
    data_tower API();
};

class World{
public:
    void simulate(Moon::data_tower tower);
};

class StarWars {
public:
    StarWars()
    {
        World world;
        Moon moon;

        world.simulate(moon.API());
    }
};

Moon::data_tower Moon::API()
{
    data_tower tower, *towerPointer;
    towerPointer = &tower;

    input(towerPointer);

    return tower;
}

void Moon::input(data_tower *tower)
{
    cout << "what is the total of antennas" << endl;
    cin >> tower->totalAntennas;
    tower->sendingSignal = new float[tower->totalAntennas];
}

void World::simulate(Moon::data_tower tower)
{
    tower.message = ": Darth Vader is Great";

    for (int i = 0; i < 24; i++)
    {
        cout << "Hour " << i + 1 << endl;

        for (int j = 0; j < tower.totalAntennas; j++)
        {
            cout << "Antenna " << j + 1 << tower.message << endl;
        }

        cout << endl;
    }
}

int main() {
    StarWars starWars;
    return 0;
}