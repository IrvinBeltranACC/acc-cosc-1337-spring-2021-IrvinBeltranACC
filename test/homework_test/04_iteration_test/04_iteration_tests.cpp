#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "dna.h"
#include <string>
using std::string;

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test get_gc_content function") 
{
	string dna1 = "AGCTATAG";
	string dna2 = "CGCTATAG";
	REQUIRE(get_gc_content(dna1) == .375);
	REQUIRE(get_gc_content(dna2) == .5);

}

TEST_CASE("Test get_reverse_string function")
{
	string dna3 = "AGCTATAG";
	string dna4 = "CGCTATAG";
	REQUIRE(get_reverse_string(dna3) == "GATATCGA");
	REQUIRE(get_reverse_string(dna4) == "GATATCGC");
}

TEST_CASE("Test get_dna_complement function")
{
	string dna5 = "AAAACCCGGT";
	string dna6 = "CCCGGAAAAT";
	REQUIRE(get_dna_complement(dna5) == "ACCGGGTTTT");
	REQUIRE(get_dna_complement(dna6) == "ATTTTCCGGG");
}
