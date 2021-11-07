//
// This file is a part of cucp5g open source project.
// Copyright (c) 2021 Siddharth Sagar Barpanda.
//

// To remove
#include <iostream>

#include <cstdio>
#include <json/value.h>
#include <fstream>
#include "cucp5g.hpp"
#include "utility/JsonConfig.hpp"

int main(int argc, char **argv)
{
  readOptions(argc, argv);
  return 0;
}

void readOptions(int argc, char** argv)
{
  if(argc <= 2)
    {
      puts("Please add configuration file");
    }
  else
    {
      writeJson(argv[2]);
    }
}

void writeJson(char* jsonFile)
{
  JsonConfig configFile;
  configFile.writeConfig(jsonFile);
}
