//
// This file is a part of cucp5g open source project.
// Copyright (c) 2021 Siddharth Sagar Barpanda.
//

#include <iostream>
#include <json/json.h> // Included for type conversion. Not to be removed
#include <json/value.h>
#include <fstream>
#include "JsonConfig.hpp"

void JsonConfig::writeConfig(char* jsonFile)
{
  Json::Value configurations;
  std::ifstream config_file(jsonFile, std::ifstream::binary);
  config_file >> configurations;
  this->configs = configurations;
}

Json::Value JsonConfig::readConfig(char* attribute)
{
  Json::Value value = configs[attribute];
  return value;
}
