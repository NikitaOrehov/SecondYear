#include <iostream>
#include <cstring>
#include <cstdint>


template<typename T>
class ArrayHandler {
private:
    size_t _size;
    size_t _lenght;
    T _min;
    T _max;
    T* _array;
public:
    ArrayHandler(size_t size = 10) {
        _size = size;
        _lenght = 0;
        _array = new T[_size];
        _min = INT8_MAX;
        _max = 0;
    }

    void AppendElem(T elem) {
        if (elem > _max) _max = elem;
        if (elem < _min) _min = elem;
        if (_lenght == _size){
            _size *= 2;
            T* _new_array = new T[_size];
            std::memcpy(_new_array, _array, (_size / 2) * sizeof(T));
            delete [] _array;
            _array = _new_array;
        }
        _array[_lenght] = elem;
        _lenght++;
    }

    bool IsContains(T elem) {
        return false;
    }

    T GetMax() {
        return _max;
    }

    T GetMin() {
        return _min;
    }

    ~ArrayHandler() {
        delete [] _array;
    }

};