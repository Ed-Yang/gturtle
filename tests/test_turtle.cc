
#include "turtle/mock_turtle.h"
#include "turtle/painter.h"

using ::testing::AtLeast; // #1

TEST(PainterTest, CanDrawSomething)
{
    MockTurtle turtle;             // #2
    EXPECT_CALL(turtle, PenDown()) // #3
        .Times(AtLeast(1));

    Painter painter(&turtle); // #4

    EXPECT_TRUE(painter.DrawCircle(0, 0, 10));
} // #5

int main(int argc, char **argv)
{
    // The following line must be executed to initialize Google Mock
    // (and Google Test) before running the tests.
    ::testing::InitGoogleMock(&argc, argv);
    return RUN_ALL_TESTS();
}
