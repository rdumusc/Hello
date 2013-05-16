/**
 * @file    version.h
 * @brief   Report the version for this package.
 * @author  vonhalle
 * @date    05.08.2011
 * @remarks Copyright (c) BBP/EPFL 2005-2011; All rights reserved. Do not distribute without further notice.
 */


#ifndef HELLO_VERSION_H_
#define HELLO_VERSION_H_

#include <string>

namespace hello
{
    /** The current major version. */
#   define HELLO_VERSION_MAJOR @VERSION_MAJOR@

    /** The current minor version. */
#   define HELLO_VERSION_MINOR @VERSION_MINOR@

    /** The current patch level. */
#   define HELLO_VERSION_PATCH @VERSION_PATCH@

    /** The current SCM revision. */
#   define HELLO_VERSION_REVISION 0x@GIT_REVISION@

/** True if the current version is newer than the given one. */
#   define HELLO_VERSION_GT( MAJOR, MINOR, PATCH )                      \
    ( (HELLO_VERSION_MAJOR>MAJOR) ||                                    \
      (HELLO_VERSION_MAJOR==MAJOR && (HELLO_VERSION_MINOR>MINOR ||      \
                     (HELLO_VERSION_MINOR==MINOR && HELLO_VERSION_PATCH>PATCH))))

/** True if the current version is equal or newer to the given. */
#   define HELLO_VERSION_GE( MAJOR, MINOR, PATCH )                      \
    ( (HELLO_VERSION_MAJOR>MAJOR) ||                                    \
      (HELLO_VERSION_MAJOR==MAJOR && (HELLO_VERSION_MINOR>MINOR ||      \
                    (HELLO_VERSION_MINOR==MINOR && HELLO_VERSION_PATCH>=PATCH))))

/** True if the current version is older than the given one. */
#   define HELLO_VERSION_LT( MAJOR, MINOR, PATCH )                      \
    ( (HELLO_VERSION_MAJOR<MAJOR) ||                                    \
      (HELLO_VERSION_MAJOR==MAJOR && (HELLO_VERSION_MINOR<MINOR ||      \
                     (HELLO_VERSION_MINOR==MINOR && HELLO_VERSION_PATCH<PATCH))))

/** True if the current version is older or equal to the given. */
#   define HELLO_VERSION_LE( MAJOR, MINOR, PATCH )                      \
    ( (HELLO_VERSION_MAJOR<MAJOR) ||                                    \
      (HELLO_VERSION_MAJOR==MAJOR && (HELLO_VERSION_MINOR<MINOR ||      \
                    (HELLO_VERSION_MINOR==MINOR && HELLO_VERSION_PATCH<=PATCH))))

    /** Information about the current Hello version. */
    class Version
    {
    public:
        /** @return the current major version of Hello. */
        static int getMajor();

        /** @return the current minor version of Hello. */
        static int getMinor();

        /** @return the current patch level of Hello. */
        static int getPatch();

        /** @return the current Hello version (MM.mm.pp). */
        static std::string getString();

        /** @return the SCM revision. */
        static int getRevision();

        /** @return the current Hello version plus the SVN revision (MM.mm.pp.rev). */
        static std::string getRevString();
    };
}

#endif // HELLO_VERSION_H_
