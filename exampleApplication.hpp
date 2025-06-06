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
 * @file exampleApplication.hpp
 * This header file contains the declaration of the application functions.
 *
 * This file was generated by the tool fastddsgen.
 */

#ifndef FAST_DDS_GENERATED__EXAMPLEAPPLICATION_HPP
#define FAST_DDS_GENERATED__EXAMPLEAPPLICATION_HPP

#include <atomic>
#include <memory>
#include <string>

class exampleApplication
{
public:

    //! Virtual destructor
    virtual ~exampleApplication() = default;

    //! Run application
    virtual void run() = 0;

    //! Trigger the end of execution
    virtual void stop() = 0;

    //! Factory method to create applications based on configuration
    static std::shared_ptr<exampleApplication> make_app(
            const int& domain_id,
            const std::string& entity_kind);
};

#endif // FAST_DDS_GENERATED__EXAMPLEAPPLICATION_HPP