#define BOOST_TEST_MODULE mytests
#include <boost/test/included/unit_test.hpp>

BOOST_AUTO_TEST_CASE(myTestCase)
{

	int i = 2;
	BOOST_WARN(sizeof(int) == sizeof(short));
	BOOST_CHECK(i == 1);
	BOOST_REQUIRE(i > 5);
	BOOST_CHECK(i == 6);// will never reach this check ! 
    //BOOST_TEST(1 == 1);
  // BOOST_TEST(true);
}

 
/*                Error counter         Test exection 

     WARN           not effected         continues;
	 CHECK          increased            continues;
	 REQUIRE        increased            aborts; 

*/