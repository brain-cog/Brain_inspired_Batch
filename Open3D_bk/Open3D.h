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

// Core
#include "Utility/Helper.h"
#include "Utility/Console.h"
#include "Utility/Timer.h"
#include "Utility/FileSystem.h"
#include "Utility/Eigen.h"
#include "ColorMap/ColorMapOptimization.h"
#include "ColorMap/ImageWarpingField.h"
#include "Geometry/Geometry.h"
#include "Geometry/PointCloud.h"
#include "Geometry/VoxelGrid.h"
#include "Geometry/LineSet.h"
#include "Geometry/TriangleMesh.h"
#include "Geometry/HalfEdgeTriangleMesh.h"
#include "Geometry/Image.h"
#include "Geometry/RGBDImage.h"
#include "Geometry/KDTreeFlann.h"
#include "Camera/PinholeCameraIntrinsic.h"
#include "Camera/PinholeCameraParameters.h"
#include "Camera/PinholeCameraTrajectory.h"
#include "Registration/Feature.h"
#include "Registration/Registration.h"
#include "Registration/TransformationEstimation.h"
#include "Odometry/Odometry.h"
#include "Integration/TSDFVolume.h"
#include "Integration/UniformTSDFVolume.h"
#include "Integration/ScalableTSDFVolume.h"

// IO
#include "IO/ClassIO/PointCloudIO.h"
#include "IO/ClassIO/VoxelGridIO.h"
#include "IO/ClassIO/TriangleMeshIO.h"
#include "IO/ClassIO/LineSetIO.h"
#include "IO/ClassIO/ImageIO.h"
#include "IO/ClassIO/PinholeCameraTrajectoryIO.h"
#include "IO/ClassIO/IJsonConvertibleIO.h"
#include "IO/ClassIO/FeatureIO.h"
#include "IO/ClassIO/PoseGraphIO.h"

// Visualization
#include "Visualization/Utility/BoundingBox.h"
#include "Visualization/Utility/SelectionPolygon.h"
#include "Visualization/Utility/SelectionPolygonVolume.h"
#include "Visualization/Utility/DrawGeometry.h"
#include "Visualization/Visualizer/Visualizer.h"
#include "Visualization/Visualizer/VisualizerWithCustomAnimation.h"
#include "Visualization/Visualizer/VisualizerWithEditing.h"
#include "Visualization/Visualizer/VisualizerWithKeyCallback.h"
#include "Visualization/Visualizer/ViewControl.h"
#include "Visualization/Visualizer/ViewControlWithCustomAnimation.h"
#include "Visualization/Visualizer/ViewControlWithEditing.h"

#include "Open3DConfig.h"
