//
// This file is a part of cucp5g open source project.
// Copyright (c) 2021 Siddharth Sagar Barpanda.
//

#include <cstdio>
#include "cucp5g.hpp"
#include "utility/Options.hpp"

int main(int argc, char **argv)
{
  readOptions(argc, argv);
  return 0;
}

void readOptions(int argc, char** argv)
{
  if(argc < 2)
    {
      puts("Please add configuration file");
    }
  else
    {
      for(int i = 1; i < argc; i+2)
	{
	  if(argv[i] == "-c" or argv[i] == "--config")
	    {
	      puts("Going in the correct direction");
	    }
	  else
	    {
	      puts("Argument not read");
	    }
	}
    }
}
