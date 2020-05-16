#ifndef DATASET_HOTEL_H_INCLUDED
#define DATASET_HOTEL_INCLUDED
#include "Initialization.h"
#include "Dataset.h"

using namespace std;

class Dataset_hotel: public Dataset
{
    public:
        Dataset_hotel(string file_name);
        ~Dataset_hotel();

    private:
        ifstream input_file;
        int number_rows = 6544;
        int number_columns = 8;
        int frame_number[6544];
        int pedestrian_ID[6544];
        float pos_x[6544];
        float pos_z[6544];
        float pos_y[6544];
        float v_x[6544];
        float v_z[6544];
        float v_y[6544];
};

#endif // DATASET_HOTEL_H_INCLUDED