/*
 *  This file is a part of Libint.
 *  Copyright (C) 2004-2014 Edward F. Valeev
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see http://www.gnu.org/licenses/.
 *
 */

#include <dgarc.h>

using namespace std;
using namespace libint2;

DGArc::DGArc(const SafePtr<DGVertex>& orig, const SafePtr<DGVertex>& dest) :
  orig_(orig), dest_(dest) {}

DGArcRR::DGArcRR(const SafePtr<DGVertex>& orig, const SafePtr<DGVertex>& dest) :
  DGArc(orig,dest) {}
