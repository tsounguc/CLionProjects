#include <iostream>
#include <fstream>
#include <map>
#include<vector>

using namespace std;
typedef map<string, int> StrIntMap;
struct letter_only:ctype<char>
{
    letter_only(): std::ctype<char>(get_table()) {}

    static std::ctype_base::mask const* get_table()
    {
        static std::vector<std::ctype_base::mask>
                rc(std::ctype<char>::table_size,std::ctype_base::space);

        std::fill(&rc['A'], &rc['z'+1], std::ctype_base::alpha);
        return &rc[0];
    }

};
int main()
{
    StrIntMap  countWords;
    ifstream inFile;
    inFile.imbue(locale(locale(), new letter_only()));
    ofstream outFile;
    string word;

    inFile.open("input.txt");
    outFile.open("output.txt");

    while(inFile>>word)
    {
        for (std::size_t i = 0; word[i]; i++){
            if(std::toupper(word[i])){
                word[i] = std::tolower(word[i]);
            }
        }

        ++countWords[word];
    }
    countWords.erase("a");
    countWords.erase("the");

    for(StrIntMap::iterator p = countWords.begin(); p != countWords.end(); ++p)
    {
        outFile << p -> first << " : " << p -> second << endl;
    }
    inFile.close();
    outFile.close();
    return 0;
}