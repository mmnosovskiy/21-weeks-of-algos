#include <fstream>

int main()
{
    std::ifstream fin("input.txt", std::ios::in);
    std::ofstream fout("output.txt", std::ios::out);

    std::string s1, s2, res;
    fin >> s1 >> s2;

    int size1 = s1.size();
    bool second_str[255];
    for (char i : s2)
        second_str[i] = true;
    for (int i = 0; i < size1; ++i)
    {
        if (!second_str[s1[i]])
            res += s1[i];
    }

    if (!res.empty())
        fout << res;
    else
        fout << -1;

    fin.close();
    fout.close();

    return 0;
}