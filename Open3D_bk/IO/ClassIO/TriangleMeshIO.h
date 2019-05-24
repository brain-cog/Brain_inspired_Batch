// ----------------------------------------------------------------------------
// -                        Open3D: www.open3d.org                            -
// ----------------------------------------------------------------------------
// The MIT License (MIT)
//
// Copyright (c) 2018 www.open3d.org
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
// FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
// IN THE SOFTWARE.
// ----------------------------------------------------------------------------

#pragma once

#include <string>
#include <Open3D/Geometry/TriangleMesh.h>

namespace open3d {
namespace io {

/// Factory function to create a mesh from a file (TriangleMeshFactory.cpp)
/// Return an empty mesh if fail to read the file.
std::shared_ptr<geometry::TriangleMesh> CreateMeshFromFile(
        const std::string &filename);

/// The general entrance for reading a TriangleMesh from a file
/// The function calls read functions based on the extension name of filename.
/// \return return true if the read function is successful, false otherwise.
bool ReadTriangleMesh(const std::string &filename,
                      geometry::TriangleMesh &mesh);

/// The general entrance for writing a TriangleMesh to a file
/// The function calls write functions based on the extension name of filename.
/// If the write function supports binary encoding and compression, the later
/// two parameters will be used. Otherwise they will be ignored.
/// \return return true if the write function is successful, false otherwise.
bool WriteTriangleMesh(const std::string &filename,
                       const geometry::TriangleMesh &mesh,
                       bool write_ascii = false,
                       bool compressed = false);

bool ReadTriangleMeshFromPLY(const std::string &filename,
                             geometry::TriangleMesh &mesh);

bool WriteTriangleMeshToPLY(const std::string &filename,
                            const geometry::TriangleMesh &mesh,
                            bool write_ascii = false,
                            bool compressed = false);

bool ReadTriangleMeshFromSTL(const std::string &filename,
                             geometry::TriangleMesh &mesh);

bool WriteTriangleMeshToSTL(const std::string &filename,
                            const geometry::TriangleMesh &mesh,
                            bool write_ascii = false,
                            bool compressed = false);

}  // namespace io
}  // namespace open3d
