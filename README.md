# HDF5
This repository contains a slightly modified version of libhdf5 and HighFive that compile under Unreal and other build systems.

libhdf5 version: 1.14.1  
HighFive version: 2.7.1

The requirement to build under cmake has been removed and it can be compilied by anything by including all c files.

This repository can be cloned into the `OpenStorm/Radar/Deps` folder to enable support for h5/odim radar files.

Currently only windows is supported but Linux support is planned. If you would like Linux support faster open an issue. Or you can add the required ifdef conditions in `hdf5/H5pubconf.h` to support both platforms and open a pull request.