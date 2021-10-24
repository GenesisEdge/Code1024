/*
* Code1024：王琪，2021年10月24日
*/

#include <stdio.h>
#include <windows.h>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <ctime>

using namespace std;

class Code1024
{
public:
    void ShowMeTheCode()
    {
        ReadMnistLabel("MNIST/train-labels.idx1-ubyte", label);
        ReadMnistImage("MNIST/train-images.idx3-ubyte", image_int);
        ImageIntToBool();
        ShowCode1024();
    }

private:
    void ShowCode1024()
    {
        system("cls");
        cout << "#\tCode1024" << endl << endl;
        cout << "##\t王琪设计[POWERED BY WANGQI]" << endl << endl;
        cout << "##\t致敬1024程序员节，代码改变世界！2021年10月24日" << endl << endl;
        cout << "##\t部分支持来自MNIST手写数字数据集" << endl << endl;
        cout << "##\t王琪制作，GitHub地址：https://github.com/GenesisEdge/Code1024" << endl << endl;
        Sleep(4096);
        int i, i1, i2, i3, i4;
        int p, p1, p2, p3, p4;
        for (i1 = 0; i1 < 2; i1++)
        {
            if (i1 == 0)
            {
                for (i2 = 0; i2 < 10; i2++)
                {
                    for (i3 = 0; i3 < 10; i3++)
                    {
                        for (i4 = 0; i4 < 10; i4++)
                        {
                            srand((unsigned)time(NULL));
                            while (p = (int)((rand() * 1.0 / RAND_MAX) * 9999))
                            {
                                if (label[p] == i1)
                                {
                                    p1 = p;
                                    while (p = (int)((rand() * 1.0 / RAND_MAX) * 9999))
                                    {
                                        if (label[p] == i2)
                                        {
                                            p2 = p;
                                            while (p = (int)((rand() * 1.0 / RAND_MAX) * 9999))
                                            {
                                                if (label[p] == i3)
                                                {
                                                    p3 = p;
                                                    while (p = (int)((rand() * 1.0 / RAND_MAX) * 9999))
                                                    {
                                                        if (label[p] == i4)
                                                        {
                                                            p4 = p;

                                                            break;
                                                        }
                                                    }
                                                    break;
                                                }
                                            }
                                            break;
                                        }
                                    }
                                    break;
                                }
                            }
                            system("cls");
                            for (int r = 0; r < n_rows; r++) {
                                for (int c = 0; c < n_cols; c++) {
                                    if (image_bool[p1][r * n_cols + c] == true)
                                    {
                                        cout << "1";
                                    }
                                    else
                                    {
                                        cout << "0";
                                    }
                                }
                                cout << "\t";
                                for (int c = 0; c < n_cols; c++) {
                                    if (image_bool[p2][r * n_cols + c] == true)
                                    {
                                        cout << "1";
                                    }
                                    else
                                    {
                                        cout << "0";
                                    }
                                }
                                cout << "\t";
                                for (int c = 0; c < n_cols; c++) {
                                    if (image_bool[p3][r * n_cols + c] == true)
                                    {
                                        cout << "1";
                                    }
                                    else
                                    {
                                        cout << "0";
                                    }
                                }
                                cout << "\t";
                                for (int c = 0; c < n_cols; c++) {
                                    if (image_bool[p4][r * n_cols + c] == true)
                                    {
                                        cout << "1";
                                    }
                                    else
                                    {
                                        cout << "0";
                                    }
                                }
                                cout << endl;
                            }
                            Sleep(100);
                        }
                    }
                }
            }
            else if (i1 == 1)
            {
                i2 = 0;
                for (i3 = 0; i3 < 3; i3++)
                {
                    if (i3 < 2)
                    {
                        for (i4 = 0; i4 < 10; i4++)
                        {
                            srand((unsigned)time(NULL));
                            while (p = (int)((rand() * 1.0 / RAND_MAX) * 9999))
                            {
                                if (label[p] == i1)
                                {
                                    p1 = p;
                                    while (p = (int)((rand() * 1.0 / RAND_MAX) * 9999))
                                    {
                                        if (label[p] == i2)
                                        {
                                            p2 = p;
                                            while (p = (int)((rand() * 1.0 / RAND_MAX) * 9999))
                                            {
                                                if (label[p] == i3)
                                                {
                                                    p3 = p;
                                                    while (p = (int)((rand() * 1.0 / RAND_MAX) * 9999))
                                                    {
                                                        if (label[p] == i4)
                                                        {
                                                            p4 = p;

                                                            break;
                                                        }
                                                    }
                                                    break;
                                                }
                                            }
                                            break;
                                        }
                                    }
                                    break;
                                }
                            }
                            system("cls");
                            for (int r = 0; r < n_rows; r++) {
                                for (int c = 0; c < n_cols; c++) {
                                    if (image_bool[p1][r * n_cols + c] == true)
                                    {
                                        cout << "1";
                                    }
                                    else
                                    {
                                        cout << "0";
                                    }
                                }
                                cout << "\t";
                                for (int c = 0; c < n_cols; c++) {
                                    if (image_bool[p2][r * n_cols + c] == true)
                                    {
                                        cout << "1";
                                    }
                                    else
                                    {
                                        cout << "0";
                                    }
                                }
                                cout << "\t";
                                for (int c = 0; c < n_cols; c++) {
                                    if (image_bool[p3][r * n_cols + c] == true)
                                    {
                                        cout << "1";
                                    }
                                    else
                                    {
                                        cout << "0";
                                    }
                                }
                                cout << "\t";
                                for (int c = 0; c < n_cols; c++) {
                                    if (image_bool[p4][r * n_cols + c] == true)
                                    {
                                        cout << "1";
                                    }
                                    else
                                    {
                                        cout << "0";
                                    }
                                }
                                cout << endl;
                            }
                            Sleep(100);
                        }
                    }
                    else if (i3 == 2)
                    {
                        for (i4 = 0; i4 < 4; i4++)
                        {
                            srand((unsigned)time(NULL));
                            while (p = (int)((rand() * 1.0 / RAND_MAX) * 9999))
                            {
                                if (label[p] == i1)
                                {
                                    p1 = p;
                                    while (p = (int)((rand() * 1.0 / RAND_MAX) * 9999))
                                    {
                                        if (label[p] == i2)
                                        {
                                            p2 = p;
                                            while (p = (int)((rand() * 1.0 / RAND_MAX) * 9999))
                                            {
                                                if (label[p] == i3)
                                                {
                                                    p3 = p;
                                                    while (p = (int)((rand() * 1.0 / RAND_MAX) * 9999))
                                                    {
                                                        if (label[p] == i4)
                                                        {
                                                            p4 = p;

                                                            break;
                                                        }
                                                    }
                                                    break;
                                                }
                                            }
                                            break;
                                        }
                                    }
                                    break;
                                }
                            }
                            system("cls");
                            for (int r = 0; r < n_rows; r++) {
                                for (int c = 0; c < n_cols; c++) {
                                    if (image_bool[p1][r * n_cols + c] == true)
                                    {
                                        cout << "1";
                                    }
                                    else
                                    {
                                        cout << "0";
                                    }
                                }
                                cout << "\t";
                                for (int c = 0; c < n_cols; c++) {
                                    if (image_bool[p2][r * n_cols + c] == true)
                                    {
                                        cout << "1";
                                    }
                                    else
                                    {
                                        cout << "0";
                                    }
                                }
                                cout << "\t";
                                for (int c = 0; c < n_cols; c++) {
                                    if (image_bool[p3][r * n_cols + c] == true)
                                    {
                                        cout << "1";
                                    }
                                    else
                                    {
                                        cout << "0";
                                    }
                                }
                                cout << "\t";
                                for (int c = 0; c < n_cols; c++) {
                                    if (image_bool[p4][r * n_cols + c] == true)
                                    {
                                        cout << "1";
                                    }
                                    else
                                    {
                                        cout << "0";
                                    }
                                }
                                cout << endl;
                            }
                            Sleep(100);
                        }
                    }
                }
            }
        }
        i1 = 1;
        i2 = 0;
        i3 = 2;
        i4 = 3;
        for (i = 0; i < 3; i++)
        {
            srand((unsigned)time(NULL));
            while (p = (int)((rand() * 1.0 / RAND_MAX) * 9999))
            {
                if (label[p] == i1)
                {
                    p1 = p;
                    while (p = (int)((rand() * 1.0 / RAND_MAX) * 9999))
                    {
                        if (label[p] == i2)
                        {
                            p2 = p;
                            while (p = (int)((rand() * 1.0 / RAND_MAX) * 9999))
                            {
                                if (label[p] == i3)
                                {
                                    p3 = p;
                                    while (p = (int)((rand() * 1.0 / RAND_MAX) * 9999))
                                    {
                                        if (label[p] == i4)
                                        {
                                            p4 = p;

                                            break;
                                        }
                                    }
                                    break;
                                }
                            }
                            break;
                        }
                    }
                    break;
                }
            }
            system("cls");
            Sleep(400);
            for (int r = 0; r < n_rows; r++) {
                for (int c = 0; c < n_cols; c++) {
                    if (image_bool[p1][r * n_cols + c] == true)
                    {
                        cout << "1";
                    }
                    else
                    {
                        cout << "0";
                    }
                }
                cout << "\t";
                for (int c = 0; c < n_cols; c++) {
                    if (image_bool[p2][r * n_cols + c] == true)
                    {
                        cout << "1";
                    }
                    else
                    {
                        cout << "0";
                    }
                }
                cout << "\t";
                for (int c = 0; c < n_cols; c++) {
                    if (image_bool[p3][r * n_cols + c] == true)
                    {
                        cout << "1";
                    }
                    else
                    {
                        cout << "0";
                    }
                }
                cout << "\t";
                for (int c = 0; c < n_cols; c++) {
                    if (image_bool[p4][r * n_cols + c] == true)
                    {
                        cout << "1";
                    }
                    else
                    {
                        cout << "0";
                    }
                }
                cout << endl;
            }
            Sleep(400);
        }
        i1 = 1;
        i2 = 0;
        i3 = 2;
        i4 = 4;
        for (i = 0; i < 7; i++)
        {
            srand((unsigned)time(NULL));
            while (p = (int)((rand() * 1.0 / RAND_MAX) * 9999))
            {
                if (label[p] == i1)
                {
                    p1 = p;
                    while (p = (int)((rand() * 1.0 / RAND_MAX) * 9999))
                    {
                        if (label[p] == i2)
                        {
                            p2 = p;
                            while (p = (int)((rand() * 1.0 / RAND_MAX) * 9999))
                            {
                                if (label[p] == i3)
                                {
                                    p3 = p;
                                    while (p = (int)((rand() * 1.0 / RAND_MAX) * 9999))
                                    {
                                        if (label[p] == i4)
                                        {
                                            p4 = p;

                                            break;
                                        }
                                    }
                                    break;
                                }
                            }
                            break;
                        }
                    }
                    break;
                }
            }
            system("cls");
            Sleep(1600);
            for (int r = 0; r < n_rows; r++) {
                for (int c = 0; c < n_cols; c++) {
                    if (image_bool[p1][r * n_cols + c] == true)
                    {
                        cout << "1";
                    }
                    else
                    {
                        cout << "0";
                    }
                }
                cout << "\t";
                for (int c = 0; c < n_cols; c++) {
                    if (image_bool[p2][r * n_cols + c] == true)
                    {
                        cout << "1";
                    }
                    else
                    {
                        cout << "0";
                    }
                }
                cout << "\t";
                for (int c = 0; c < n_cols; c++) {
                    if (image_bool[p3][r * n_cols + c] == true)
                    {
                        cout << "1";
                    }
                    else
                    {
                        cout << "0";
                    }
                }
                cout << "\t";
                for (int c = 0; c < n_cols; c++) {
                    if (image_bool[p4][r * n_cols + c] == true)
                    {
                        cout << "1";
                    }
                    else
                    {
                        cout << "0";
                    }
                }
                cout << endl;
            }
            Sleep(1600);
        }
        system("cls");
        cout << "#\tCode1024" << endl << endl;
        cout << "##\t王琪设计[POWERED BY WANGQI]" << endl << endl;
        cout << "##\t致敬1024程序员节，代码改变世界！2021年10月24日" << endl << endl;
        cout << "##\t部分支持来自MNIST手写数字数据集" << endl << endl;
        cout << "##\t王琪制作，GitHub地址：https://github.com/GenesisEdge/Code1024" << endl << endl;
        Sleep(4096);
    }

