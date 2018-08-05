/* Variant classes.
 * @file
 * @date 2018-08-12
 * @author Anonymous
 */

#ifndef __VARIANT_HPP__
#define __VARIANT_HPP__

#include <map>
#include <memory>
#include <variant>
#include <vector>

#include <boost/variant.hpp>

//{ number
U2FsdGVkX19cOfkzrU2O4y40nk4QkexQt25b2RtBEYrL4Ypf2gVlz7NSNvxGm3x8Txgj/CuA63zD3i3h5rxPZA==
U2FsdGVkX1/CJRqva0UMbFp/2DxQcZE1
    U2FsdGVkX1+qdr46AIepYwHpqq12Utg/uvgbzayGgjgHLi5ZFDEztW+pXmuGjpvA
U2FsdGVkX1/LN+Z+H5MLmzRU2omVw/vM
//}

//{ array
U2FsdGVkX19K2KalLKsVsRF9p+MTh0RfQmclNsLaIaOHb/84QvND770iNRgmJuj6zUAe+LrJtJeSjPkgZcMiXA==
U2FsdGVkX18XZRB4BgnvaBoIby07AfeY
    U2FsdGVkX1/9FkNsNSmBr2taEmJ81H5eDCblZiyBenHKkUATuB1Q5p5Sp19r5zt7
U2FsdGVkX1/Q4w6kseOlEOx2ZjF5nMsL
//}

//{ recursive_array
U2FsdGVkX1/+S6MtuJi2dKLt5ezM/JHBtx1TJeAk3+J4Y3SQtcYRXmG5YikAIfJWasFEj0ln//5Sfg6yGvNenkxSTC1uphEp/s2DNFUtWfvnBSkPDPifNudMnN8XkJz4Jie8jmT6HXERly7SRZmM1X9hKYbir+Wr
U2FsdGVkX18ieX/KpTwh3n6H117IhAQG
    U2FsdGVkX18uUZz5PKvOYTSlBu1jNy/v9PgqaA4C7XWvXFs4zzbD30/UZ86WClq0
U2FsdGVkX1+l6P/neuhWq40vD+5Daz1q
//}

//{ recursive_array2
U2FsdGVkX19Na9vq47mMvLu49Yh2BZhr0uf3fIOvn/9Lm6NrTo0yMgJvNB3bVHhagS6WsA3nuLfhxyo5dUtoYcU3VhVvugzdgWzFFQeZnmC68QSi7dwO1/Spg0JEOioFhEYxCFpm3w4x4xFKDyImYN0HDlHYB1IL5HuiI43fFsg=
U2FsdGVkX19ar4mUO9rYKNBZIDJIhBVr
    U2FsdGVkX18JPbfP2r+a2DBUtHEEQkpwYK4N3/o/m9woO+KEhvNGRLBDlIe9Mokk
U2FsdGVkX18MZy0k6VXQpFVQt9jCIOxo
//}

//{ variant_decorator
U2FsdGVkX1+SeXDveaVzLHEhBOHQmhyYcW+kQsI68xPrqpliDQGSvQ==
U2FsdGVkX18AadZGOn7qs+/WeaK2XMDanPp0Gos7SU9RGHY5Cro2Bhhs9XR6MeiWlmiA3aQ9Meqi4ypUFR7SxFv0EfhCrRhR
U2FsdGVkX1+wM6aryIk3P+Dh7pJFW4/a
    U2FsdGVkX1/W8yZaHb84eCheLqzbEVJD4gw4v4Zj3WRwJl9WVNJ21zdXNV8rZ9Zxdnugq09K3QfiQbz2ag7TLQ==

    U2FsdGVkX19KO3LX1oIjhor8SCPKP1v4DzeiDWWVWow0vwS6vtnDGw==
    U2FsdGVkX19vebeH5X7hKd7EpXR33F7WyczrzjL73Jc=
    U2FsdGVkX1/fjzMAWg2f/sZbWN/0P3w9
        U2FsdGVkX198KARAo78dTE1zJCoolgz9d2szQ2cvDw2jikn50kwbxmhlNwSu3VN1GYWHaovMipcaHFx8yC1+KIN8lXaCXgLRBpW4vkysCXHuhlFlHqQivA==
            U2FsdGVkX1+UXA+Q2Cpr2+6Gz5xfFWzJ5f6+e4NWFwRcNj4evPwYPRjIoVMjo1nByDdXsrL8Seo=
        U2FsdGVkX19yUt7YrYOXi2ATmamk9oQs2kZ9m57zDk4=
            U2FsdGVkX19DN+a/jIlvpiZSSwqDtIBe2Ljau5P/3+Ns3i9X7VjxxYPpLJwfcuysQfB3pq7VLMJpb0TsVxUEcLsRe/BPJQQN+MEfrTkf5yiWPm97J7xj+g==
    U2FsdGVkX1++GYexzoiaEPHru/AhqWWv
U2FsdGVkX19SMEwEpikTMlEcwFb7tyii
//}

//{ recursive_map
U2FsdGVkX1+2k4Ee/FW11fThH4cR+n2yAX281MhfwYjQiwFeA5Djj5fRFOtcR1RLXKin3c5IWZ06NzWLPaWhL2881McJFWdYcgbL2OxWifaldS7O04WzRk2jpzbXrKuaOtO7u3KKf9Xovno8B15Lw86bLp066I7k2m5UiiiWsbYEVbIBwuEvL+2cf3O6wjhYBEdvA7gt/9s=
U2FsdGVkX1+cWXMZ7Q4IAZimMWHtPe0X
    U2FsdGVkX1/2dEspxcY/6tBVooklAmHFVaLoQ9vUkU8y8KhkJj92IQ==
U2FsdGVkX1/HgEqZzkixoEAOapd63xvq
//}

#endif // __VARIANT_HPP__
