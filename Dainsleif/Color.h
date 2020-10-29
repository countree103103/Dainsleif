#pragma once
#include <array>
#include <cstdint>

class CColor
{
public:
    std::array< uint8_t, 4 > color;

    CColor ( ) = default;

    CColor ( const int32_t r, const int32_t g, const int32_t b ) : color ( { 0, 0, 0, 0 } )
    {
        Set ( r, g, b, 255 );
    }

    CColor ( const int32_t r, const int32_t g, const int32_t b, const int32_t a ) : color ( { 0, 0, 0, 0 } )
    {
        Set ( r, g, b, a );
    }

    CColor ( const float r, const float g, const float b ) : color ( { 0, 0, 0, 0 } )
    {
        Set
        (
            static_cast< uint8_t > ( r * 255 ),
            static_cast< uint8_t > ( g * 255 ),
            static_cast< uint8_t > ( b * 255 ),
            255
        );
    }

    CColor ( const float r, const float g, const float b, const float a ) : color ( { 0, 0, 0, 0 } )
    {
        Set
        (
            static_cast< uint8_t > ( r * 255 ),
            static_cast< uint8_t > ( g * 255 ),
            static_cast< uint8_t > ( b * 255 ),
            static_cast< uint8_t > ( a * 255 )
        );
    }

    __forceinline void Set ( const int32_t r, const int32_t g, const int32_t b, const int32_t a )
    {
        color.at ( 0 ) = static_cast< uint8_t > ( r );
        color.at ( 1 ) = static_cast< uint8_t > ( g );
        color.at ( 2 ) = static_cast< uint8_t > ( b );
        color.at ( 3 ) = static_cast< uint8_t > ( a );
    }

    __forceinline int R ( )
    {
        return color.at ( 0 );
    }

    __forceinline int G ( )
    {
        return color.at ( 1 );
    }

    __forceinline int B ( )
    {
        return color.at ( 2 );
    }

    __forceinline int A ( )
    {
        return color.at ( 3 );
    }

    __forceinline static CColor Red ( )
    {
        return CColor ( 255, 0, 0 );
    }

    __forceinline static CColor Green ( )
    {
        return CColor ( 0, 255, 0 );
    }

    __forceinline static CColor Blue ( )
    {
        return CColor ( 0, 0, 255 );
    }

    __forceinline static CColor White ( )
    {
        return CColor ( 255, 255, 255 );
    }

    __forceinline static CColor DarkGray ( )
    {
        return CColor ( 30, 30, 30 );
    }

    __forceinline static CColor Magenta ( )
    {
        return CColor ( 255, 0, 255 );
    }
};
