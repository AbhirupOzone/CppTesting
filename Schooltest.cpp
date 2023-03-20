#include "catch.hpp"
#include "School.cpp"

// TEST_CASE("School::details prints the correct output", "[School]") {
//     School obj(2,"lalal");
//     ostringstream oss;
//     obj.details();
//     REQUIRE(oss.str() == "2 and Abhirup\n");
// }

TEST_CASE("School details should be printed correctly", "[School]") {
    School obj(123456789, "Abhirup");

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