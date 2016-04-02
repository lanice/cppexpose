
#pragma once


#include <cppexpose/typed/Typed.h>


namespace cppexpose
{


/**
*  @brief
*    Representation of an arbitrary (unknown typed) value
*/
template <typename T>
class TypedGeneric : public Typed<T>
{
public:
    /**
    *  @brief
    *    Constructor
    */
    TypedGeneric();

    /**
    *  @brief
    *    Destructor
    */
    virtual ~TypedGeneric();

    // Virtual AbstractTyped interface
    virtual std::string typeName() const override;
};


} // namespace cppexpose


#include <cppexpose/typed/TypedGeneric.hpp>
