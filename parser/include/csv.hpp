/* CSV parser.
 * @file
 * @date 2018-08-15
 * @author Anonymous
 */

#ifndef __CSV_HPP__
#define __CSV_HPP__

#include <string>
#include <vector>

#include <boost/spirit/home/x3.hpp>
#include <boost/spirit/home/x3/support/utility/error_reporting.hpp>

#include "parser.hpp"
#include "quoted_string.hpp"

/* An example of CSV:
 *      kind,of,header
 *      abc,with space,"quote"
 *      "comma , inside",132,  spaces  dot
 *      empty,,
 *
 * CSV (comma separated value) EBNF specification (http://www.rfc-editor.org/rfc/rfc4180.txt)
 *      string := [^,\n]+
 *      quoted_string := " [^"]* "
 *      cell := quated_string | string
 *      row := cell (, cell)* \n
 *      header := row
 *      csv := header row*
 */

namespace types
{
    namespace csv
    {
        //? Which kind of types should I use to describe the CSV type?
        //{
        U2FsdGVkX19FkFqHAwfgP3JOpdYlbO8AUzjtAyHEbXtXNknA883QC0//bvjAAb2dIOlhB0t1u0DO/xWvW84ERyOiaeUrYy+56JnwuTKEzlI=
        //}
    }
}

namespace parser
{
    namespace csv
    {
        //? Why I need a x3::no_skip here? Where is the original of the error?
        //? Where is BOOST_SPIRIT_DEFINE? Is it necessary?
        namespace x3 = boost::spirit::x3;

        //{ csv grammar
        U2FsdGVkX1+hSMPb0AzCp+HyzLZGh+mtOGSafhBu+gyjFJ/qtbPDCZNZOsq1PtHP9Y3Gmo0zcEa6gQK7kNZzKX3kXVDJHtJfsVD8ULyODyY=
        U2FsdGVkX19yHeLPK2XApQQLdzCX3+o4yb+Dy8H5JSgeKnICgjD1DEEXkxY+kDYY+paEfYaeUgZy00l/4QRKGq5nfMIRF/tpyifea8udNSEH/wj3LLA/9A==
                        U2FsdGVkX19EZ0iwm7vF48cRo5D2Mjx0VHpqNH6pbadJmHiEPuf1Wva5w3A6TYO4HtdN1KvyMiycvdNRy2xJ7gXA/SgXk2r0

        U2FsdGVkX1/ggw9um9808UH4BmPls5HVIyC516pHSa64VugBvos0k5H0WG0GYQwOKkj2mundjENL6mwYxcSFuD5elqr4fGXHf+19r/uFtceFrURHgEOMEbKH6ixwCyQrCifdS66xGrg=
                       U2FsdGVkX198HcmMtEPnzVXSraem4PhR8e9bK4vejlZIkNE3/BA6HG9I4Zo3876IUJ41QcNw4nCz16tsn130xaVPGBEY4gh36PD7H1ii0sg=

        U2FsdGVkX1/Y+OK98JbfbetBgfFAq1BTgxOoCW8FcgPJo0TlyjrVFtA3dXquMmzgB/81ZaBJWgShq64eji4VGSCNCYOUxbpxUbKZOIkONRYhaBFc6JyJ5w==
                       U2FsdGVkX1/nelk32fnivWmHTj/sAWNdJ4nBR1yDzX6dt1msyPY8b2CAWrk+SWBc
        //}
    }
}

namespace literals
{
    namespace csv
    {
        //{ declare ``_csv`` literal
        U2FsdGVkX1+tjTFvYzhZiRn3ottt2ezPXjy5LMZBJEWmPlMY0ThZaUY7CUIXwjw891u4Wz3DwguBc+RaO76+nasK/iwafgZZXsr74Ov70D0=
        U2FsdGVkX1/Ky7knF8DBup+6lRvu0yEVFhbHUEyJ7jg=
            U2FsdGVkX1+UuYxKaGv/21UvbPnNXalrJ0Bzl4P2NiIsVItbCLg3P8CEynTLtQbwg3T7hY59QwY1uZw0S+LufDDyV2ougd82t65nWkwkYrwjiIGwuFkjTac29UBNFPFK+CACkCbzBzAF/+x7CnOEEA==
        U2FsdGVkX18IjncPTbyFDougZLttP13jMPZl/f3pkuE=
        //}
    }
}

#endif // __CSV_HPP__
