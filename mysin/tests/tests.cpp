#include <gtest/gtest.h>
#include "sinehead.h"
#include <cmath>


TEST(sine, alltest){

    for (int i = 0; i != 361; ++i)
    {
        double y = sin(i*PI/180);
        double ymy = forsine::sine(i);
        
        ASSERT_NEAR(y,ymy,1e-5); 
    }    
}

TEST(sine, null){
    double y = sin(0);
    double ymy = forsine::sine(0);

    ASSERT_NEAR(y,ymy,1e-5); 
}

TEST(sine, trista_shisdesiat){
    double y = sin(360*PI/180);
    double ymy = forsine::sine(360);

    ASSERT_NEAR(y,ymy,1e-5); 
}

TEST(sine, sorok_piat){
    double y = sin(45*PI/180);
    double ymy = forsine::sine(45);

    ASSERT_NEAR(y,ymy,1e-5); 
}

TEST(sine, divianosta){
    double y = sin(90*PI/180);
    double ymy = forsine::sine(90);

    ASSERT_NEAR(y,ymy,1e-5); 
}

int main(int argc, char* argv[])
{
    ::testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}