//
// This file is a part of cucp5g open source project.
// Copyright (c) 2021 Siddharth Sagar Barpanda.
//

#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <json/value.h>
#include "../JsonConfig.hpp"

int main(int ac, char* av[])
{
  testing::InitGoogleTest(&ac, av);
  return RUN_ALL_TESTS();
}

TEST(JsonConfig, ReadWriteJson)
{
  JsonConfig configFile;
  char* fileName = "examples/config.json";
  configFile.writeConfig(fileName);
  Json::Value realValue = configFile.readConfig("Name");
  Json::Value expectedValue = "cucp5g";
  ASSERT_EQ(realValue, expectedValue);
}
