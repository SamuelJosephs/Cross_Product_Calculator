#include <iostream>
#include <string>
using namespace std;

void print_vector (float vector[3]){

    for (int i = 0; i<3; i++) {
        cout << vector[i] << endl;
    }

    
}

int main() {





    
    float first_vector[3];
    for (int i = 0; i < 3; i++) {
        cout << "What is your " << i+1 <<" vector entry?\n";
        cin >> first_vector[i];
    }
    cout << "Your first vector is:\n";
    print_vector(first_vector);

    float second_vector[3];
    for (int i=0; i<3; i++) {
        cout << "What is your" << i+1 << " vector entry?\n";
        cin >> second_vector[i];
    }
    cout << "Your second vector is:\n";
    print_vector(second_vector);
    
    float cross_product [3] = {
        
        (first_vector[1]*second_vector[2])-(first_vector[2]*second_vector[1]),
        (first_vector[2]*second_vector[0])-(first_vector[0]*second_vector[2]),
        (first_vector[0]*second_vector[1])-(first_vector[1]*second_vector[0])
    
    
    
    
    };
    
    cout << "The cross product of your first and second vector is:\n";
    print_vector(cross_product);




}