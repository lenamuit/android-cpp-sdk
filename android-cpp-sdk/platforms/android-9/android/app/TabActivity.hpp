/*================================================================================
  code generated by: java2cpp
  class: android.app.TabActivity
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_APP_TABACTIVITY_HPP_DECL
#define J2CPP_ANDROID_APP_TABACTIVITY_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace android { namespace widget { class TabHost; } } }
namespace j2cpp { namespace android { namespace widget { class TabWidget; } } }


#include <android/widget/TabHost.hpp>
#include <android/widget/TabWidget.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace app {

	class TabActivity;
	class TabActivity
		: public cpp_object<TabActivity>
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

		TabActivity(jobject jobj)
		: cpp_object<TabActivity>(jobj)
		{
		}

		void setDefaultTab(local_ref< java::lang::String > const&);
		void setDefaultTab(cpp_int const&);
		void onContentChanged();
		local_ref< android::widget::TabHost > getTabHost();
		local_ref< android::widget::TabWidget > getTabWidget();
	}; //class TabActivity

} //namespace app
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_APP_TABACTIVITY_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_APP_TABACTIVITY_HPP_IMPL
#define J2CPP_ANDROID_APP_TABACTIVITY_HPP_IMPL

namespace j2cpp {


template <>
local_ref< android::app::TabActivity > create< android::app::TabActivity>()
{
	return local_ref< android::app::TabActivity >(
		environment::get().get_jenv()->NewObject(
			get_class<android::app::TabActivity::J2CPP_CLASS_NAME>(),
			get_method_id<android::app::TabActivity::J2CPP_CLASS_NAME, android::app::TabActivity::J2CPP_METHOD_NAME(0), android::app::TabActivity::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

void android::app::TabActivity::setDefaultTab(local_ref< java::lang::String > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

void android::app::TabActivity::setDefaultTab(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}




void android::app::TabActivity::onContentChanged()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}


local_ref< android::widget::TabHost > android::app::TabActivity::getTabHost()
{
	return local_ref< android::widget::TabHost >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>()
		)
	);
}

local_ref< android::widget::TabWidget > android::app::TabActivity::getTabWidget()
{
	return local_ref< android::widget::TabWidget >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(android::app::TabActivity,"android/app/TabActivity")
J2CPP_DEFINE_METHOD(android::app::TabActivity,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::app::TabActivity,1,"setDefaultTab","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::app::TabActivity,2,"setDefaultTab","(I)V")
J2CPP_DEFINE_METHOD(android::app::TabActivity,3,"onRestoreInstanceState","(Landroid/os/Bundle;)V")
J2CPP_DEFINE_METHOD(android::app::TabActivity,4,"onPostCreate","(Landroid/os/Bundle;)V")
J2CPP_DEFINE_METHOD(android::app::TabActivity,5,"onSaveInstanceState","(Landroid/os/Bundle;)V")
J2CPP_DEFINE_METHOD(android::app::TabActivity,6,"onContentChanged","()V")
J2CPP_DEFINE_METHOD(android::app::TabActivity,7,"onChildTitleChanged","(Landroid/app/Activity;Ljava/lang/CharSequence;)V")
J2CPP_DEFINE_METHOD(android::app::TabActivity,8,"getTabHost","()Landroid/widget/TabHost;")
J2CPP_DEFINE_METHOD(android::app::TabActivity,9,"getTabWidget","()Landroid/widget/TabWidget;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_APP_TABACTIVITY_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION