// Copyright 2018, Bosch Software Innovations GmbH.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef ROSBAG2_STORAGE_DEFAULT_PLUGINS__SQLITE__SQLITE_WRAPPER_HPP_
#define ROSBAG2_STORAGE_DEFAULT_PLUGINS__SQLITE__SQLITE_WRAPPER_HPP_

#include <sqlite3.h>

#include <memory>
#include <string>
#include <unordered_map>

#include "rcutils/types.h"
#include "rosbag2_storage/serialized_bag_message.hpp"
#include "rosbag2_storage/storage_interfaces/base_io_interface.hpp"
#include "rosbag2_storage_default_plugins/sqlite/sqlite_statement_wrapper.hpp"
#include "rosbag2_storage_default_plugins/visibility_control.hpp"

namespace rosbag2_storage_plugins
{

using DBPtr = sqlite3 *;

class ROSBAG2_STORAGE_DEFAULT_PLUGINS_PUBLIC SqliteWrapper
{
public:
  SqliteWrapper(
    const std::string & uri,
    rosbag2_storage::storage_interfaces::IOFlag io_flag,
    std::unordered_map<std::string, std::string> && pragmas = {});
  SqliteWrapper();
  ~SqliteWrapper();

  bool field_exists(const std::string & table_name, const std::string & field_name);
  SqliteStatement prepare_statement(const std::string & query);
  std::string query_pragma_value(const std::string & key);

  size_t get_last_insert_id();

  operator bool();

private:
  void apply_pragma_settings(
    std::unordered_map<std::string, std::string> & pragmas,
    rosbag2_storage::storage_interfaces::IOFlag io_flag);

  DBPtr db_ptr;
};


}  // namespace rosbag2_storage_plugins

#endif  // ROSBAG2_STORAGE_DEFAULT_PLUGINS__SQLITE__SQLITE_WRAPPER_HPP_
