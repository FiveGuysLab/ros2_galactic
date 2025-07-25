// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
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

/*!
 * @file structuresTypeObjectSupport.hpp
 * Header file containing the API required to register the TypeObject representation of the described types in the IDL file
 *
 * This file was generated by the tool fastddsgen (version: 4.1.0).
 */

#ifndef FAST_DDS_GENERATED__STRUCTURES_TYPE_OBJECT_SUPPORT_HPP
#define FAST_DDS_GENERATED__STRUCTURES_TYPE_OBJECT_SUPPORT_HPP

#include <fastdds/dds/xtypes/type_representation/TypeObject.hpp>

#include "helpers/basic_inner_typesTypeObjectSupport.hpp"

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#define eProsima_user_DllExport __declspec( dllexport )
#else
#define eProsima_user_DllExport
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define eProsima_user_DllExport
#endif  // _WIN32

#ifndef DOXYGEN_SHOULD_SKIP_THIS_PUBLIC

/**
 * @brief Register StructShort related TypeIdentifier.
 *        Fully-descriptive TypeIdentifiers are directly registered.
 *        Hash TypeIdentifiers require to fill the TypeObject information and hash it, consequently, the TypeObject is
 *        indirectly registered as well.
 *
 * @param[out] type_ids TypeIdentifier of the registered type.
 *             The returned TypeIdentifier corresponds to the complete TypeIdentifier in case of hashed TypeIdentifiers.
 *             Invalid TypeIdentifier is returned in case of error.
 */
eProsima_user_DllExport void register_StructShort_type_identifier(
        eprosima::fastdds::dds::xtypes::TypeIdentifierPair& type_ids);
/**
 * @brief Register StructUnsignedShort related TypeIdentifier.
 *        Fully-descriptive TypeIdentifiers are directly registered.
 *        Hash TypeIdentifiers require to fill the TypeObject information and hash it, consequently, the TypeObject is
 *        indirectly registered as well.
 *
 * @param[out] type_ids TypeIdentifier of the registered type.
 *             The returned TypeIdentifier corresponds to the complete TypeIdentifier in case of hashed TypeIdentifiers.
 *             Invalid TypeIdentifier is returned in case of error.
 */
eProsima_user_DllExport void register_StructUnsignedShort_type_identifier(
        eprosima::fastdds::dds::xtypes::TypeIdentifierPair& type_ids);
/**
 * @brief Register StructLong related TypeIdentifier.
 *        Fully-descriptive TypeIdentifiers are directly registered.
 *        Hash TypeIdentifiers require to fill the TypeObject information and hash it, consequently, the TypeObject is
 *        indirectly registered as well.
 *
 * @param[out] type_ids TypeIdentifier of the registered type.
 *             The returned TypeIdentifier corresponds to the complete TypeIdentifier in case of hashed TypeIdentifiers.
 *             Invalid TypeIdentifier is returned in case of error.
 */
eProsima_user_DllExport void register_StructLong_type_identifier(
        eprosima::fastdds::dds::xtypes::TypeIdentifierPair& type_ids);
/**
 * @brief Register StructUnsignedLong related TypeIdentifier.
 *        Fully-descriptive TypeIdentifiers are directly registered.
 *        Hash TypeIdentifiers require to fill the TypeObject information and hash it, consequently, the TypeObject is
 *        indirectly registered as well.
 *
 * @param[out] type_ids TypeIdentifier of the registered type.
 *             The returned TypeIdentifier corresponds to the complete TypeIdentifier in case of hashed TypeIdentifiers.
 *             Invalid TypeIdentifier is returned in case of error.
 */
eProsima_user_DllExport void register_StructUnsignedLong_type_identifier(
        eprosima::fastdds::dds::xtypes::TypeIdentifierPair& type_ids);
/**
 * @brief Register StructLongLong related TypeIdentifier.
 *        Fully-descriptive TypeIdentifiers are directly registered.
 *        Hash TypeIdentifiers require to fill the TypeObject information and hash it, consequently, the TypeObject is
 *        indirectly registered as well.
 *
 * @param[out] type_ids TypeIdentifier of the registered type.
 *             The returned TypeIdentifier corresponds to the complete TypeIdentifier in case of hashed TypeIdentifiers.
 *             Invalid TypeIdentifier is returned in case of error.
 */
