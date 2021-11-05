//
// This file is a part of cucp5g open source project.
// Copyright (c) 2021 Siddharth Sagar Barpanda.
//

#include <gtest/gtest.h>
#include "../Options.hpp"

int main(int ac, char* av[])
{
  testing::InitGoogleTest(&ac, av);
  return RUN_ALL_TESTS();
}

TEST(Addition, CanAddTwoNumbers)
{
  EXPECT_EQ(4, 2 + 2);
}
