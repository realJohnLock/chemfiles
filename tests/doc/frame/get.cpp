// Chemfiles, a modern library for chemistry file reading and writing
// Copyright (C) Guillaume Fraux and contributors -- BSD license
#include <catch.hpp>
#include <chemfiles.hpp>
using namespace chemfiles;

#undef assert
#define assert CHECK

TEST_CASE() {
    // [example]
    auto frame = Frame();
    frame.set("foo", Property(23));

    assert(frame.get("foo"));
    assert(frame.get("foo")->as_double() == 23);

    assert(frame.get<Property::DOUBLE>("foo").value() == 23);
    assert(!frame.get<Property::STRING>("foo"));

    assert(!frame.get("bar"));
    // [example]
}
