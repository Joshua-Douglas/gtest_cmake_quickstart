#include <gtest/gtest.h>

// Demonstrate some basic assertions.
TEST(HelloTest, BasicAssertions) {
  // Expect two strings not to be equal.
  EXPECT_STRNE("hello", "world");
  // Expect equality.
  EXPECT_EQ(7 * 6, 42);
}

/*Optional main function. 
CMakeLists.txt already linked gtest_main which implements
the main function for us. If you need custom code within main
then you are responsible for calling InitGoogleTest and
RUN_ALL_TESTS(). 

Replace gtest_main with gtest within CMakeList.txt's
target_link_libraries declaration if using custom main.

int main(int argc, char **argv)
{
	::testing::InitGoogleTest(&argc, argv);
    // Your custom code
	return RUN_ALL_TESTS();
}
*/