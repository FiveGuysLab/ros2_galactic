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
 * @file KeyedData1mb.hpp
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool fastddsgen (version: 4.1.0).
 */

#ifndef FAST_DDS_GENERATED__KEYEDDATA1MB_HPP
#define FAST_DDS_GENERATED__KEYEDDATA1MB_HPP

#include <cstdint>
#include <utility>
#include <vector>


#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#define eProsima_user_DllExport __declspec( dllexport )
#else
#define eProsima_user_DllExport
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define eProsima_user_DllExport
#endif  // _WIN32

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#if defined(KEYEDDATA1MB_SOURCE)
#define KEYEDDATA1MB_DllAPI __declspec( dllexport )
#else
#define KEYEDDATA1MB_DllAPI __declspec( dllimport )
#endif // KEYEDDATA1MB_SOURCE
#else
#define KEYEDDATA1MB_DllAPI
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define KEYEDDATA1MB_DllAPI
#endif // _WIN32

/*!
 * @brief This class represents the structure KeyedData1mb defined by the user in the IDL file.
 * @ingroup KeyedData1mb
 */
class KeyedData1mb
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport KeyedData1mb()
    {
    }

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~KeyedData1mb()
    {
    }

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object KeyedData1mb that will be copied.
     */
    eProsima_user_DllExport KeyedData1mb(
            const KeyedData1mb& x)
    {
                    m_key = x.m_key;

                    m_data = x.m_data;

    }

    /*!
     * @brief Move constructor.
     * @param x Reference to the object KeyedData1mb that will be copied.
     */
    eProsima_user_DllExport KeyedData1mb(
            KeyedData1mb&& x) noexcept
    {
        m_key = x.m_key;
        m_data = std::move(x.m_data);
    }

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object KeyedData1mb that will be copied.
     */
    eProsima_user_DllExport KeyedData1mb& operator =(
            const KeyedData1mb& x)
    {

                    m_key = x.m_key;

                    m_data = x.m_data;

        return *this;
    }

    /*!
     * @brief Move assignment.
     * @param x Reference to the object KeyedData1mb that will be copied.
     */
    eProsima_user_DllExport KeyedData1mb& operator =(
            KeyedData1mb&& x) noexcept
    {

        m_key = x.m_key;
        m_data = std::move(x.m_data);
        return *this;
    }

    /*!
     * @brief Comparison operator.
     * @param x KeyedData1mb object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const KeyedData1mb& x) const
    {
        return (m_key == x.m_key &&
           m_data == x.m_data);
    }

    /*!
     * @brief Comparison operator.
     * @param x KeyedData1mb object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const KeyedData1mb& x) const
    {
        return !(*this == x);
    }

    /*!
     * @brief This function sets a value in member key
     * @param _key New value for member key
     */
    eProsima_user_DllExport void key(
            uint16_t _key)
    {
        m_key = _key;
    }

    /*!
     * @brief This function returns the value of member key
     * @return Value of member key
     */
    eProsima_user_DllExport uint16_t key() const
    {
        return m_key;
    }

    /*!
     * @brief This function returns a reference to member key
     * @return Reference to member key
     */
    eProsima_user_DllExport uint16_t& key()
    {
        return m_key;
    }


    /*!
     * @brief This function copies the value in member data
     * @param _data New value to be copied in member data
     */
    eProsima_user_DllExport void data(
            const std::vector<uint8_t>& _data)
    {
        m_data = _data;
    }

    /*!
     * @brief This function moves the value in member data
     * @param _data New value to be moved in member data
     */
    eProsima_user_DllExport void data(
            std::vector<uint8_t>&& _data)
    {
        m_data = std::move(_data);
    }

    /*!
     * @brief This function returns a constant reference to member data
     * @return Constant reference to member data
     */
    eProsima_user_DllExport const std::vector<uint8_t>& data() const
    {
        return m_data;
    }

    /*!
     * @brief This function returns a reference to member data
     * @return Reference to member data
     */
    eProsima_user_DllExport std::vector<uint8_t>& data()
    {
        return m_data;
    }



private:

    uint16_t m_key{0};
    std::vector<uint8_t> m_data;

};

#endif // _FAST_DDS_GENERATED_KEYEDDATA1MB_HPP_


