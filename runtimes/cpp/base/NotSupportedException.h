/* Copyright 2013 David Axmark

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

	http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

/* 
 * File:   NotSupportedException.h
 * Author: Ali Mosavian
 *
 * Created on July 16, 2009
 */

#ifndef __NOTSUPPORTEDEXCEPTION_H__
#define	__NOTSUPPORTEDEXCEPTION_H__

#include <string>
#include <exception>

namespace Base
{
    /**
     * This class is thrown when somethings not supported, such as
     * a particular mime type.
     *
     */
    class NotSupportedException : public std::exception
    {
    private:
        std::string     m_msg;

    public:
        /**
         * Constructor
         *
         * @param m     Message (default is empty string)
         */
        NotSupportedException ( char * m = "" )
        : m_msg ( m )
        {
        }

        /**
         * Copy constructor
         *
         * @param o     Instance to copy
         */
        NotSupportedException ( const NotSupportedException &o )
        : m_msg ( o.m_msg )
        {
        }

        /**
         * Overides std::exception what method, returns the
         * reason for the exception.
         *
         * @return Pointer to a const asciiz string.
         */
        virtual const char * what ( void )
        throw( )
        {
            return m_msg.c_str( );
        }
    };
}

#endif	/* __NOTSUPPORTEDEXCEPTION_H__ */

