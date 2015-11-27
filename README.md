This test builds an app which links in a static go library with (in this case)
c++ bindings to demonstrate that we can build libraries in go and statically
link them.

To build:

  export ECLLIBHOME path/to/library

  g++  main.cpp -lecl -lpthread -L $ECLLIBHOME/libecl -o eclUsingApp