    void ImageIntToBool()
    {
        vector<bool> image_unit;
        for (int i = 0; i < number_of_images; i++) {
            image_unit.clear();
            for (int r = 0; r < n_rows; r++) {
                for (int c = 0; c < n_cols; c++) {
                    if (image_int[i][r * n_cols + c] >= 128)
                    {
                        image_unit.push_back(true);
                    }
                    else
                    {
                        image_unit.push_back(false);
                    }
                }
            }
            image_bool.push_back(image_unit);
        }
    }

    int ReverseIO(int input) {
        unsigned char output_ch1, output_ch2, output_ch3, output_ch4;
        output_ch1 = input & 255;
        output_ch2 = (input >> 8) & 255;
        output_ch3 = (input >> 16) & 255;
        output_ch4 = (input >> 24) & 255;

        return ((int)output_ch1 << 24) + ((int)output_ch2 << 16) + ((int)output_ch3 << 8) + output_ch4;
    }

    void ReadMnistLabel(string filename, vector<int>& labels) {
        ifstream file(filename, ios::binary);
        if (file.is_open()) {
            int magic_number = 0;
            int number_of_images = 0;
            file.read((char*)&magic_number, sizeof(magic_number));
            file.read((char*)&number_of_images, sizeof(number_of_images));
            magic_number = ReverseIO(magic_number);
            number_of_images = ReverseIO(number_of_images);
            unsigned char label_char;
            for (int i = 0; i < number_of_images; i++) {
                label_char = 0;
                file.read((char*)&label_char, sizeof(label_char));
                labels.push_back((int)label_char);
            }

        }
    }

