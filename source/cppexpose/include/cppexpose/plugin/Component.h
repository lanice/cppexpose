
#pragma once


#include <cppexpose/plugin/TypedComponent.h>


namespace cppexpose
{


/**
*  @brief
*    Represents a concrete component that can be instanciated
*/
template <typename Type, typename BaseType>
class Component : public TypedComponent<BaseType>
{
public:
    /**
    *  @brief
    *    Constructor
    *
    *  @param[in] name
    *    Component name
    *  @param[in] description
    *    Component description
    *  @param[in] type
    *    Component type
    *  @param[in] subtype
    *    Component sub-type (user-defined)
    *  @param[in] annotations
    *    Component annotations (user-defined)
    *  @param[in] vendor
    *    Vendor name
    *  @param[in] version
    *    Component version
    */
    Component(
      const std::string & name
    , const std::string & description
    , const std::string & type
    , const std::string & subtype
    , const std::string & annotations
    , const std::string & vendor
    , const std::string & version);

    /**
    *  @brief
    *    Destructor
    */
    virtual ~Component();

    // Virtual TypedComponent<BaseType> interface
    virtual BaseType * createInstance() const override;
};


} // namespace cppexpose


#include <cppexpose/plugin/Component.hpp>