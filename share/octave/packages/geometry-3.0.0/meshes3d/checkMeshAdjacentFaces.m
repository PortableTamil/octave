## Copyright (C) 2003-2017 David Legland
## All rights reserved.
## 
## Redistribution and use in source and binary forms, with or without
## modification, are permitted provided that the following conditions are met:
## 
##     1 Redistributions of source code must retain the above copyright notice,
##       this list of conditions and the following disclaimer.
##     2 Redistributions in binary form must reproduce the above copyright
##       notice, this list of conditions and the following disclaimer in the
##       documentation and/or other materials provided with the distribution.
## 
## THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS ''AS IS''
## AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
## IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
## ARE DISCLAIMED. IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS BE LIABLE FOR
## ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
## DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
## SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
## CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
## OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
## OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
## 
## The views and conclusions contained in the software and documentation are
## those of the authors and should not be interpreted as representing official
## policies, either expressed or implied, of the copyright holders.

function checkMeshAdjacentFaces(vertices, edges, faces)
%CHECKMESHADJACENTFACES Check if adjacent faces of a mesh have similar orientation
%
%   checkMeshAdjacentFaces(VERTICES, EDGES, FACES)
%   The functions returns no output, but if two faces share a common edge
%   with the same direction (meaning that adjacent faces have normals in
%   opposite direction), a warning is displayed. 
%   
%   Example
%   [v e f] = createCube();
%   checkMeshAdjacentFaces(v, e, f);
%   % no output -> all faces have normal outwards of the cube
%
%   v = [0 0 0; 10 0 0; 0 10 0; 10 10 0];
%   e = [1 2;1 3;2 3;2 4;3 4];
%   f = [1 2 3; 2 3 4];
%   checkMeshAdjacentFaces(v, e, f);
%      Warning: Faces 1 and 2 run through the edge 3 (2-3) in the same direction
%
%   See also
%   meshes3d
%
% ------
% Author: David Legland
% e-mail: david.legland@grignon.inra.fr
% Created: 2010-10-06,    using Matlab 7.9.0.529 (R2009b)
% Copyright 2010 INRA - Cepia Software Platform.

pattern = 'Faces %d and %d run through the edge %d (%d-%d) in the same direction';

edgeFaces = meshEdgeFaces(vertices, edges, faces);
Ne = size(edgeFaces, 1);

for i = 1:Ne
    % indices of extreimty vertices
    v1 = edges(i, 1);
    v2 = edges(i, 2);
    
    % index of adjacent faces
    indF1 = edgeFaces(i, 1);
    indF2 = edgeFaces(i, 2);
    
    % if one of the faces has index 0, then the edge is at the boundary
    if indF1 == 0 || indF2 == 0
        continue;
    end
    % vertices of adjacent faces
    face1 = meshFace(faces, indF1);
    face2 = meshFace(faces, indF2);
    
    % position of vertices in face vertex array
    ind11 = find(face1 == v1);
    ind12 = find(face1 == v2);
    ind21 = find(face2 == v1);
    ind22 = find(face2 == v2);
    
    % check if edge is traveled forward or backard
    direct1 = (ind12 == ind11+1) | (ind12 == 1 & ind11 == length(face1));
    direct2 = (ind22 == ind21+1) | (ind22 == 1 & ind21 == length(face2));
    
    % adjacent faces should travel the edge in opposite direction
    if direct1 == direct2
        warning(pattern, indF1, indF2, i, v1, v2); %#ok<WNTAG>
    end
end
