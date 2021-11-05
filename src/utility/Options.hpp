//
// This file is a part of cucp5g open source project.
// Copyright (c) 2021 Siddharth Sagar Barpanda.
//

#pragma once

#include <vector>

enum OptionsTypes{JSON = 0};

class Options {
private:
  int numOfOptions;
  std::vector<OptionsTypes> options;
public:
  Options(int, std::vector<OptionsTypes>);
};
