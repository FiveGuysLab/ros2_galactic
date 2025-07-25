^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
Changelog for package tf2_bullet
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

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
* Suppress compiler warning on Centos (`#290 <https://github.com/ros2/geometry2/issues/290>`_)
* Contributors: Michael Carroll

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
* Porting tf2_bullet to ros2 (`#205 <https://github.com/ros2/geometry2/issues/205>`_)
* Contributors: Alejandro Hernández Cordero

0.5.15 (2017-01-24)
-------------------

0.5.14 (2017-01-16)
-------------------
* Improve documentation
* Contributors: Jackie Kay

0.5.13 (2016-03-04)
-------------------
* Don't export catkin includes
  They only point to the temporary include in the build directory.
* Contributors: Jochen Sprickerhof

0.5.12 (2015-08-05)
-------------------

0.5.11 (2015-04-22)
-------------------

0.5.10 (2015-04-21)
-------------------

0.5.9 (2015-03-25)
------------------

0.5.8 (2015-03-17)
------------------
* remove useless Makefile files
* fix ODR violations
* Contributors: Vincent Rabaud

0.5.7 (2014-12-23)
------------------
* fixing install rules and adding backwards compatible include with #warning
* Contributors: Tully Foote

0.5.6 (2014-09-18)
------------------

0.5.5 (2014-06-23)
------------------

0.5.4 (2014-05-07)
------------------

0.5.3 (2014-02-21)
------------------

0.5.2 (2014-02-20)
------------------

0.5.1 (2014-02-14)
------------------

0.5.0 (2014-02-14)
------------------

0.4.10 (2013-12-26)
-------------------

0.4.9 (2013-11-06)
------------------
* adding missing buildtool dependency on pkg-config

0.4.8 (2013-11-06)
------------------

0.4.7 (2013-08-28)
------------------

0.4.6 (2013-08-28)
------------------

0.4.5 (2013-07-11)
------------------

0.4.4 (2013-07-09)
------------------
* making repo use CATKIN_ENABLE_TESTING correctly and switching rostest to be a test_depend with that change.

0.4.3 (2013-07-05)
------------------

0.4.2 (2013-07-05)
------------------
* removing unused dependency on rostest

0.4.1 (2013-07-05)
------------------
* stripping tf2_ros dependency from tf2_bullet.  Test was moved to test_tf2

0.4.0 (2013-06-27)
------------------
* moving convert methods back into tf2 because it does not have any ros dependencies beyond ros::Time which is already a dependency of tf2
* Cleaning up unnecessary dependency on roscpp
* converting contents of tf2_ros to be properly namespaced in the tf2_ros namespace
* Cleaning up packaging of tf2 including:
  removing unused nodehandle
  cleaning up a few dependencies and linking
  removing old backup of package.xml
  making diff minimally different from tf version of library
* Restoring test packages and bullet packages.
  reverting 3570e8c42f9b394ecbfd9db076b920b41300ad55 to get back more of the packages previously implemented
  reverting 04cf29d1b58c660fdc999ab83563a5d4b76ab331 to fix `#7 <https://github.com/ros/geometry_experimental/issues/7>`_

0.3.6 (2013-03-03)
------------------

0.3.5 (2013-02-15 14:46)
------------------------

0.3.4 (2013-02-15 13:14)
------------------------

0.3.3 (2013-02-15 11:30)
------------------------

0.3.2 (2013-02-15 00:42)
------------------------

0.3.1 (2013-02-14)
------------------

0.3.0 (2013-02-13)
------------------
* fixing groovy-devel
* removing bullet and kdl related packages
* catkinizing geometry-experimental
* catkinizing tf2_bullet
* merge tf2_cpp and tf2_py into tf2_ros
* A working first version of transforming and converting between different types
* Fixing tests now that Buffer creates a NodeHandle
* add frame unit tests to kdl and bullet
* add first regression tests for kdl and bullet tf
* add btTransform transform
* add bullet transforms, and create tests for bullet and kdl
