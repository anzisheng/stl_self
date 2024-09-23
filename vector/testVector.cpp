#include <cstddef>
#include <vector>
struct Vector{
    int* m_data;
    size_t m_size;
    Vector(size_t n){
        m_data = new int[n];
        m_size = n;
    }
    ~Vector(){
        delete [] m_data;
    }
    size_t size() const  //size(Vector const *this)
    {
        return m_size;
    }
    int operator[](size_t t) const{
        return m_data[t];
    }
    int &operator[](size_t t)
    {
        return m_data[t];
    }
};

int main()
{
   Vector arr(3);
   for(size_t i = 0; i < arr.size(); i++)
   { 
    arr[i] = i;
   }
    //arr.push_back(1);
    //printf("%zd\n", arr.size());
    //arr.push_back(2);
    
    //printf("%zd\n", arr.size());
    //arr.push_back(3);
    //printf("%zd\n", arr.size());
    //printf("%zd\n", arr.size());
    //printf("%zd\n", arr.size());
    //printf("%zd\n", arr.size());
    for(size_t i = 0; i < arr.size(); i++)
        printf("%d, ", arr[i]);
    return 0;
}