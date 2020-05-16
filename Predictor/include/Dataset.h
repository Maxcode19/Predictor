#ifndef DATASET_H_INCLUDED
#define DATASET_H_INCLUDED
#include "Initialization.h"

using namespace std;

class Dataset
{
    public:
        Dataset();
        ~Dataset();
        int compute_exp(int sign, int element1, int element2);
        float compute_num_val(int array[], int dim, int exp);
        void load_dataset(string file_name);
        float get_frame_number(int index);
        float get_pedestrian_ID(int index);
        float get_pos_x(int index);
        float get_pos_z(int index);
        float get_pos_y(int index);
        float get_v_x(int index);
        float get_v_z(int index);
        float get_v_y(int index);
        void print_data(int index);

    private:
        ifstream input_file;
        int number_rows = 8908;
        int number_columns = 8;
        float frame_number[8908];
        float pedestrian_ID[8908];
        float pos_x[8908];
        float pos_z[8908];
        float pos_y[8908];
        float v_x[8908];
        float v_z[8908];
        float v_y[8908];
};

#endif // DATASET_H_INCLUDED