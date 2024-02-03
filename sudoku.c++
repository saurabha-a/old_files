#include <iostream>
#include <vector>

/*bool isSafe(int grid[][])
{

}*/

int main()
{
    int num_row = 2, num_col = 3;
    std::vector<std::vector<int>> sample_space(num_row, std::vector<int>(num_col, 0));
    std::cout << "enter rows and columms elements & enter '0' where blank space is given" << std::endl;
    std::vector<std::vector<int>>:: iterator row;
    std::vector<int>::iterator col;
    for(row = sample_space.begin(); row != sample_space.end(); row++)
    {
        for(col = row->begin(); col!= row->end(); col++)
        {
            std::cin >> *col;
        }
    }
    return 0;
}
