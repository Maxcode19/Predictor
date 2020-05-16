#include "Initialization.h"
#include "Dataset_eth.h"

using namespace std;



Dataset_eth::Dataset_eth(string file_name):
    Dataset::Dataset()
{
    cout << "Start of the ETH dataset loading from: " << endl;
    cout << endl;
    cout << "\"" << file_name << "\""<< endl;
    cout << "------------------------------------- " << endl;
    cout << endl;
    load_dataset(file_name);
    cout << "Dataset loaded" << endl;
    cout << "------------------------------------- " << endl;
    cout << endl;
}



Dataset_eth::~Dataset_eth()
{
    
}