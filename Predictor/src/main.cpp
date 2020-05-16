#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <stdlib.h>
#include <math.h>

#include "Dataset_eth.h"
#include "Dataset_hotel.h"

using namespace std;



int main()
{
    int index1 = 8907;
    int index2 = 6543;

    int max_index1 = 8907;
    int max_index2 = 6543;

    string file_name1 = "/home/utente/Scrivania/Datasets/ewap_dataset_full/ewap_dataset/seq_eth/obsmat.txt";
    string file_name2 = "/home/utente/Scrivania/Datasets/ewap_dataset_full/ewap_dataset/seq_hotel/obsmat.txt";
    
    Dataset_eth eth_dataset(file_name1);
    Dataset_hotel hotel_dataset(file_name2);

    cout << "ETH: " << endl;
    cout << "------------------------------------- " << endl;
    cout << endl;
    eth_dataset.print_data(index1);
    cout << endl;
    cout << "Hotel: " << endl;
    cout << "------------------------------------- " << endl;
    cout << endl;
    hotel_dataset.print_data(index2);

    return 0;
}