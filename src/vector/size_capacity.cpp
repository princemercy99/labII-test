// size_capacity.cpp
// Vector size versus capacity

#include <vector>
#include <iostream>

using namespace std;

int main()
{
    vector<int> vec;
    cout << "vec: size: " << vec.size() // size refers to the number of elements currently in the vector
         << " capacity: " << vec.capacity() << endl; // capacity refers to the amount of memory that has been allocated for the vector

    for (int i = 0; i < 24; i++)
    {
        vec.push_back(i);
        cout << "vec: size: " << vec.size()
             << " capacity: " << vec.capacity() << endl;
    }

/* If the vectors size equals the capacity, then eveytime there is a new element inserted, new memory is allocated , and the
vector then has to copy all those elements to the new location then add the element. This can take O(n) time.
Hence ocassionally doubling the capacity of the vector as it reaches full capacity occasionaly takes O(n) time
but has an average of O(1) time since all that has to be done most of the time are insertions. Therefore the capacity
grows with size since this is less computationally expensive.*/
    return 0;
}
