//
// This file is a part of cucp5g open source project.
// Copyright (c) 2021 Siddharth Sagar Barpanda.
//

// To remove
#include <iostream>

#include <cstdio>
#include <json/value.h>
#include <json/json.h>
#include <fstream>
#include "cucp5g.hpp"
#include "utility/Options.hpp"

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
  else if((argc + 1)% 2 != 0)
    {
      puts("Please add configuration file");
    }
  else
    {
      int numOfOptions = (argc + 1) / 2;
      std::vector<OptionsTypes> options;
      for(int i = 1; i < numOfOptions; ++i)
	{
	  // Assuming all are JSON files as of now
	  options.push_back(JSON);
	  jsonParser(argv[(i * 2)]);
	}
      Options optionsObj(numOfOptions, options);
    }
}

void jsonParser(char* jsonFile)
{
  Json::Value config;
  std::ifstream config_file(jsonFile, std::ifstream::binary);  
  config_file >> config;

  // To remove
  std::cout << config["Name"] << std::endl;
}
