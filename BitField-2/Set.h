#include "BitField.h"
<<<<<<< HEAD
#include <cstdint>
=======
#include <vector>
>>>>>>> 7f8874c009844ebc863e565e7b636091aadca9a4

class Set{
private:
    BitField _bitField;
    size_t _maxPower;

public:
    Set(size_t mp);
    Set(const Set& set);
    Set(const Set&& set);
    Set(const BitField& bf);
    operator BitField();

    size_t GetMaxPower(){
        return _maxPower;
    }
    void InsertElem(uint64_t elem);
    void DeleteElem(uint64_t elem);
    bool IsMember(uint64_t elem);

    bool operator==(const Set& tmp);
    Set& operator=(const Set& tmp);
    Set& operator=(const Set&& tmp);
    Set operator+(const Set& tmp);
    Set operator+(uint64_t elem);
    Set operator-(uint64_t elem);
    Set operator*(const Set& ymp);
    Set operator~();

    friend std::istream& operator>>(std::istream& istr, Set& set);
    friend std::ostream& operator<<(std::ostream& istr, const Set& set){
        for (int i = 0; i < set._maxPower; i++){
            if (set._bitField.GetBit(i) == 1){
                std::cout<<i<<" ";
            }
        }
        std::cout<<"\n";
        return istr;
    }

    
    std::vector<uint64_t> GetPrimary();

};