eProsima_user_DllExport void register_StructLongLong_type_identifier(
        eprosima::fastdds::dds::xtypes::TypeIdentifierPair& type_ids);
/**
 * @brief Register StructUnsignedLongLong related TypeIdentifier.
 *        Fully-descriptive TypeIdentifiers are directly registered.
 *        Hash TypeIdentifiers require to fill the TypeObject information and hash it, consequently, the TypeObject is
 *        indirectly registered as well.
 *
 * @param[out] type_ids TypeIdentifier of the registered type.
 *             The returned TypeIdentifier corresponds to the complete TypeIdentifier in case of hashed TypeIdentifiers.
 *             Invalid TypeIdentifier is returned in case of error.
 */
eProsima_user_DllExport void register_StructUnsignedLongLong_type_identifier(
        eprosima::fastdds::dds::xtypes::TypeIdentifierPair& type_ids);
/**
 * @brief Register StructFloat related TypeIdentifier.
 *        Fully-descriptive TypeIdentifiers are directly registered.
 *        Hash TypeIdentifiers require to fill the TypeObject information and hash it, consequently, the TypeObject is
 *        indirectly registered as well.
 *
 * @param[out] type_ids TypeIdentifier of the registered type.
 *             The returned TypeIdentifier corresponds to the complete TypeIdentifier in case of hashed TypeIdentifiers.
 *             Invalid TypeIdentifier is returned in case of error.
 */
eProsima_user_DllExport void register_StructFloat_type_identifier(
        eprosima::fastdds::dds::xtypes::TypeIdentifierPair& type_ids);
/**
 * @brief Register StructDouble related TypeIdentifier.
 *        Fully-descriptive TypeIdentifiers are directly registered.
 *        Hash TypeIdentifiers require to fill the TypeObject information and hash it, consequently, the TypeObject is
 *        indirectly registered as well.
 *
 * @param[out] type_ids TypeIdentifier of the registered type.
 *             The returned TypeIdentifier corresponds to the complete TypeIdentifier in case of hashed TypeIdentifiers.
 *             Invalid TypeIdentifier is returned in case of error.
 */
eProsima_user_DllExport void register_StructDouble_type_identifier(
        eprosima::fastdds::dds::xtypes::TypeIdentifierPair& type_ids);
/**
 * @brief Register StructLongDouble related TypeIdentifier.
 *        Fully-descriptive TypeIdentifiers are directly registered.
 *        Hash TypeIdentifiers require to fill the TypeObject information and hash it, consequently, the TypeObject is
 *        indirectly registered as well.
 *
 * @param[out] type_ids TypeIdentifier of the registered type.
 *             The returned TypeIdentifier corresponds to the complete TypeIdentifier in case of hashed TypeIdentifiers.
 *             Invalid TypeIdentifier is returned in case of error.
 */
eProsima_user_DllExport void register_StructLongDouble_type_identifier(
        eprosima::fastdds::dds::xtypes::TypeIdentifierPair& type_ids);
/**
 * @brief Register StructBoolean related TypeIdentifier.
 *        Fully-descriptive TypeIdentifiers are directly registered.
 *        Hash TypeIdentifiers require to fill the TypeObject information and hash it, consequently, the TypeObject is
 *        indirectly registered as well.
 *
 * @param[out] type_ids TypeIdentifier of the registered type.
 *             The returned TypeIdentifier corresponds to the complete TypeIdentifier in case of hashed TypeIdentifiers.
 *             Invalid TypeIdentifier is returned in case of error.
 */
eProsima_user_DllExport void register_StructBoolean_type_identifier(
        eprosima::fastdds::dds::xtypes::TypeIdentifierPair& type_ids);
/**
 * @brief Register StructOctet related TypeIdentifier.
 *        Fully-descriptive TypeIdentifiers are directly registered.
 *        Hash TypeIdentifiers require to fill the TypeObject information and hash it, consequently, the TypeObject is
 *        indirectly registered as well.
 *
 * @param[out] type_ids TypeIdentifier of the registered type.
 *             The returned TypeIdentifier corresponds to the complete TypeIdentifier in case of hashed TypeIdentifiers.
 *             Invalid TypeIdentifier is returned in case of error.
 */
