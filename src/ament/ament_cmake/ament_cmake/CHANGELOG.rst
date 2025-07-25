^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
Changelog for package ament_cmake
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

1.1.6 (2022-12-02)
------------------

1.1.5 (2022-01-14)
------------------
* Update maintainers (backport `#362 <https://github.com/ament/ament_cmake/issues/362>`_) (`#370 <https://github.com/ament/ament_cmake/issues/370>`_).
* Contributors: Audrow Nash

1.1.4 (2021-05-06)
------------------

1.1.3 (2021-03-09)
------------------

1.1.2 (2021-02-26 22:59)
------------------------

1.1.1 (2021-02-26 19:12)
------------------------

1.1.0 (2021-02-24)
------------------

1.0.4 (2021-01-25)
------------------

1.0.3 (2020-12-10)
------------------

1.0.2 (2020-12-07)
------------------
* Update package maintainers. (`#286 <https://github.com/ament/ament_cmake/issues/286>`_)
* Contributors: Michel Hidalgo

1.0.1 (2020-09-10)
------------------

1.0.0 (2020-07-22)
------------------

0.9.6 (2020-06-23)
------------------

0.9.5 (2020-06-02)
------------------

0.9.4 (2020-05-26)
------------------

0.9.3 (2020-05-19)
------------------

0.9.2 (2020-05-07)
------------------

0.9.1 (2020-04-24 15:45)
------------------------

0.9.0 (2020-04-24 12:25)
------------------------
* deprecate ament_export_interfaces() in favor of ament_export_targets() (`#238 <https://github.com/ament/ament_cmake/issues/238>`_)
  * duplicate ament_cmake_export_interfaces to ament_cmake_export_targets
  * update names in ament_cmake_export_targets after duplicating the files, add deprecation message for ament_export_interfaces(), add ament_cmake_export_targets to ament_cmake
* Contributors: Dirk Thomas

0.8.1 (2019-10-23)
------------------
* add CMake macro ament_bump_development_version_if_necessary (`#204 <https://github.com/ament/ament_cmake/issues/204>`_)
  * add CMake macro ament_bump_development_version_if_necessary
  * Update ament_cmake_version/cmake/ament_bump_development_version_if_necessary.cmake
  Co-Authored-By: William Woodall <william@osrfoundation.org>
  * Update ament_cmake_version/cmake/ament_bump_development_version_if_necessary.cmake
  Co-Authored-By: William Woodall <william@osrfoundation.org>
  * quote versions in message
  * spelling: no-op
  * update macro name, add doc line about multiple invocations
* Contributors: Dirk Thomas

0.8.0 (2019-10-04)
------------------

0.7.3 (2019-05-29)
------------------

0.7.2 (2019-05-20)
------------------

0.7.1 (2019-05-07)
------------------

0.7.0 (2019-04-08)
------------------

0.6.0 (2018-11-13)
------------------

0.5.1 (2018-07-17)
------------------

0.5.0 (2018-06-13)
------------------

0.4.0 (2017-12-08)
------------------
* 0.0.3
* 0.0.2
* Merge pull request `#71 <https://github.com/ament/ament_cmake/issues/71>`_ from ament/export_link_flags
  add ament_cmake_export_link_flags package and use link flags in ament_target_dependencies
* add ament_cmake_export_link_flags package and use link flags in ament_target_dependencies
* update schema url
* add schema to manifest files
* Merge pull request `#72 <https://github.com/ament/ament_cmake/issues/72>`_ from ament/cmake35
  require CMake 3.5
* require CMake 3.5
* Merge pull request `#35 <https://github.com/ament/ament_cmake/issues/35>`_ from ament/change_test_dependencies
  remove gmock/gtest/nose packages from ament_cmake
* remove gmock/gtest/nose packages from ament_cmake
* add explicit build type
* use project(.. NONE)
* refactor several low-level packages into ament_cmake_core (environment, environment_hooks, index, package_templates, symlink_install)
* add ament_cmake_libraries
* add ament_cmake_target_dependencies
* update cmake code style
* add ament_cmake_gmock
* add ament_cmake_environment_hooks
* add ament_cmake_test, ament_cmake_gtest, ament_cmake_nose
* fix dependency
* add ament_cmake
* Contributors: Dirk Thomas
