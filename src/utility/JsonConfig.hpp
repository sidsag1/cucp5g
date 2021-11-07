//
// This file is a part of cucp5g open source project.
// Copyright (c) 2021 Siddharth Sagar Barpanda.
//

#include <json/value.h>

class JsonConfig
{
private:
  Json::Value configs;
public:
  void writeConfig(char*);
  Json::Value readConfig(char*);
};
