#include<iostream>
#include<string>
using namespace std;

class Room {
    private:
        int length;
        int breadth;
        int height;
    public:
        void getRoom() {
            cout << "Enter length, breadth and height of the room: ";
            cin >> length >> breadth >> height;
        }
        void showRoom() {
            cout << "Room Details: " << endl;
            cout << "Length: " << length << " feet" << endl;
            cout << "Breadth: " << breadth << " feet" << endl;
            cout << "Height: " << height << " feet" << endl;
        }
};

class House {
    private:
        string name;
        int floors;
        Room rooms[10];
        int numRooms;
    public:
        void getHouse() {
            cout << "Enter the name of the house: ";
            cin >> name;
            cout << "Enter the number of floors in the house: ";
            cin >> floors;
            cout << "Enter the number of rooms in the house: ";
            cin >> numRooms;
            for(int i=0; i<numRooms; i++) {
                cout << "Enter details for room " << i+1 << endl;
                rooms[i].getRoom();
            }
        }
        void showHouse() {
            cout << "House Details: " << endl;
            cout << "Name: " << name << endl;
            cout << "Floors: " << floors << endl;
          
		    for(int i=0; i<numRooms; i++) 
			{
                cout << "Room " << i+1 << ":" << endl;
                rooms[i].showRoom();
            }
        }
};

int main() 
{
    House h;

    h.getHouse();

    h.showHouse();

    return 0;
}