eProsima_user_DllExport void register_StructOctet_type_identifier(
        eprosima::fastdds::dds::xtypes::TypeIdentifierPair& type_ids);
/**
 * @brief Register StructChar8 related TypeIdentifier.
 *        Fully-descriptive TypeIdentifiers are directly registered.
 *        Hash TypeIdentifiers require to fill the TypeObject information and hash it, consequently, the TypeObject is
 *        indirectly registered as well.
 *
 * @param[out] type_ids TypeIdentifier of the registered type.
 *             The returned TypeIdentifier corresponds to the complete TypeIdentifier in case of hashed TypeIdentifiers.
 *             Invalid TypeIdentifier is returned in case of error.
 */
eProsima_user_DllExport void register_StructChar8_type_identifier(
        eprosima::fastdds::dds::xtypes::TypeIdentifierPair& type_ids);
/**
 * @brief Register StructChar16 related TypeIdentifier.
 *        Fully-descriptive TypeIdentifiers are directly registered.
 *        Hash TypeIdentifiers require to fill the TypeObject information and hash it, consequently, the TypeObject is
 *        indirectly registered as well.
 *
 * @param[out] type_ids TypeIdentifier of the registered type.
 *             The returned TypeIdentifier corresponds to the complete TypeIdentifier in case of hashed TypeIdentifiers.
 *             Invalid TypeIdentifier is returned in case of error.
 */
eProsima_user_DllExport void register_StructChar16_type_identifier(
        eprosima::fastdds::dds::xtypes::TypeIdentifierPair& type_ids);
/**
 * @brief Register StructString related TypeIdentifier.
 *        Fully-descriptive TypeIdentifiers are directly registered.
 *        Hash TypeIdentifiers require to fill the TypeObject information and hash it, consequently, the TypeObject is
 *        indirectly registered as well.
 *
 * @param[out] type_ids TypeIdentifier of the registered type.
 *             The returned TypeIdentifier corresponds to the complete TypeIdentifier in case of hashed TypeIdentifiers.
 *             Invalid TypeIdentifier is returned in case of error.
 */
eProsima_user_DllExport void register_StructString_type_identifier(
        eprosima::fastdds::dds::xtypes::TypeIdentifierPair& type_ids);
/**
 * @brief Register StructWString related TypeIdentifier.
 *        Fully-descriptive TypeIdentifiers are directly registered.
 *        Hash TypeIdentifiers require to fill the TypeObject information and hash it, consequently, the TypeObject is
 *        indirectly registered as well.
 *
 * @param[out] type_ids TypeIdentifier of the registered type.
 *             The returned TypeIdentifier corresponds to the complete TypeIdentifier in case of hashed TypeIdentifiers.
 *             Invalid TypeIdentifier is returned in case of error.
 */
eProsima_user_DllExport void register_StructWString_type_identifier(
        eprosima::fastdds::dds::xtypes::TypeIdentifierPair& type_ids);
/**
 * @brief Register StructBoundedString related TypeIdentifier.
 *        Fully-descriptive TypeIdentifiers are directly registered.
 *        Hash TypeIdentifiers require to fill the TypeObject information and hash it, consequently, the TypeObject is
 *        indirectly registered as well.
 *
 * @param[out] type_ids TypeIdentifier of the registered type.
 *             The returned TypeIdentifier corresponds to the complete TypeIdentifier in case of hashed TypeIdentifiers.
 *             Invalid TypeIdentifier is returned in case of error.
 */
eProsima_user_DllExport void register_StructBoundedString_type_identifier(
        eprosima::fastdds::dds::xtypes::TypeIdentifierPair& type_ids);
/**
 * @brief Register StructBoundedWString related TypeIdentifier.
 *        Fully-descriptive TypeIdentifiers are directly registered.
 *        Hash TypeIdentifiers require to fill the TypeObject information and hash it, consequently, the TypeObject is
 *        indirectly registered as well.
 *
 * @param[out] type_ids TypeIdentifier of the registered type.
 *             The returned TypeIdentifier corresponds to the complete TypeIdentifier in case of hashed TypeIdentifiers.
 *             Invalid TypeIdentifier is returned in case of error.
 */
