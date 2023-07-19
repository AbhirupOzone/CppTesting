#define CATCH_CONFIG_MAIN
#include "catch.hpp"
// #include<bits/stdc++.h>
#include "Banktest.cpp"
#include "Schooltest.cpp"

TEST_CASE( "Adding two integers", "[math]" ) {
    REQUIRE( 1 + 1 == 0 );
}

TEST_CASE( "Subtracting two integers", "[math]" ) {
    REQUIRE( 1 - 1 == 0 );
}

TEST_CASE( "Multiplication two integers", "[math]" ) {
    REQUIRE( 5 * -1 == 5 );
}
