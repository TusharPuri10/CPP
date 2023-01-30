#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main()
{
    map<pair<string, string>, vector<int>> m;
    int total_students;
    cin>>total_students;
    for(int i=0; i<total_students;i++)
    {
        string first_name, last_name;
        int no_of_subjects;
        cin>>first_name>>last_name>>no_of_subjects;
        for(int j=0; j<no_of_subjects;j++)
        {
            int marks;
            cin>>marks;
            m[{first_name, last_name}].push_back(marks);
        }
    }
    for(auto &pr: m)
    {
        auto &full_name = pr.first;
        auto &list_of_marks = pr.second;
        cout<<full_name.first<<" "<<full_name.second<<endl;
        for(auto &value: list_of_marks)
        {
            cout<<value<<",";
        }
        cout<<endl;
    }
    
    return 0;
}