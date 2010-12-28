/*================================================================================
  code generated by: java2cpp
  class: android.webkit.CookieManager
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WEBKIT_COOKIEMANAGER_HPP_DECL
#define J2CPP_ANDROID_WEBKIT_COOKIEMANAGER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace webkit {

	class CookieManager;
	class CookieManager
		: public cpp_object<CookieManager>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)
		J2CPP_DECLARE_METHOD(6)
		J2CPP_DECLARE_METHOD(7)
		J2CPP_DECLARE_METHOD(8)
		J2CPP_DECLARE_METHOD(9)
		J2CPP_DECLARE_METHOD(10)

		CookieManager(jobject jobj)
		: cpp_object<CookieManager>(jobj)
		{
		}

		static local_ref< android::webkit::CookieManager > getInstance();
		void setAcceptCookie(cpp_boolean const&);
		cpp_boolean acceptCookie();
		void setCookie(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&);
		local_ref< java::lang::String > getCookie(local_ref< java::lang::String > const&);
		void removeSessionCookie();
		void removeAllCookie();
		cpp_boolean hasCookies();
		void removeExpiredCookie();
	}; //class CookieManager

} //namespace webkit
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_WEBKIT_COOKIEMANAGER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WEBKIT_COOKIEMANAGER_HPP_IMPL
#define J2CPP_ANDROID_WEBKIT_COOKIEMANAGER_HPP_IMPL

namespace j2cpp {


template <>
local_ref< android::webkit::CookieManager > create< android::webkit::CookieManager>()
{
	return local_ref< android::webkit::CookieManager >(
		environment::get().get_jenv()->NewObject(
			get_class<android::webkit::CookieManager::J2CPP_CLASS_NAME>(),
			get_method_id<android::webkit::CookieManager::J2CPP_CLASS_NAME, android::webkit::CookieManager::J2CPP_METHOD_NAME(0), android::webkit::CookieManager::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}


local_ref< android::webkit::CookieManager > android::webkit::CookieManager::getInstance()
{
	return local_ref< android::webkit::CookieManager >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), true>()
		)
	);
}

void android::webkit::CookieManager::setAcceptCookie(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::webkit::CookieManager::acceptCookie()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

void android::webkit::CookieManager::setCookie(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::lang::String > android::webkit::CookieManager::getCookie(local_ref< java::lang::String > const &a0)
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype()
		)
	);
}

void android::webkit::CookieManager::removeSessionCookie()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}

void android::webkit::CookieManager::removeAllCookie()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>()
		)
	);
}

cpp_boolean android::webkit::CookieManager::hasCookies()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>()
		)
	);
}

void android::webkit::CookieManager::removeExpiredCookie()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(android::webkit::CookieManager,"android/webkit/CookieManager")
J2CPP_DEFINE_METHOD(android::webkit::CookieManager,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::webkit::CookieManager,1,"clone","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(android::webkit::CookieManager,2,"getInstance","()Landroid/webkit/CookieManager;")
J2CPP_DEFINE_METHOD(android::webkit::CookieManager,3,"setAcceptCookie","(Z)V")
J2CPP_DEFINE_METHOD(android::webkit::CookieManager,4,"acceptCookie","()Z")
J2CPP_DEFINE_METHOD(android::webkit::CookieManager,5,"setCookie","(Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::webkit::CookieManager,6,"getCookie","(Ljava/lang/String;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::webkit::CookieManager,7,"removeSessionCookie","()V")
J2CPP_DEFINE_METHOD(android::webkit::CookieManager,8,"removeAllCookie","()V")
J2CPP_DEFINE_METHOD(android::webkit::CookieManager,9,"hasCookies","()Z")
J2CPP_DEFINE_METHOD(android::webkit::CookieManager,10,"removeExpiredCookie","()V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_WEBKIT_COOKIEMANAGER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION