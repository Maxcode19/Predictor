#ifndef DATASET_ETH_H_INCLUDED
#define DATASET_ETH_INCLUDED
#include "Initialization.h"
#include "Dataset.h"

using namespace std;

class Dataset_eth: public Dataset
{
    public:
        Dataset_eth(string file_name);
        ~Dataset_eth();

    private:
        ifstream input_file;
        int number_rows = 8908;
        int number_columns = 8;
        int frame_number[8908];
        int pedestrian_ID[8908];
        float pos_x[8908];
        float pos_z[8908];
        float pos_y[8908];
        float v_x[8908];
        float v_z[8908];
        float v_y[8908];
};

#endif // DATASET_ETH_H_INCLUDED