    void ReadMnistImage(string filename, vector<vector<int>>& images) {
        ifstream file(filename, ios::binary);
        if (file.is_open()) {
            int magic_number = 0;
            number_of_images = 0;
            n_rows = 0;
            n_cols = 0;
            file.read((char*)&magic_number, sizeof(magic_number));
            file.read((char*)&number_of_images, sizeof(number_of_images));
            file.read((char*)&n_rows, sizeof(n_rows));
            file.read((char*)&n_cols, sizeof(n_cols));
            magic_number = ReverseIO(magic_number);
            number_of_images = ReverseIO(number_of_images);
            n_rows = ReverseIO(n_rows);
            n_cols = ReverseIO(n_cols);
            vector<int> image_unit;
            for (int i = 0; i < number_of_images; i++) {
                image_unit.clear();
                for (int r = 0; r < n_rows; r++) {
                    for (int c = 0; c < n_cols; c++) {
                        unsigned char image = 0;
                        file.read((char*)&image, sizeof(image));
                        image_unit.push_back((int)image);
                    }
                }
                images.push_back(image_unit);
            }
        }
    }

    vector<int> label;
    vector<vector<int>> image_int;
    vector<vector<bool>> image_bool;
    int n_rows;
    int n_cols;
    int number_of_images;
};

int main()
{
    Code1024 code1024;
    code1024.ShowMeTheCode();

    return 0;
}