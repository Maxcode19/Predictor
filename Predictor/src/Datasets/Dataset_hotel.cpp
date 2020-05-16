#include "Initialization.h"
#include "Dataset_hotel.h"

using namespace std;



Dataset_hotel::Dataset_hotel(string file_name):
    Dataset::Dataset()
{
    cout << "Start of the Hotel dataset loading from: " << endl;
    cout << endl;
    cout << "\"" << file_name << "\""<< endl;
    cout << "------------------------------------- " << endl;
    cout << endl;
    load_dataset(file_name);
    cout << "Dataset loaded" << endl;
    cout << "------------------------------------- " << endl;
    cout << endl;
}



Dataset_hotel::~Dataset_hotel()
{
    
}