#include <iostream>
#include <string>
#include <ctype.h>
#include <array>

using namespace std;

string WordSeparator(string eng);
string PrefixFinder(string word, string& pre);
string SuffixFinder(string word, string& suf);
string BackwardWords(string word, string pre, string suf);

int main()
{
    string pre, suf;
    string eng, eng2;
    string altered;
    cout << "English: ";
    cin >> eng;
    getline(cin, eng2);
    eng.append(eng2);
    cout << eng;

    altered = WordSeparator(eng);
    cout << altered;

    return 0;
}


string WordSeparator(string eng)
{
    string altered;
    string word;
    string pre;
    string suf;

    for (int i = 0; i < eng.size(); ++i)
    {
        char letter = eng.at(i);

        if (isalpha(letter))
        {
            letter = tolower(letter);
            word.push_back(letter);
        }
        else
        {
            word = PrefixFinder(word, pre);
            altered.append(word);
            altered.append(pre);
        }
    }


    return altered;
}


string PrefixFinder(string word, string& pre)
{
    string Prefixes[44] = {"an", "a", "ante", "anti", "auto", "circum", "com", "con", "co", "contra", "contro", "de", "dis", "en", "extra", "ex", "hetero", "homo", "homeo", "hyper", "il", "im", "inter", "ir", "intra", "in", "intro", "macro", "micro", "mono", "ono", "omni", "post", "pre", "pro", "sub", "sym", "syn", "tele", "trans", "tri", "uni", "un", "up"};
    int      Lenght[44] = {   2,   1,      4,      4,      4,        6,     3,     3,    2,        6,        6,    2,     3,    2,       5,    2,        6,      4,       5,       5,    2,    2,       5,    2,       5,    2,       5,       5,       5,      4,     3,      4,      4,     3,     3,     3,     3,     3,      4,       5,     3,     3,    2,    2};

    for (int i = 0; i < 44; ++i)
    { 
        if (word.compare(0, Lenght[i], Prefixes[i]) == 0)
        {
            pre = Prefixes[i];
            word.erase(0, Lenght[i]);
        }
    }

    return word;
}


string SuffixFinder(string word, string& suf)
{
    string Suffixes[34] = {"y", "ty", "tion", "sion", "ship", "ous", "or", "mess", "ment", "less", "ize", "ive", "ity", "ist", "ism", "ish", "ing", "ious", "ify", "ical", "ic", "ible", "fy", "ful", "esque", "er", "ence", "en", "dom", "ate", "ance", "al", "acy", "able"};
    int      Lenght[34] = {  1,    2,      4,      4,      4,     3,    2,      4,      4,      4,     3,     3,     3,     3,     3,     3,     3,      4,     3,      4,    2,      4,    2,     3,       5,    2,      4,    2,     3,     3,      4,    2,     3,      4};

    for (int i = 0; i < 34; ++i)
    {
        if (word.compare(word.size() - Lenght[i], Lenght[i], Suffixes[i]) == 0)
        {
            suf = Suffixes[i];
            word.erase(word.size() - Lenght[i], Lenght[i]);
        }
    }

    return word;
}


string BackwardWords(string word, string pre, string suf)
{
    return word;
}