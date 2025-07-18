^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
Changelog for package tf2_eigen
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

0.17.5 (2022-12-02)
-------------------

0.17.4 (2022-06-30)
-------------------

0.17.3 (2022-04-28)
-------------------

0.17.2 (2021-05-10)
-------------------

0.17.1 (2021-04-06)
-------------------

0.17.0 (2021-03-19)
-------------------
* Fix linter errors (`#385 <https://github.com/ros2/geometry2/issues/385>`_)
* Fix up the style in tf2_eigen. (`#378 <https://github.com/ros2/geometry2/issues/378>`_)
* Fix doTransform with Eigen Quaternion (`#369 <https://github.com/ros2/geometry2/issues/369>`_)
* Contributors: Audrow Nash, Bjar Ne, Chris Lalancette

0.16.0 (2021-01-25)
-------------------

0.15.1 (2020-12-08)
-------------------

0.15.0 (2020-11-02)
-------------------
* Update maintainers of the ros2/geometry2 fork. (`#328 <https://github.com/ros2/geometry2/issues/328>`_)
* Contributors: Chris Lalancette

0.14.1 (2020-09-21)
-------------------
* Activate usual compiler warnings and fix errors (`#270 <https://github.com/ros2/geometry2/issues/270>`_)
* Contributors: Ivan Santiago Paunovic

0.14.0 (2020-08-14)
-------------------

0.13.4 (2020-06-03)
-------------------

0.13.3 (2020-05-26)
-------------------

0.13.2 (2020-05-18)
-------------------

0.13.1 (2020-05-08)
-------------------

0.13.0 (2020-04-30)
-------------------
* Added doxyfiles and sphinx Makefiles (`#257 <https://github.com/ros2/geometry2/issues/257>`_)
* Contributors: Alejandro Hernández Cordero

0.12.4 (2019-11-19)
-------------------

0.12.3 (2019-11-18)
-------------------

0.12.2 (2019-11-18)
-------------------

0.12.1 (2019-10-23)
-------------------

0.12.0 (2019-09-26)
-------------------
* Adds toMsg & fromMsg for Eigen Vector3
* Adds additional conversions for tf2, KDL, Eigen
* Use eigen3_cmake_module (`#144 <https://github.com/ros2/geometry2/issues/144>`_)
* Contributors: Ian McMahon, Shane Loretz

0.11.3 (2019-05-24)
-------------------

0.11.2 (2019-05-20)
-------------------
* Port tf2_kdl (`#90 <https://github.com/ros2/geometry2/issues/90>`_)
  * tf2_eigen, leftover from the cherry-pick
  While cherry-picking changes to get isometry3d in
  * Update tf2_eigen, add toMsg2
  Convert a Eigen::Vector3d type to a geometry_msgs::msg::Vector3
  while avoiding overloading issues with previous definitions
  * Default to C++14
  * Define _USE_MATH_DEFINES so Windows gets M_PI symbol.
* Contributors: Víctor Mayoral Vilches

0.11.1 (2019-05-09)
-------------------
* also export Eigen3 include directories (`#102 <https://github.com/ros2/geometry2/issues/102>`_)
* Contributors: Marcus Scheunemann

0.11.0 (2019-04-14)
-------------------
* Updated to use ament_target_dependencies where possible. (`#98 <https://github.com/ros2/geometry2/issues/98>`_)
* Contributors: ivanpauno

0.10.1 (2018-12-06)
-------------------

0.10.0 (2018-11-22)
-------------------

0.5.15 (2017-01-24)
-------------------
* fixup `#186 <https://github.com/ros/geometry2/issues/186>`_: inline template specializations (`#200 <https://github.com/ros/geometry2/issues/200>`_)
* Contributors: Robert Haschke

0.5.14 (2017-01-16)
-------------------
* Add tf2_eigen conversions for Pose and Point (not stamped) (`#186 <https://github.com/ros/geometry2/issues/186>`_)
  * tf2_eigen: added conversions for Point msg type (not timestamped) to Eigen::Vector3d
  * tf2_eigen: added conversions for Pose msg type (not timestamped) to Eigen::Affine3d
  * tf2_eigen: new functions are inline now
  * tf2_eigen test compiling again
  * tf2_eigen: added tests for Affine3d and Vector3d conversion
  * tf2_eigen: added redefinitions of non-stamped conversion function to make usage in tf2::convert() possible
  * tf2_eigen: reduced redundancy by reusing non-stamped conversion-functions in their stamped counterparts
  * tf2_eigen: added notes at doTransform-implementations which can not work with tf2_ros::BufferInterface::transform
  * tf2_eigen: fixed typos
* Don't export local include dirs (`#180 <https://github.com/ros/geometry2/issues/180>`_)
* Improve documentation.
* Contributors: Jackie Kay, Jochen Sprickerhof, cwecht

0.5.13 (2016-03-04)
-------------------
* Added missing inline
* Added unit test
  - Testing conversion to msg forward/backward
* Added eigenTotransform function
* Contributors: Davide Tateo, boris-il-forte

0.5.12 (2015-08-05)
-------------------

0.5.11 (2015-04-22)
-------------------

0.5.10 (2015-04-21)
-------------------
* fixing CMakeLists.txt from `#97 <https://github.com/ros/geometry_experimental/issues/97>`_
* create tf2_eigen.
* Contributors: Tully Foote, koji

