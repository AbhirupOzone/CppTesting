#include "catch.hpp"
#include "Bank.cpp"

// TEST_CASE("Bank::details prints the correct output", "[Bank]") {
//     Bank obj(123456789,"Ram");
//     ostringstream oss;
//     obj.details();
//     REQUIRE(oss.str() == "123456789 and Ram\n");
// }

TEST_CASE("Bank details should be printed correctly", "[Bank]") {
    Bank obj(123456789, "Abhirup");

    SECTION("Check account number") {
        std::ostringstream oss;
        obj.details();
        REQUIRE(oss.str().find("123456789") == std::string::npos);
    }

    SECTION("Check account holder name") {
        std::ostringstream oss;
        obj.details();
        REQUIRE(oss.str().find("Abhirup") == std::string::npos);
    }
}

