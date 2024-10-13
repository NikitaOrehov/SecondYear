#include "BitField.h"


class Set{
private:
    BitField _bitField;
    size_t _maxPower;

public:
    Set(size_t mp);
    Set(const Set& set);
    Set(const BitField& bf);
    operator BitField();

    size_t GetMaxPower();
    void InsertElem(uint64_t elem);
    void DeleteElem(uint64_t elem);
    bool IsMember(uint64_t elem);

    bool operator==(const Set& tmp);
    Set& operator=(const Set& tmp);
    Set operator+(const Set& tmp);
    Set operator+(uint64_t elem);
    Set operator-(uint64_t elem);
    Set operator*(const Set& ymp);
    Set operator~();

    friend std::istream& operator>>(std::iostream& istr, Set& set);
    friend std::istream& operator<<(std::iostream& istr, const Set& set);


};