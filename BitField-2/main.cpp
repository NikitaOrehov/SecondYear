#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "BitField.h"


int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();



    // std::string word = "HHHHHHHHHHHHHHHH";
    // BitField BitWord(8 * sizeof(char) * word.size());
    // BitWord.CodeWord(word);
    // std::cout<<"lenght: "<<BitWord.GetLength()<<"\n";
    // std::cout<<BitWord<<"\n";
    // std::cout<<BitWord.DecodeWord()<<"\n";
}