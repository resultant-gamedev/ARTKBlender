/*
-----------------------------------------------------------------------------
This source file is part of ARTKBlender library

Copyright (c) 2016 The Zdeno Ash Miklas

ARTKBlender is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

Foobar is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with ARTKBlender.  If not, see <http://www.gnu.org/licenses/>.
-----------------------------------------------------------------------------
*/

#pragma once

#include <AR/ar.h>
#include <Python.h>

#include "PyObjectHelper.h"

namespace ARTKBlender
{

/// python data structure for ARHandle
struct PyARHandle
{
  PyObject_HEAD
  /// ARHandle structure
  ARHandle * handle;
  /// lookup table from ARParam
  ARParamLT * paramLT;
  /// attached pattern handle
  PyObjectOwner * attachPatt;
  /// list of detected markers
  PyObjectOwner * markers;
  /// flag to update markers - true, if new detection was performed
  bool updateMarkers;
};

// declaration of python module type
extern PyTypeObject ARHandleType;

}