/*================================================================================
  code generated by: java2cpp
  class: org.xml.sax.ext.Locator2Impl
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_XML_SAX_EXT_LOCATOR2IMPL_HPP_DECL
#define J2CPP_ORG_XML_SAX_EXT_LOCATOR2IMPL_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace org { namespace xml { namespace sax { class Locator; } } } }


#include <java/lang/String.hpp>
#include <org/xml/sax/Locator.hpp>


namespace j2cpp {

namespace org { namespace xml { namespace sax { namespace ext {

	class Locator2Impl;
	class Locator2Impl
		: public cpp_object<Locator2Impl>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)

		Locator2Impl(jobject jobj)
		: cpp_object<Locator2Impl>(jobj)
		{
		}

		local_ref< java::lang::String > getXMLVersion();
		local_ref< java::lang::String > getEncoding();
		void setXMLVersion(local_ref< java::lang::String > const&);
		void setEncoding(local_ref< java::lang::String > const&);
	}; //class Locator2Impl

} //namespace ext
} //namespace sax
} //namespace xml
} //namespace org


} //namespace j2cpp

#endif //J2CPP_ORG_XML_SAX_EXT_LOCATOR2IMPL_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_XML_SAX_EXT_LOCATOR2IMPL_HPP_IMPL
#define J2CPP_ORG_XML_SAX_EXT_LOCATOR2IMPL_HPP_IMPL

namespace j2cpp {


template <>
local_ref< org::xml::sax::ext::Locator2Impl > create< org::xml::sax::ext::Locator2Impl>()
{
	return local_ref< org::xml::sax::ext::Locator2Impl >(
		environment::get().get_jenv()->NewObject(
			get_class<org::xml::sax::ext::Locator2Impl::J2CPP_CLASS_NAME>(),
			get_method_id<org::xml::sax::ext::Locator2Impl::J2CPP_CLASS_NAME, org::xml::sax::ext::Locator2Impl::J2CPP_METHOD_NAME(0), org::xml::sax::ext::Locator2Impl::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

template <>
local_ref< org::xml::sax::ext::Locator2Impl > create< org::xml::sax::ext::Locator2Impl>(local_ref< org::xml::sax::Locator > const &a0)
{
	return local_ref< org::xml::sax::ext::Locator2Impl >(
		environment::get().get_jenv()->NewObject(
			get_class<org::xml::sax::ext::Locator2Impl::J2CPP_CLASS_NAME>(),
			get_method_id<org::xml::sax::ext::Locator2Impl::J2CPP_CLASS_NAME, org::xml::sax::ext::Locator2Impl::J2CPP_METHOD_NAME(1), org::xml::sax::ext::Locator2Impl::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > org::xml::sax::ext::Locator2Impl::getXMLVersion()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

local_ref< java::lang::String > org::xml::sax::ext::Locator2Impl::getEncoding()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

void org::xml::sax::ext::Locator2Impl::setXMLVersion(local_ref< java::lang::String > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype()
		)
	);
}

void org::xml::sax::ext::Locator2Impl::setEncoding(local_ref< java::lang::String > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(org::xml::sax::ext::Locator2Impl,"org/xml/sax/ext/Locator2Impl")
J2CPP_DEFINE_METHOD(org::xml::sax::ext::Locator2Impl,0,"<init>","()V")
J2CPP_DEFINE_METHOD(org::xml::sax::ext::Locator2Impl,1,"<init>","(Lorg/xml/sax/Locator;)V")
J2CPP_DEFINE_METHOD(org::xml::sax::ext::Locator2Impl,2,"getXMLVersion","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::xml::sax::ext::Locator2Impl,3,"getEncoding","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::xml::sax::ext::Locator2Impl,4,"setXMLVersion","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::xml::sax::ext::Locator2Impl,5,"setEncoding","(Ljava/lang/String;)V")

} //namespace j2cpp

#endif //J2CPP_ORG_XML_SAX_EXT_LOCATOR2IMPL_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION