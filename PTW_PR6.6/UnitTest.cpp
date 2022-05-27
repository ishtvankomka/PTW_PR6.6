#define CATCH_CONFIG_MAIN
#include "catch.h"
#include "Elem.h"
TEST_CASE( "Arguments initialized") {
    Elem* first = NULL,
        * last = NULL;

    string sname = "stepan", num = "0992637567";
    enqueue(first, last, sname, num);
    
    REQUIRE( Check(first, "stepan", "0992637567") == true);
}
