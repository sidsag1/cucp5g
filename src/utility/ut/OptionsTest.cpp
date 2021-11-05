//
// This file is a part of cucp5g open source project.
// Copyright (c) 2021 Siddharth Sagar Barpanda.
//

#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "../Options.hpp"

int main(int ac, char* av[])
{
  testing::InitGoogleTest(&ac, av);
  return RUN_ALL_TESTS();
}

TEST(Options, CreateOptions)
{
  int numOfOptions = 1;
  std::vector<OptionsTypes> options;
  options.push_back(JSON);
  Options optionsObj(numOfOptions, options);
}