eProsima_user_DllExport void register_StructBoundedWString_type_identifier(
        eprosima::fastdds::dds::xtypes::TypeIdentifierPair& type_ids);
/**
 * @brief Register StructEnum related TypeIdentifier.
 *        Fully-descriptive TypeIdentifiers are directly registered.
 *        Hash TypeIdentifiers require to fill the TypeObject information and hash it, consequently, the TypeObject is
 *        indirectly registered as well.
 *
 * @param[out] type_ids TypeIdentifier of the registered type.
 *             The returned TypeIdentifier corresponds to the complete TypeIdentifier in case of hashed TypeIdentifiers.
 *             Invalid TypeIdentifier is returned in case of error.
 */
eProsima_user_DllExport void register_StructEnum_type_identifier(
        eprosima::fastdds::dds::xtypes::TypeIdentifierPair& type_ids);
/**
 * @brief Register StructBitMask related TypeIdentifier.
 *        Fully-descriptive TypeIdentifiers are directly registered.
 *        Hash TypeIdentifiers require to fill the TypeObject information and hash it, consequently, the TypeObject is
 *        indirectly registered as well.
 *
 * @param[out] type_ids TypeIdentifier of the registered type.
 *             The returned TypeIdentifier corresponds to the complete TypeIdentifier in case of hashed TypeIdentifiers.
 *             Invalid TypeIdentifier is returned in case of error.
 */
eProsima_user_DllExport void register_StructBitMask_type_identifier(
        eprosima::fastdds::dds::xtypes::TypeIdentifierPair& type_ids);
/**
 * @brief Register StructAlias related TypeIdentifier.
 *        Fully-descriptive TypeIdentifiers are directly registered.
 *        Hash TypeIdentifiers require to fill the TypeObject information and hash it, consequently, the TypeObject is
 *        indirectly registered as well.
 *
 * @param[out] type_ids TypeIdentifier of the registered type.
 *             The returned TypeIdentifier corresponds to the complete TypeIdentifier in case of hashed TypeIdentifiers.
 *             Invalid TypeIdentifier is returned in case of error.
 */
eProsima_user_DllExport void register_StructAlias_type_identifier(
        eprosima::fastdds::dds::xtypes::TypeIdentifierPair& type_ids);
/**
 * @brief Register StructShortArray related TypeIdentifier.
 *        Fully-descriptive TypeIdentifiers are directly registered.
 *        Hash TypeIdentifiers require to fill the TypeObject information and hash it, consequently, the TypeObject is
 *        indirectly registered as well.
 *
 * @param[out] type_ids TypeIdentifier of the registered type.
 *             The returned TypeIdentifier corresponds to the complete TypeIdentifier in case of hashed TypeIdentifiers.
 *             Invalid TypeIdentifier is returned in case of error.
 */
eProsima_user_DllExport void register_StructShortArray_type_identifier(
        eprosima::fastdds::dds::xtypes::TypeIdentifierPair& type_ids);
/**
 * @brief Register StructSequence related TypeIdentifier.
 *        Fully-descriptive TypeIdentifiers are directly registered.
 *        Hash TypeIdentifiers require to fill the TypeObject information and hash it, consequently, the TypeObject is
 *        indirectly registered as well.
 *
 * @param[out] type_ids TypeIdentifier of the registered type.
 *             The returned TypeIdentifier corresponds to the complete TypeIdentifier in case of hashed TypeIdentifiers.
 *             Invalid TypeIdentifier is returned in case of error.
 */
eProsima_user_DllExport void register_StructSequence_type_identifier(
        eprosima::fastdds::dds::xtypes::TypeIdentifierPair& type_ids);
