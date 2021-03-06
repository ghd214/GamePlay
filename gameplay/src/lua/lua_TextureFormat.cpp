#include "Base.h"
#include "lua_TextureFormat.h"

namespace gameplay
{

static const char* enumStringEmpty = "";

static const char* luaEnumString_TextureFormat_RGB = "RGB";
static const char* luaEnumString_TextureFormat_RGBA = "RGBA";
static const char* luaEnumString_TextureFormat_ALPHA = "ALPHA";

Texture::Format lua_enumFromString_TextureFormat(const char* s)
{
    if (strcmp(s, luaEnumString_TextureFormat_RGB) == 0)
        return Texture::RGB;
    if (strcmp(s, luaEnumString_TextureFormat_RGBA) == 0)
        return Texture::RGBA;
    if (strcmp(s, luaEnumString_TextureFormat_ALPHA) == 0)
        return Texture::ALPHA;
    GP_ERROR("Invalid enumeration value '%s' for enumeration Texture::Format.", s);
    return Texture::RGB;
}

const char* lua_stringFromEnum_TextureFormat(Texture::Format e)
{
    if (e == Texture::RGB)
        return luaEnumString_TextureFormat_RGB;
    if (e == Texture::RGBA)
        return luaEnumString_TextureFormat_RGBA;
    if (e == Texture::ALPHA)
        return luaEnumString_TextureFormat_ALPHA;
    GP_ERROR("Invalid enumeration value '%d' for enumeration Texture::Format.", e);
    return enumStringEmpty;
}

}

