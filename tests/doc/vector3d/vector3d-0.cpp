// Chemfiles, a modern library for chemistry file reading and writing
// Copyright (C) Guillaume Fraux and contributors -- BSD license
#include <catch.hpp>
#include <chemfiles.hpp>
using namespace chemfiles;

#undef assert
#define assert CHECK

TEST_CASE() {
    // [example]
    auto v = Vector3D();
    assert(v[0] == 0.0);
    assert(v[1] == 0.0);
    assert(v[2] == 0.0);
    // [example]
}
