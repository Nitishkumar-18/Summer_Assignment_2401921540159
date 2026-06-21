include <iostream>
include <cstdlib>
include <ctime>
using namespace std;
// Abstract Base Class
class Compartment {
public:
Virtual string notice() = 0; // A pure virtual function.
virtual ~Compartment() {}
};
// Derived Classes
class FirstClass: public Compartment {
public:
string notice() override {
First Class: Please maintain silence and ensure everyone's comfort. The input provided is empty and contains no to paraphrase.
}
};
class Ladies: public Compartment {
public:
string notice() override {
return "Ladies Compartment: Reserved for women passengers. ";
}
};
class General: public Compartment {
public:
string notice() override {
General Compartment: Please cooperate with fellow passengers. The input provided is empty and contains no to paraphrase.
}
};
class Luggage: public Compartment {
public:
string notice() override {
return "Luggage Compartment: Goods and luggage only. ";
}
};
int main() {
srand(time(0));
Compartment compartments[10];
// Create random compartments
For (int i = 0; i < 10; i++) {.
Int r = rand() % 4 + 1; // Generates a random integer from 1 to 4.

switch (r) {
case 1:
compartments[i] = new FirstClass();
break;
case 2:
compartments[i] = new Ladies();
break;
case 3:
compartments[i] = new General();
break;
case 4:
compartments[i] = new Luggage();
break;
}
}
// Demonstrate polymorphism
cout << "Notices from Compartments:\n\n";
For (int i = 0; i < 10; i++) {.
Cout << i + 1 << ". ";. << compartments[i]->notice() endl;.
}
// Free memory
For (int i = 0; i 10; i++) {.
delete compartments[i];
}

return 0;
}
