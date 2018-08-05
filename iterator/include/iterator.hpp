/* Image iterator.
 * @file
 * @date 2018-08-05
 * @author Anonymous
 */

#ifndef __ITERATOR_HPP__
#define __ITERATOR_HPP__

#include <algorithm>
#include <type_traits>
#include <vector>
#include <utility>

#include <boost/iterator/iterator_adaptor.hpp>

//{ image iterator
U2FsdGVkX1/5K0JkIlwEysWdbhcNDxwiXys+hOomfsNxfMKihw/0uwwG5jzLDoOg
U2FsdGVkX18N1Mqwj/NwqfKFjskZGnLFaEnXioNSi6Zrw73Yv/X3k/LJSDJ7NC+z5pIRWdbb4ous6CM0MsJw6DOI0t2S3++L7wUy20RSZ41oXDtibITucU/AnyJnh6I+gzw+KzqVwcjaul9lAxmtNFOKPc9Wbn+zTYwRiG5By4dBomtEExwlS7Ndkfh9q0EaKrtxnqX9yuCxa89bTqUTTThEOv4z9h4/
U2FsdGVkX191F9fMBegv+wcBGve+GMWE
U2FsdGVkX1+1sBXMdBNIlZI+670FLuf62Ede+atmGJM=
    U2FsdGVkX1/adWD4SOlOEYpO6PLFMUmft/q8akjMujNmMep4SlgtwnqkEhbu37nKr9dH2hEElvwmI9l0Q9pC9hbkCQaqrQkOrdNB6Zioaeo=
        U2FsdGVkX19pVyLtmRJX+psqhlcs4fR8a2l+bkeWKZJbV+g7qyK5e/zPZz55TPNJEZY0ouHT+Lv7YlWqxRMTqg==
        U2FsdGVkX1/Gql9bMC3m4fecOdRPlVPBAK4ms13GyNdh7VidlH51Ww==
        U2FsdGVkX1+X/wg/DLFmFpje1fIqs5OiBQx/gFOk4A3W6y74ms0tQw==
        U2FsdGVkX1/FKvccv+PvpuBiBgISoEhL4qCSqkNG45vK+Oxqv8cQdwkAGh4XisgP
    U2FsdGVkX1+ZYgrrrNeUSYLBPxe7kihU

