#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;
class Letter
{
public:
    string name;
    string address;
    string province;
    string district;
    int zip;
    bool operator<(const Letter &other) const
    {
        if (zip == other.zip)
        {
            if (address == other.address)
            {
                if (district == other.district)
                {
                    if (province == other.province)
                    {
                        return name < other.name;
                    }
                    return province < other.province;
                }
                return district < other.district;
            }
            return address < other.address;
        }
        return zip < other.zip;
    }
};
class ZipInfo
{
public:
    int zip;
    string province;
    string district;
};
void correctZipAndSortLetters(vector<ZipInfo> &zipinfo, vector<Letter> &letters)
{
    //**Begin Insert**
    map<pair<string, string>, int> m;
    for (auto e : zipinfo)
        m[{e.district, e.province}] = e.zip;
    for (int i = 0; i < letters.size(); i++)
        letters[i].zip = m[{letters[i].district, letters[i].province}];
    sort(letters.begin(), letters.end());
    //**End Insert**
}
int main()
{
    int nzip;
    cin >> nzip;
    vector<ZipInfo> zipinfo;
    for (int i = 0; i < nzip; i++)
    {
        ZipInfo z;
        cin >> z.zip >> z.district >> z.province;
        zipinfo.push_back(z);
    }
    int n;
    cin >> n;
    vector<Letter> letters;
    for (int i = 0; i < n; i++)
    {
        Letter l;
        cin >> l.name >> l.address >> l.district >> l.province >> l.zip;
        letters.push_back(l);
    }
    correctZipAndSortLetters(zipinfo, letters);
    for (auto &l : letters)
    {
        cout << l.name << " " << l.address << " " << l.district << " " << l.province << " " << l.zip << endl;
    }
}