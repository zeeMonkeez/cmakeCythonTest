# Instructions

In both the `nested` and `monolithic` subfolders, enter

    cmake -H. -B_Build
    cmake --build _Build --target install
  
and observe that the `nested` version will compile twice.