U2FsdGVkX1+rYn7jjj2K0aSS+wqWIJELmYVfDGwQfgk=
    U2FsdGVkX1+UUjloxCkVQ1yXKkgmOJwp8WLL03BAqE5sI+cMER36dM35YuL+JdNmokfgcbI7OMS+3cx4OJsOag==
    U2FsdGVkX19JaTPf4Bgc+i5KY5GnUjON/exrrYqjSccka5+jjZ01xhl9PS85gLwb/dI7wvkc0w3Hf8qwpBDFS+FFllaxKaL/LXa7UurPTroESWVU7Wma5g==

    U2FsdGVkX1+D4RazIIB2r6Hm5p5Si5AgiofUG/WdH14K/kQUsMCD6A==
    U2FsdGVkX1+UQfGdDTMBafs4D/MKulEh
        U2FsdGVkX1+x4Ii4Ppwirq5TFNgMbd1QB+qQafiBwfLDvloYwuAHi1K1fHBFWOAUprpB4d6j4ds3hsgO38mdA/V2kgplcY2kio0kkJ5puWYj+TiIcWMGUlxPUHrpe9tX
        U2FsdGVkX1+ql2Wi+zF9LfgEbQbV7EDTKcWD1UCv2FQ=
            U2FsdGVkX1+DjT0PHRwYZU73DkVSkaupPnjcN6j7bsS8XA4GKx4SXoBjjrRD4NR6
            U2FsdGVkX18P0Hq4kb+yDuMmjkAeye/vPAdEsNlnKtZeAMlvd50Os5UnywHs+AEjwT7DJB+zUOQUAw4P+3A5FQ==
        U2FsdGVkX1+wBVJuVIsrnKbIHwR7+u94tcQDpetvzG4=
    U2FsdGVkX19sU1Inr0L096Rsu56ri2YW

    U2FsdGVkX19gnsBdSHPYqKQSvgnLN6KR976TURimSEAbZET+8hEbaw==
    U2FsdGVkX185xpJo6HabOK4dzUKvZ5sp
        U2FsdGVkX18j3SnhRAuhP/4SLVoyBqtbMDxJyFENcfsxserZEPemAkIiHElePpKlwUWjHHXqvXsIK8SZu4i9Pok/w/yl3yzyYImaclDyGBA=
        U2FsdGVkX1/uKlgoXtYhBepoQnP8I7p5gqW+HQcDWgs=
            U2FsdGVkX1+A2YtSzlQnxsJ4lUSf1k2Gr6oupR0ya5mndpiZUjn0cbb5jJF0vaMn
            U2FsdGVkX1/mBpn21hrQJDVuAHLLKDKXeBfmWbsULJftyvIu53CtMSpo2n46uKLp+BGPgWih42UwFsNpUi8NKCMiD0bkTAFHDl2T7bOB2/o=
        U2FsdGVkX1/bvQ3oia9mWuranjU0/kcasOLaeU+T5L8=
    U2FsdGVkX18vrAyM+YF/sqhSfjSt/4cK

    U2FsdGVkX18yb02KBBvRs7YNK19Qcg84d9rAMUL39Bs2GLRxKzQ80dUjOqQ6N+T2
    U2FsdGVkX1+f8KBxqgc3c9Lyl6HChwW4
        U2FsdGVkX1/qiL4FRUzzo5RVkiI4PbqBQ6Q2NKiVmt8SVpiwUO2wWAFbEZdbC4oo90GncROhRhrnPUkERwsieByf2tCmqf+c9M10DYI/sn4=
        U2FsdGVkX1+vHMzTwBQQincbmZPrRJn7GAZBeNfgUEsk2Djlqw6RZw/w54oq2aPdTEgqeWI96wlWB05tNxPJfd+dDgrcwblIJz8QJoSaGk+/IR6Uk/SCnw==
        U2FsdGVkX1/CUdWIWsGPU40uxGTy8wg9EU8gKzMUQTxbCcWSC8YJLg==
            U2FsdGVkX1/OOEWWkjDd521S/PC3Nvz/vwFOHdnr1/29P7SCnLdi0ajY5an1JqR82tX8Rm/5vU6OIBjr3D8hPjsFPI3i9Fv4V44juCvNwGSVM15oQsfBChid5/rAt0a4c6SKgIODkIg=
        U2FsdGVkX1+o07vuvf/SXSKbfIOT51oxEKpHjLRLkWc=
        U2FsdGVkX18j4mD0TRiJeoRKL73Vm0DLbhMYcB+qls4=
            U2FsdGVkX1+r15hU5o6H6A2abFRh4R4K3G8BN+wu8eOZ12A6dgK2TA==
            U2FsdGVkX1+5zC7uX/38iCuXt0LZZTEyvo1ywcV4X6n/D/3xo+Vo8XZaFLpUhV8a7tfOT78ec5WjCJbeNyuStTH8lvaquFMVmHS6JRYbX+DnCiEImlW+kFiwaxvgfo4GGY+vM78JtHXnFyaGuyraAw==
        U2FsdGVkX18AzjMYRAcZzLN3DlXmAUMCLjd9gFetp88=
    U2FsdGVkX1+IXR4QKdXdc2O+62dyXTP0

    U2FsdGVkX18pZwbZu5gh5nZ6YJ+cg8F31FXxVqvqUS6b1Mseb3vQwYYOPJGdIo/pag89O1DxDjoghUn0b8SQUhR/dcviPeuNZdSNb4MVvoQ=
    U2FsdGVkX18SSdo/UKnkXzj3g/Uzj9fM
        U2FsdGVkX18mLGA0SZ1QPDDv04DhZWQXPkF4W3dGQGuoAXACaW/wqknRfSLXligF00N2v5tJcuytGQVgA0vIUh2H4SOZtzsNgU7qfZC8fq5zJrHNFWic0zch8xVETWBjU+cetl9UPLzrlzg5YwbDQxERq0r74gcSkjOuTJRcZf5WOQ19XWb2thMlWVNSOyYCGP4ny+tveJ6REiMNT1om5pNXvEqIy875X00oRakYpQLs2NomSVHvpMpeCFWCSMru
    U2FsdGVkX1+/wUQjH0r+qzu6iu6/Lw7H

    U2FsdGVkX1+YTE128mt78Wa4sjEIKq83ITeyg44bCXKz4ILBAMCP4Q==
    U2FsdGVkX1/ph1golwhMg43WPeOhh/qV/cevf3q/zifSTdPLZscIcw==
    U2FsdGVkX1+15wzamIFs3QYJrPtM5BHgI3k6Ni/MXivLFrSeSUngDw==
U2FsdGVkX1+ociFoknxcFIeSn4GXonUl
//}

template<class Container = std::vector<uint8_t>>
class image
{
public:
    image(size_t width, size_t height, size_t stride):
        data(stride * height),
        width_(width),
        stride_(stride)
    {}

    auto begin()
    {
        return image_iterator(data.begin(), width_, stride_);
    }

    auto end()
    {
        return image_iterator(data.end(), width_, stride_);
    }

    auto begin() const
    {
        return image_iterator(data.begin(), width_, stride_);
    }

    auto end() const
    {
        return image_iterator(data.end(), width_, stride_);
    }

private:
    Container data; // image data including strides. Access by (x, y): data[y * stride_ + x]
    size_t width_;
    size_t stride_;
};

#endif // __ITERATOR_HPP__
