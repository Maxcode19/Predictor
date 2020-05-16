#include "Initialization.h"
#include "Dataset.h"

using namespace std;



Dataset::Dataset()
{
    /* cout << "Start of the dataset loading from: " << endl;
    cout << endl;
    cout << "\"" << file_name << "\""<< endl;
    cout << "------------------------------------- " << endl;
    cout << endl;
    load_dataset(file_name);
    cout << "Dataset loaded" << endl;
    cout << "------------------------------------- " << endl;
    cout << endl; */
}



Dataset::~Dataset()
{
    
}



int Dataset::compute_exp(int sign, int element1, int element2)
{
    int exp;

    exp = element2;
    exp = element1 * 10 + element2;
    if(sign == -3)
    {
        exp = -exp;
    }
    
    return exp;
}



float Dataset::compute_num_val(int array[], int dim, int exp)
{
    float num_val;
    float add;

    num_val = float(array[1] * pow(10, exp));

    for(int i = 0; i < 7; i++)
    {
        exp = exp - 1;
        add = float(array[i + 3] * pow(10, exp));
        num_val = num_val + add;
    }

    if(array[0] == -3)
    {
        num_val = -num_val;
    }

    return num_val;
}



void Dataset::load_dataset(string file_name)
{
    int exponent;
    float num_value[number_rows][number_columns];

    input_file.open (file_name);

    if(input_file)
    {
        int row = 0;
        string line;

        while(row < number_rows)
        {
            getline(input_file, line);

            stringstream ss(line);
            string number;
            int digit_length = 14;
            int digits[digit_length];

            for(int column = 0; column < number_columns; column++)
            {
                ss >> number;

                for (int j = 0; j < digit_length; j++)
                {
                    if(number[0] == '-')
                    {
                        digits[j] = int(number[j]) - 48;
                    }
                    else
                    {
                        if(j == 0)
                        {
                            digits[0] = -5;
                        }
                        else
                        {
                            digits[j] = int(number[j - 1]) - 48;
                        }
                    }
                }
                exponent = compute_exp(digits[digit_length - 3], digits[digit_length - 2], digits[digit_length - 1]);
                num_value[row][column] = compute_num_val(digits, digit_length, exponent);
            }
            row++;
        }
    }
    else
    {
        cout << "The file can not be opened" << endl;
    }
    
    input_file.close();

    for(int i = 0; i < number_rows; i++)
    {
        frame_number[i] = int(num_value[i][0]);
        pedestrian_ID[i] = int(num_value[i][1]);
        pos_x[i] = num_value[i][2];
        pos_z[i] = num_value[i][3];
        pos_y[i] = num_value[i][4];
        v_x[i] = num_value[i][5];
        v_z[i] = num_value[i][6];
        v_y[i] = num_value[i][7];
    }
}



float Dataset::get_frame_number(int index)
{
    return frame_number[index];
}



float Dataset::get_pedestrian_ID(int index)
{
    return pedestrian_ID[index];
}



float Dataset::get_pos_x(int index)
{
    return pos_x[index];
}



float Dataset::get_pos_z(int index)
{
    return pos_z[index];
}



float Dataset::get_pos_y(int index)
{
    return pos_y[index];
}



float Dataset::get_v_x(int index)
{
    return v_x[index];
}



float Dataset::get_v_z(int index)
{
    return v_z[index];
}



float Dataset::get_v_y(int index)
{
    return v_y[index];
}



void Dataset::print_data(int index)
{
    cout << "Data in row " << (index + 1) << ": " << endl;
    cout << endl;
    cout << fixed << setprecision(7);
    cout << "frame_number: " << get_frame_number(index) << endl;
    cout << "pedestrian_ID: " << get_pedestrian_ID(index) << endl;
    cout << "pos_x: " << get_pos_x(index) << endl;
    cout << "pos_z: " << get_pos_z(index) << endl;
    cout << "pos_y: " << get_pos_y(index) << endl;
    cout << "v_x: " << get_v_x(index) << endl;
    cout << "v_z: " << get_v_z(index) << endl;
    cout << "v_y: " << get_v_y(index) << endl;
    cout << endl;
}