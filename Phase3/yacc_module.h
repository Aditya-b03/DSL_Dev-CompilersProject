#include <map>
#include <vector>
#include <string>
#include <iostream>

using namespace std;

/*
Type Encodings:
    0: int
    1: float
    2: string
    3: bool
    4: void
    5: list
    6: function
    7: struct
    8: team
    9: member
    10: task
    11: event
    12: meeting
    13: document
    14: calendar
    15: class
*/

struct idrec
{
    bool arr;
    int type;
    vector<int> arr_dims;
    int scope;
};

typedef struct idrec id_entry;

struct funcrec
{
    string name;
    int type;
    vector<pair<string, id_entry>> params;
    map<string, id_entry> local_table;
    int num_params;
};

typedef struct funcrec func_entry;

map<string, id_entry> global_table;
map<string, func_entry> func_table;

id_entry lookup(map<string, id_entry> &local_table, string name)
{
    if (local_table.find(name) != local_table.end())
        return local_table[name];
    else if (global_table.find(name) != global_table.end())
        return global_table[name];
    else
    {
        id_entry entry;
        entry.type = -1;
        return entry;
    }
}

bool insert(map<string, id_entry> &local_table, string name, id_entry entry)
{
    if (lookup(local_table, name).type != -1)
        return false;
    local_table[name] = entry;
    return true;
}

void display(map<string, id_entry> &table)
{
    for (auto it = table.begin(); it != table.end(); it++)
        cout << it->first << " " << it->second.type << endl;
}

void display_func_table()
{
    for (auto it = func_table.begin(); it != func_table.end(); it++)
    {
        cout << it->first << " " << it->second.type << endl;
        cout << "Params: " << endl;
        for (auto it2 = it->second.params.begin(); it2 != it->second.params.end(); it2++)
            cout << it2->first << " " << it2->second.type << endl;
        cout << "Local Table: " << endl;
        display(it->second.local_table);
    }
}

// struct for dimlist of identifiers
struct dimlist
{
    vector<int> dims;
};

// struct with dimlist and type
struct dimlist_type
{
    vector<int> dims;
    int type;
};

// struct for type
struct type
{
    int type;
};