/**
 * @brief Register StructMap related TypeIdentifier.
 *        Fully-descriptive TypeIdentifiers are directly registered.
 *        Hash TypeIdentifiers require to fill the TypeObject information and hash it, consequently, the TypeObject is
 *        indirectly registered as well.
 *
 * @param[out] type_ids TypeIdentifier of the registered type.
 *             The returned TypeIdentifier corresponds to the complete TypeIdentifier in case of hashed TypeIdentifiers.
 *             Invalid TypeIdentifier is returned in case of error.
 */
eProsima_user_DllExport void register_StructMap_type_identifier(
        eprosima::fastdds::dds::xtypes::TypeIdentifierPair& type_ids);
/**
 * @brief Register StructUnion related TypeIdentifier.
 *        Fully-descriptive TypeIdentifiers are directly registered.
 *        Hash TypeIdentifiers require to fill the TypeObject information and hash it, consequently, the TypeObject is
 *        indirectly registered as well.
 *
 * @param[out] type_ids TypeIdentifier of the registered type.
 *             The returned TypeIdentifier corresponds to the complete TypeIdentifier in case of hashed TypeIdentifiers.
 *             Invalid TypeIdentifier is returned in case of error.
 */
eProsima_user_DllExport void register_StructUnion_type_identifier(
        eprosima::fastdds::dds::xtypes::TypeIdentifierPair& type_ids);
/**
 * @brief Register StructStructure related TypeIdentifier.
 *        Fully-descriptive TypeIdentifiers are directly registered.
 *        Hash TypeIdentifiers require to fill the TypeObject information and hash it, consequently, the TypeObject is
 *        indirectly registered as well.
 *
 * @param[out] type_ids TypeIdentifier of the registered type.
 *             The returned TypeIdentifier corresponds to the complete TypeIdentifier in case of hashed TypeIdentifiers.
 *             Invalid TypeIdentifier is returned in case of error.
 */
eProsima_user_DllExport void register_StructStructure_type_identifier(
        eprosima::fastdds::dds::xtypes::TypeIdentifierPair& type_ids);
/**
 * @brief Register StructBitset related TypeIdentifier.
 *        Fully-descriptive TypeIdentifiers are directly registered.
 *        Hash TypeIdentifiers require to fill the TypeObject information and hash it, consequently, the TypeObject is
 *        indirectly registered as well.
 *
 * @param[out] type_ids TypeIdentifier of the registered type.
 *             The returned TypeIdentifier corresponds to the complete TypeIdentifier in case of hashed TypeIdentifiers.
 *             Invalid TypeIdentifier is returned in case of error.
 */
eProsima_user_DllExport void register_StructBitset_type_identifier(
        eprosima::fastdds::dds::xtypes::TypeIdentifierPair& type_ids);
/**
 * @brief Register StructEmpty related TypeIdentifier.
 *        Fully-descriptive TypeIdentifiers are directly registered.
 *        Hash TypeIdentifiers require to fill the TypeObject information and hash it, consequently, the TypeObject is
 *        indirectly registered as well.
 *
 * @param[out] type_ids TypeIdentifier of the registered type.
 *             The returned TypeIdentifier corresponds to the complete TypeIdentifier in case of hashed TypeIdentifiers.
 *             Invalid TypeIdentifier is returned in case of error.
 */
eProsima_user_DllExport void register_StructEmpty_type_identifier(
        eprosima::fastdds::dds::xtypes::TypeIdentifierPair& type_ids);
/**
 * @brief Register Structures related TypeIdentifier.
 *        Fully-descriptive TypeIdentifiers are directly registered.
 *        Hash TypeIdentifiers require to fill the TypeObject information and hash it, consequently, the TypeObject is
 *        indirectly registered as well.
 *
 * @param[out] type_ids TypeIdentifier of the registered type.
 *             The returned TypeIdentifier corresponds to the complete TypeIdentifier in case of hashed TypeIdentifiers.
 *             Invalid TypeIdentifier is returned in case of error.
 */
eProsima_user_DllExport void register_Structures_type_identifier(
        eprosima::fastdds::dds::xtypes::TypeIdentifierPair& type_ids);
