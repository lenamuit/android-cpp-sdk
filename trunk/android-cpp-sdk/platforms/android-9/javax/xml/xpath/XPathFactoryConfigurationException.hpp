/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: javax.xml.xpath.XPathFactoryConfigurationException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_XML_XPATH_XPATHFACTORYCONFIGURATIONEXCEPTION_HPP_DECL
#define J2CPP_JAVAX_XML_XPATH_XPATHFACTORYCONFIGURATIONEXCEPTION_HPP_DECL


namespace j2cpp { namespace javax { namespace xml { namespace xpath { class XPathException; } } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Throwable; } } }


#include <java/lang/String.hpp>
#include <java/lang/Throwable.hpp>
#include <javax/xml/xpath/XPathException.hpp>


namespace j2cpp {

namespace javax { namespace xml { namespace xpath {

	class XPathFactoryConfigurationException;
	class XPathFactoryConfigurationException
		: public object<XPathFactoryConfigurationException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit XPathFactoryConfigurationException(jobject jobj)
		: object<XPathFactoryConfigurationException>(jobj)
		{
		}

		operator local_ref<javax::xml::xpath::XPathException>() const;


		XPathFactoryConfigurationException(local_ref< java::lang::String > const&);
		XPathFactoryConfigurationException(local_ref< java::lang::Throwable > const&);
	}; //class XPathFactoryConfigurationException

} //namespace xpath
} //namespace xml
} //namespace javax

} //namespace j2cpp

#endif //J2CPP_JAVAX_XML_XPATH_XPATHFACTORYCONFIGURATIONEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_XML_XPATH_XPATHFACTORYCONFIGURATIONEXCEPTION_HPP_IMPL
#define J2CPP_JAVAX_XML_XPATH_XPATHFACTORYCONFIGURATIONEXCEPTION_HPP_IMPL

namespace j2cpp {



javax::xml::xpath::XPathFactoryConfigurationException::operator local_ref<javax::xml::xpath::XPathException>() const
{
	return local_ref<javax::xml::xpath::XPathException>(get_jobject());
}


javax::xml::xpath::XPathFactoryConfigurationException::XPathFactoryConfigurationException(local_ref< java::lang::String > const &a0)
: object<javax::xml::xpath::XPathFactoryConfigurationException>(
	call_new_object<
		javax::xml::xpath::XPathFactoryConfigurationException::J2CPP_CLASS_NAME,
		javax::xml::xpath::XPathFactoryConfigurationException::J2CPP_METHOD_NAME(0),
		javax::xml::xpath::XPathFactoryConfigurationException::J2CPP_METHOD_SIGNATURE(0)>
	(a0)
)
{
}



javax::xml::xpath::XPathFactoryConfigurationException::XPathFactoryConfigurationException(local_ref< java::lang::Throwable > const &a0)
: object<javax::xml::xpath::XPathFactoryConfigurationException>(
	call_new_object<
		javax::xml::xpath::XPathFactoryConfigurationException::J2CPP_CLASS_NAME,
		javax::xml::xpath::XPathFactoryConfigurationException::J2CPP_METHOD_NAME(1),
		javax::xml::xpath::XPathFactoryConfigurationException::J2CPP_METHOD_SIGNATURE(1)>
	(a0)
)
{
}



J2CPP_DEFINE_CLASS(javax::xml::xpath::XPathFactoryConfigurationException,"javax/xml/xpath/XPathFactoryConfigurationException")
J2CPP_DEFINE_METHOD(javax::xml::xpath::XPathFactoryConfigurationException,0,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(javax::xml::xpath::XPathFactoryConfigurationException,1,"<init>","(Ljava/lang/Throwable;)V")

} //namespace j2cpp

#endif //J2CPP_JAVAX_XML_XPATH_XPATHFACTORYCONFIGURATIONEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION