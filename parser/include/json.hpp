/* Json object.
 * @file
 * @date 2018-08-09
 * @author Anonymous
 */

#ifndef __JSON_HPP__
#define __JSON_HPP__

#include <map>
#include <string>
#include <vector>

#include <boost/spirit/home/x3.hpp>
//? Why I need ``std_pair`` header? Do I need one for std::map?
#include <boost/fusion/adapted/std_pair.hpp>

#include "parser.hpp"
#include "quoted_string.hpp"
#include "variant_decorator.hpp"

/* Json EBNF specification (https://www.json.org)
 *      string := \" ([^\"] | \\\")* \"
 *      number := [0-9]+(\.[0-9]*)?
 *      boolean := "true" | "false"
 *      nullable := "null"
 *      value := number | string | boolean | nullable | array | object
 *      array := '[' value (',' value)* ']'
 *      key_value := string ':' value
 *      object := '{' key_value (',' key_value)* '}'
 *      json := array | object
 */

namespace types
{
    namespace json
    {
        //{ describe json data types
        U2FsdGVkX19BLrNOp7y/Us0KyFaOOmhaFrTafGC1ORP/OoedSNHwsA/O5cowZEjKsqtpG/Y2dtQuvxzXjkFusA==
            U2FsdGVkX1893m5/2F93xEry4BhZqzdsvo6iLvKCPuj7Zr7qvfr91A==
            U2FsdGVkX1+d6UhaRXGBmEU7crgfupHI1Q/3GBoMdSnT1rYSa3i0IA==
            U2FsdGVkX18aZhLaSniMef3gh/9Eh/WIQ3TlcRcpsfop5o71fJbRZA==
            U2FsdGVkX18hxkFj5WSs/7TG/puzAXncjikLYAuN0/Z3QCnBVAnbzQ==
            U2FsdGVkX18VHgJg3xfULrxpkLi7eXmrOG1E8hRMSdPFFrV3v9uEXeOja1lWd2ON
            U2FsdGVkX19bfEW+yMlk8PlydSSeCtWsK1oqR1WlL6P+96CjdOOvyOMn6xG+OBWHQ+cKtSPplwwEuKKuSpw26Q==
            U2FsdGVkX1+wRGo0tb7Dx0sZn1Ki1jw3+33HErAEahWh1u1DJY81JuupqlDN0wkgrMVu+w3pEJ/vQZ8w9AVxDg==
            U2FsdGVkX1/FDdjr/nCljWGeD3p/d7t0AmYGzQomF8QaZ92cAs7uNbGLXyuGcE/fM16GLksuJKAdPsFHsiWtXw==
        U2FsdGVkX1+EzupiCU8XrFI/4vrnGkekkQ9ujZBe1fg=

        U2FsdGVkX1+KnkxxW8bNjcthiHWvD+TIfvkDoCv+rEt888BLMv01AiyscI53jMUSomwGsq5sKOTyLNqfUK2Ih0vbmYnYzUzO
        U2FsdGVkX1+oCP0YCagxIC4Zx8pi/FN54EgX89YM3QkREV3DTFZpmW65apdBL6AV1zsfVtGvyrhhRZdidRau6LBWYgXgR5YbUI3WdKBTDYI=

        U2FsdGVkX1+UkrjwoMEI/Hnack6s0dJZSXa0qRyg7tivMXFo3e0H/Z0hDVpgFB9q9Co6JVrB0lrFx82XK3pulLqEU+p+phZlK9IEw8h3WKA=
        U2FsdGVkX18pcIy9Vc37P8NkNjRwG71Q7uhLID9Oyw0=
            U2FsdGVkX19HJ3CHZuOA4XbjXoI0fwvlrkPQzvxvja9vg+voJGU8Kr4KnNKUm7uYSfdlpDf59LBde4IXBpe3wBszSEKD4EOY1YroriGoDfw=
            U2FsdGVkX1/Dza58kZXqrxZ14cSXbrk/pOg5F1jqDi/e6vehiiXznq5Cp9nSBlzHwDnzSoBWSgjQ79YoOS8Ax1Po99bS7U8u
        U2FsdGVkX19oWSUGDRrrl+XuZQKMljf9gvw6JxDBb00=
        //}
    }
}

namespace parser
{
    namespace json
    {
        //? Why I need ``sfloat_`` instead of just ``x3::float_``?
        //? What is the syntax ``class array_``? Is it wrong?
        const auto sfloat_ = x3::real_parser<float, x3::strict_real_policies<float>>();

        //{ describe json grammar
        U2FsdGVkX19v7tpbRqKT+/zawE89Pkd0+aiLyqLFvngIXw2JmXB1IEQkPhhWZDJKzaYau0KRFMq6y4uU9UFx1TXCaY4HtAMx
        U2FsdGVkX1+dxZ4DsO2m2BsFdzKIMi9Qyp1tEy7xAIO3yiDZQsF6fQQ0+mEJ30offQcVB6LMHucJJijj1lIdK25TU4920BKdKaxnRI12jHE=

        U2FsdGVkX1/b61nwX3AkKe/4h42CX74+AEZCZ671fIUo+HsBfmpVguu72hScZUITcHITfNtBcRqhpa+UtKCS/73FbhPwRU9uXuDJHfKQF03oh6AS8JaTng==
        U2FsdGVkX1/px0pkR41T14r66lugGxR05nZRsMyMQaxwc+m6Qbs2OBJoHtHYyaSIOGoJvm0TnzmuZx9OFC6UoxLBJLlUAQv2Eu7bo51yxuumqMla62NJSpE5GQWhPfwh
        U2FsdGVkX1/U4fFc1IrbybDm7B4hPntJl3qBmNOanUJk2rmr22MR70w1RoIuo+SbsgwjfUJwt/jobY8szTS767HXfgnYQxjkt30N5RLTYZ7LT2blLwv2EQ==

        U2FsdGVkX1/5D2jem826b6H1anRi4jmgGRjfMhEDbSf58IOEm/cxLUHlEbu4lJ55P6cv09qk35Hd/vd51NLuU6VA3oM298aER6jdWCq8teYlBhE4E1Ba/1aZQshnUn50
                         U2FsdGVkX1/Y0ahOwT2JYpXNk5cCmjwxGp1kqboCrUMzXkwuDtF5mEj3tdTZjweG+hZN66Gn4Ekxzqhn5TvXZchtLLI2dj1rfzbSB0B8Rk36CfYgvgjQVgWKhNq+TMyoaAwiDHyGxft2Ql7TFqGOBg==

        U2FsdGVkX1/UVZgRvmByCEWSbKOd72Wta9iRohbofrIn+TVQWxih5mpehWMN0cd2hne+5R/ObAHGZqQxzbHrBV70mnH5ShIFfTQzfUSO1cjPFVsnurVTVFH2rs0zNDMuu/M54LIhvko06+SKCyjL8BIih4aBjo9rBhRQEpTLhnVEnjrNNkksmw==
                             U2FsdGVkX18Bl7dm8dmr4v0g6aVn7YnDbukWbyqIOm1VAZrFCeOUOTz2mYVRFBis7e3X4wYz90gVhbUu/jCb42ZlfgIu6ke9oAA8Yri80+Q=

        U2FsdGVkX18RnRnpP25JgQW/q/GGNeWm8txA1qb2fEvKI1ryXnure1tTWqMBQoY0Zx0Zb7Tr9cEBBaUOGcdfhfhVyKtcFN3+msmIbkhy1ug=
        U2FsdGVkX1+gEsyKncwSSbE37GnzOPYvecgH7P22WLRz8W4XXJevtgz1dCmCcYtlo7EMH4HQI3YibkyhsoIumRbEjhAG12MHx3fxMPPaXtA=
        U2FsdGVkX1/6jJIwR4m7MgpmaUf/PRJ5pvNkRvTx3G02Y0JzEEH2pyrkeUkFKZhMqkT7NNvHjsilvk+HQtyMvg==
        //}

        BOOST_SPIRIT_DEFINE(array, object, json);
    }
}

namespace literals
{
    namespace json
    {
        //{ describe ``_json`` literal
        U2FsdGVkX183ZJ2ZZ2dI3yLxUpIm1sMNlpunskYPHnt9XLE8kA6x9Tu+GyagcICCv1CjlJ6Q3ASnWepnmulDBz7n9ic2il/ODQc5BA8l4VA=
        U2FsdGVkX1+zu/jG3289vLuNxa6DGi68BD42P3F38m8=
            U2FsdGVkX1/1i8wBZdrRgNQ+c5KXkJiWGofKgkbhH21lagxuEysH6WpfkFbig/5ha5oRX2ifgVEaLvq2iP+N3LtNvs5GsgFWptkltP+01r7GQdnzSvN5jbjNP0/ynbBLPORUttw9Vw6B5tlmLRtqSt1DjU170TLSvXH/XqqFf9A=
        U2FsdGVkX1+L+PrzE6n+KYLUBBhGaRAuuqujsxastEQ=
        //}
    }
}

#endif // __JSON_HPP__