namespace testing_1 {
/**
 * @brief Register foo related TypeIdentifier.
 *        Fully-descriptive TypeIdentifiers are directly registered.
 *        Hash TypeIdentifiers require to fill the TypeObject information and hash it, consequently, the TypeObject is
 *        indirectly registered as well.
 *
 * @param[out] type_ids TypeIdentifier of the registered type.
 *             The returned TypeIdentifier corresponds to the complete TypeIdentifier in case of hashed TypeIdentifiers.
 *             Invalid TypeIdentifier is returned in case of error.
 */
eProsima_user_DllExport void register_foo_type_identifier(
        eprosima::fastdds::dds::xtypes::TypeIdentifierPair& type_ids);

} // namespace testing_1
namespace testing_2 {
/**
 * @brief Register foo related TypeIdentifier.
 *        Fully-descriptive TypeIdentifiers are directly registered.
 *        Hash TypeIdentifiers require to fill the TypeObject information and hash it, consequently, the TypeObject is
 *        indirectly registered as well.
 *
 * @param[out] type_ids TypeIdentifier of the registered type.
 *             The returned TypeIdentifier corresponds to the complete TypeIdentifier in case of hashed TypeIdentifiers.
 *             Invalid TypeIdentifier is returned in case of error.
 */
eProsima_user_DllExport void register_foo_type_identifier(
        eprosima::fastdds::dds::xtypes::TypeIdentifierPair& type_ids);

} // namespace testing_2
/**
 * @brief Register bar related TypeIdentifier.
 *        Fully-descriptive TypeIdentifiers are directly registered.
 *        Hash TypeIdentifiers require to fill the TypeObject information and hash it, consequently, the TypeObject is
 *        indirectly registered as well.
 *
 * @param[out] type_ids TypeIdentifier of the registered type.
 *             The returned TypeIdentifier corresponds to the complete TypeIdentifier in case of hashed TypeIdentifiers.
 *             Invalid TypeIdentifier is returned in case of error.
 */
eProsima_user_DllExport void register_bar_type_identifier(
        eprosima::fastdds::dds::xtypes::TypeIdentifierPair& type_ids);
/**
 * @brief Register root1 related TypeIdentifier.
 *        Fully-descriptive TypeIdentifiers are directly registered.
 *        Hash TypeIdentifiers require to fill the TypeObject information and hash it, consequently, the TypeObject is
 *        indirectly registered as well.
 *
 * @param[out] type_ids TypeIdentifier of the registered type.
 *             The returned TypeIdentifier corresponds to the complete TypeIdentifier in case of hashed TypeIdentifiers.
 *             Invalid TypeIdentifier is returned in case of error.
 */
eProsima_user_DllExport void register_root1_type_identifier(
        eprosima::fastdds::dds::xtypes::TypeIdentifierPair& type_ids);
/**
 * @brief Register root2 related TypeIdentifier.
 *        Fully-descriptive TypeIdentifiers are directly registered.
 *        Hash TypeIdentifiers require to fill the TypeObject information and hash it, consequently, the TypeObject is
 *        indirectly registered as well.
 *
 * @param[out] type_ids TypeIdentifier of the registered type.
 *             The returned TypeIdentifier corresponds to the complete TypeIdentifier in case of hashed TypeIdentifiers.
 *             Invalid TypeIdentifier is returned in case of error.
 */
eProsima_user_DllExport void register_root2_type_identifier(
        eprosima::fastdds::dds::xtypes::TypeIdentifierPair& type_ids);
/**
 * @brief Register root related TypeIdentifier.
 *        Fully-descriptive TypeIdentifiers are directly registered.
 *        Hash TypeIdentifiers require to fill the TypeObject information and hash it, consequently, the TypeObject is
 *        indirectly registered as well.
 *
 * @param[out] type_ids TypeIdentifier of the registered type.
 *             The returned TypeIdentifier corresponds to the complete TypeIdentifier in case of hashed TypeIdentifiers.
 *             Invalid TypeIdentifier is returned in case of error.
 */
eProsima_user_DllExport void register_root_type_identifier(
        eprosima::fastdds::dds::xtypes::TypeIdentifierPair& type_ids);


#endif // DOXYGEN_SHOULD_SKIP_THIS_PUBLIC

#endif // FAST_DDS_GENERATED__STRUCTURES_TYPE_OBJECT_SUPPORT_HPP
