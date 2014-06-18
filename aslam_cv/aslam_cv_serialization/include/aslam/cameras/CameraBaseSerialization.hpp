#ifndef ASLAM_CV_SERIALIZATION_CAMERA_BASE_SERIALIZATION
#define ASLAM_CV_SERIALIZATION_CAMERA_BASE_SERIALIZATION

/**
 * @file   CameraGeometryBaseSerialization.hpp
 * @author Paul Furgale <paul.furgale@gmail.com>
 * @date   Tue Apr 16 09:43:33 2013
 * 
 * @brief  This file is needed to enable serialization using CameraGeometryBase pointers
 *
 * THIS FILE HAS BEEN AUTOGENERATED BY gen_files.py
 * 
 */

#include <boost/serialization/export.hpp>
#include <aslam/cameras.hpp>

BOOST_CLASS_EXPORT_KEY (aslam::cameras::CameraGeometryBase);
BOOST_CLASS_EXPORT_KEY (aslam::cameras::PinholeCameraGeometry);
BOOST_CLASS_EXPORT_KEY (aslam::cameras::DistortedPinholeCameraGeometry);
BOOST_CLASS_EXPORT_KEY (aslam::cameras::EquidistantDistortedPinholeCameraGeometry);
BOOST_CLASS_EXPORT_KEY (aslam::cameras::OmniCameraGeometry);
BOOST_CLASS_EXPORT_KEY (aslam::cameras::DistortedOmniCameraGeometry);
BOOST_CLASS_EXPORT_KEY (aslam::cameras::EquidistantDistortedOmniCameraGeometry);
BOOST_CLASS_EXPORT_KEY (aslam::cameras::PinholeRsCameraGeometry);
BOOST_CLASS_EXPORT_KEY (aslam::cameras::DistortedPinholeRsCameraGeometry);
BOOST_CLASS_EXPORT_KEY (aslam::cameras::EquidistantDistortedPinholeRsCameraGeometry);
BOOST_CLASS_EXPORT_KEY (aslam::cameras::OmniRsCameraGeometry);
BOOST_CLASS_EXPORT_KEY (aslam::cameras::DistortedOmniRsCameraGeometry);
BOOST_CLASS_EXPORT_KEY (aslam::cameras::EquidistantDistortedOmniRsCameraGeometry);
BOOST_CLASS_EXPORT_KEY (aslam::cameras::MaskedPinholeCameraGeometry);
BOOST_CLASS_EXPORT_KEY (aslam::cameras::MaskedDistortedPinholeCameraGeometry);
BOOST_CLASS_EXPORT_KEY (aslam::cameras::MaskedEquidistantDistortedPinholeCameraGeometry);
BOOST_CLASS_EXPORT_KEY (aslam::cameras::MaskedOmniCameraGeometry);
BOOST_CLASS_EXPORT_KEY (aslam::cameras::MaskedDistortedOmniCameraGeometry);
BOOST_CLASS_EXPORT_KEY (aslam::cameras::MaskedEquidistantDistortedOmniCameraGeometry);
BOOST_CLASS_EXPORT_KEY (aslam::cameras::MaskedPinholeRsCameraGeometry);
BOOST_CLASS_EXPORT_KEY (aslam::cameras::MaskedDistortedPinholeRsCameraGeometry);
BOOST_CLASS_EXPORT_KEY (aslam::cameras::MaskedEquidistantDistortedPinholeRsCameraGeometry);
BOOST_CLASS_EXPORT_KEY (aslam::cameras::MaskedOmniRsCameraGeometry);
BOOST_CLASS_EXPORT_KEY (aslam::cameras::MaskedDistortedOmniRsCameraGeometry);
BOOST_CLASS_EXPORT_KEY (aslam::cameras::MaskedEquidistantDistortedOmniRsCameraGeometry);
BOOST_CLASS_EXPORT_KEY (aslam::cameras::DepthCameraGeometry);
BOOST_CLASS_EXPORT_KEY (aslam::cameras::DistortedDepthCameraGeometry);
BOOST_CLASS_EXPORT_KEY (aslam::cameras::EquidistantDistortedDepthCameraGeometry);

#endif /* ASLAM_CV_SERIALIZATION_CAMERA_BASE_SERIALIZATION */
