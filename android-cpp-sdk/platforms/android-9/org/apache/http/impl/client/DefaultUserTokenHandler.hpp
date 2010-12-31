/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.impl.client.DefaultUserTokenHandler
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_CLIENT_DEFAULTUSERTOKENHANDLER_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_IMPL_CLIENT_DEFAULTUSERTOKENHANDLER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace protocol { class HttpContext; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace client { class UserTokenHandler; } } } } }


#include <java/lang/Object.hpp>
#include <org/apache/http/client/UserTokenHandler.hpp>
#include <org/apache/http/protocol/HttpContext.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace impl { namespace client {

	class DefaultUserTokenHandler;
	class DefaultUserTokenHandler
		: public object<DefaultUserTokenHandler>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit DefaultUserTokenHandler(jobject jobj)
		: object<DefaultUserTokenHandler>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<org::apache::http::client::UserTokenHandler>() const;


		DefaultUserTokenHandler();
		local_ref< java::lang::Object > getUserToken(local_ref< org::apache::http::protocol::HttpContext >  const&);
	}; //class DefaultUserTokenHandler

} //namespace client
} //namespace impl
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_CLIENT_DEFAULTUSERTOKENHANDLER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_CLIENT_DEFAULTUSERTOKENHANDLER_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_IMPL_CLIENT_DEFAULTUSERTOKENHANDLER_HPP_IMPL

namespace j2cpp {



org::apache::http::impl::client::DefaultUserTokenHandler::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

org::apache::http::impl::client::DefaultUserTokenHandler::operator local_ref<org::apache::http::client::UserTokenHandler>() const
{
	return local_ref<org::apache::http::client::UserTokenHandler>(get_jobject());
}


org::apache::http::impl::client::DefaultUserTokenHandler::DefaultUserTokenHandler()
: object<org::apache::http::impl::client::DefaultUserTokenHandler>(
	call_new_object<
		org::apache::http::impl::client::DefaultUserTokenHandler::J2CPP_CLASS_NAME,
		org::apache::http::impl::client::DefaultUserTokenHandler::J2CPP_METHOD_NAME(0),
		org::apache::http::impl::client::DefaultUserTokenHandler::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}


local_ref< java::lang::Object > org::apache::http::impl::client::DefaultUserTokenHandler::getUserToken(local_ref< org::apache::http::protocol::HttpContext > const &a0)
{
	return call_method<
		org::apache::http::impl::client::DefaultUserTokenHandler::J2CPP_CLASS_NAME,
		org::apache::http::impl::client::DefaultUserTokenHandler::J2CPP_METHOD_NAME(1),
		org::apache::http::impl::client::DefaultUserTokenHandler::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::lang::Object > >
	(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(org::apache::http::impl::client::DefaultUserTokenHandler,"org/apache/http/impl/client/DefaultUserTokenHandler")
J2CPP_DEFINE_METHOD(org::apache::http::impl::client::DefaultUserTokenHandler,0,"<init>","()V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::client::DefaultUserTokenHandler,1,"getUserToken","(Lorg/apache/http/protocol/HttpContext;)Ljava/lang/Object;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_CLIENT_DEFAULTUSERTOKENHANDLER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION