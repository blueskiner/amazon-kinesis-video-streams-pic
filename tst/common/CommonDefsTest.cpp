#include "gtest/gtest.h"

#include "src/common/include/com/amazonaws/kinesis/video/common/CommonDefs.h"

TEST(CommonDefsTest, SizeTMatches)
{
    EXPECT_EQ(SIZEOF(size_t), SIZEOF(SIZE_T));
}

TEST(CommonDefsTest, GetEnvWorks)
{
    EXPECT_NE(nullptr, GETENV("PATH")) << "PATH environment variable is unexpectedly unset, or GETENV doesn't work";
}
