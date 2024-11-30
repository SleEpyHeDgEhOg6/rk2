#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void saMat(const string& filename,const std::vector<std::vector<int>>& ma){
    std::ofstream f(filename);
    int N=ma.size();//количество столбцов
    int M=ma[0].size();//количество строк 
    f << N << " " << M << std::endl;
    for (auto r : ma) {
        for (int v : r) {
            f << v << " "; 
        }
           f << std::endl; 
    }
    f.close();   
}

void outMa(const string& filename){
    std::ofstream f1(filename);
    int N=0;//переменная для количества столбцов 
    int M=0;//переменная для количества строк 
    std::vector<std::vector<int>> mat(N, std::vector<int>(M)); // Создаем матрицу
    f1<<N<<M;//считываем размеры матрицы 
    for (int i = 0; i < N; ++i) {
        for (int y = 0; y < M; ++y) {
            f1<<mat[i][y];
        }
    }
    f1.close();
}

int main1(){//для saMat
    std::vector<std::vector<int>> mat1 ={
        {7,8,9},
        {4,5,6},
        {1,2,3},
        {7,5,6}
    };
    std::ofstream gh;
    gh.open("");
    saMat("",mat1);
    gh.close();
    return 0;    
}

int main2(){//для outMa
    std::vector<std::vector<int>> mat2;
    std::ofstream fg;
    fg.open("");
    outMa("");
    fg.close();
    return 0;
}
