## Copyright (C) 2010-2015   Lukas F. Reichlin
##
## This program is free software: you can redistribute it and/or modify
## it under the terms of the GNU General Public License as published by
## the Free Software Foundation, either version 3 of the License, or
## (at your option) any later version.
##
## This program is distributed in the hope that it will be useful,
## but WITHOUT ANY WARRANTY; without even the implied warranty of
## MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
## GNU General Public License for more details.
##
## You should have received a copy of the GNU General Public License
## along with this program.  If not, see <http://www.gnu.org/licenses/>.

## -*- texinfo -*-
## Addition of two quaternions.  Used by Octave for "q1 + q2".

## Author: Lukas Reichlin <lukas.reichlin@gmail.com>
## Created: May 2010
## Version: 0.2

function q = plus (varargin)

  tmp = cellfun (@quaternion, varargin);  # uniformoutput = true !

  w = plus (tmp.w);
  x = plus (tmp.x);
  y = plus (tmp.y);
  z = plus (tmp.z);

  q = quaternion (w, x, y, z);

endfunction
