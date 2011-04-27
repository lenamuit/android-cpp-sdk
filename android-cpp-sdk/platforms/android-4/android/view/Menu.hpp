/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.view.Menu
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_MENU_HPP_DECL
#define J2CPP_ANDROID_VIEW_MENU_HPP_DECL


namespace j2cpp { namespace android { namespace view { class KeyEvent; } } }
namespace j2cpp { namespace android { namespace view { class SubMenu; } } }
namespace j2cpp { namespace android { namespace view { class MenuItem; } } }
namespace j2cpp { namespace android { namespace content { class Intent; } } }
namespace j2cpp { namespace android { namespace content { class ComponentName; } } }
namespace j2cpp { namespace java { namespace lang { class CharSequence; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <android/content/ComponentName.hpp>
#include <android/content/Intent.hpp>
#include <android/view/KeyEvent.hpp>
#include <android/view/MenuItem.hpp>
#include <android/view/SubMenu.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace view {

	class Menu;
	class Menu
		: public object<Menu>
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
		J2CPP_DECLARE_METHOD(11)
		J2CPP_DECLARE_METHOD(12)
		J2CPP_DECLARE_METHOD(13)
		J2CPP_DECLARE_METHOD(14)
		J2CPP_DECLARE_METHOD(15)
		J2CPP_DECLARE_METHOD(16)
		J2CPP_DECLARE_METHOD(17)
		J2CPP_DECLARE_METHOD(18)
		J2CPP_DECLARE_METHOD(19)
		J2CPP_DECLARE_METHOD(20)
		J2CPP_DECLARE_METHOD(21)
		J2CPP_DECLARE_METHOD(22)
		J2CPP_DECLARE_METHOD(23)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)
		J2CPP_DECLARE_FIELD(5)
		J2CPP_DECLARE_FIELD(6)
		J2CPP_DECLARE_FIELD(7)
		J2CPP_DECLARE_FIELD(8)

		explicit Menu(jobject jobj)
		: object<Menu>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		local_ref< android::view::MenuItem > add(local_ref< java::lang::CharSequence >  const&);
		local_ref< android::view::MenuItem > add(jint);
		local_ref< android::view::MenuItem > add(jint, jint, jint, local_ref< java::lang::CharSequence >  const&);
		local_ref< android::view::MenuItem > add(jint, jint, jint, jint);
		local_ref< android::view::SubMenu > addSubMenu(local_ref< java::lang::CharSequence >  const&);
		local_ref< android::view::SubMenu > addSubMenu(jint);
		local_ref< android::view::SubMenu > addSubMenu(jint, jint, jint, local_ref< java::lang::CharSequence >  const&);
		local_ref< android::view::SubMenu > addSubMenu(jint, jint, jint, jint);
		jint addIntentOptions(jint, jint, jint, local_ref< android::content::ComponentName >  const&, local_ref< array< local_ref< android::content::Intent >, 1> >  const&, local_ref< android::content::Intent >  const&, jint, local_ref< array< local_ref< android::view::MenuItem >, 1> >  const&);
		void removeItem(jint);
		void removeGroup(jint);
		void clear();
		void setGroupCheckable(jint, jboolean, jboolean);
		void setGroupVisible(jint, jboolean);
		void setGroupEnabled(jint, jboolean);
		jboolean hasVisibleItems();
		local_ref< android::view::MenuItem > findItem(jint);
		jint size();
		local_ref< android::view::MenuItem > getItem(jint);
		void close();
		jboolean performShortcut(jint, local_ref< android::view::KeyEvent >  const&, jint);
		jboolean isShortcutKey(jint, local_ref< android::view::KeyEvent >  const&);
		jboolean performIdentifierAction(jint, jint);
		void setQwertyMode(jboolean);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jint > NONE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jint > FIRST;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), jint > CATEGORY_CONTAINER;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), jint > CATEGORY_SYSTEM;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), jint > CATEGORY_SECONDARY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), jint > CATEGORY_ALTERNATIVE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), jint > FLAG_APPEND_TO_GROUP;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(7), J2CPP_FIELD_SIGNATURE(7), jint > FLAG_PERFORM_NO_CLOSE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(8), J2CPP_FIELD_SIGNATURE(8), jint > FLAG_ALWAYS_PERFORM_CLOSE;
	}; //class Menu

} //namespace view
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_MENU_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_MENU_HPP_IMPL
#define J2CPP_ANDROID_VIEW_MENU_HPP_IMPL

namespace j2cpp {



android::view::Menu::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

local_ref< android::view::MenuItem > android::view::Menu::add(local_ref< java::lang::CharSequence > const &a0)
{
	return call_method<
		android::view::Menu::J2CPP_CLASS_NAME,
		android::view::Menu::J2CPP_METHOD_NAME(0),
		android::view::Menu::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< android::view::MenuItem >
	>(get_jobject(), a0);
}

local_ref< android::view::MenuItem > android::view::Menu::add(jint a0)
{
	return call_method<
		android::view::Menu::J2CPP_CLASS_NAME,
		android::view::Menu::J2CPP_METHOD_NAME(1),
		android::view::Menu::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< android::view::MenuItem >
	>(get_jobject(), a0);
}

local_ref< android::view::MenuItem > android::view::Menu::add(jint a0, jint a1, jint a2, local_ref< java::lang::CharSequence > const &a3)
{
	return call_method<
		android::view::Menu::J2CPP_CLASS_NAME,
		android::view::Menu::J2CPP_METHOD_NAME(2),
		android::view::Menu::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< android::view::MenuItem >
	>(get_jobject(), a0, a1, a2, a3);
}

local_ref< android::view::MenuItem > android::view::Menu::add(jint a0, jint a1, jint a2, jint a3)
{
	return call_method<
		android::view::Menu::J2CPP_CLASS_NAME,
		android::view::Menu::J2CPP_METHOD_NAME(3),
		android::view::Menu::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< android::view::MenuItem >
	>(get_jobject(), a0, a1, a2, a3);
}

local_ref< android::view::SubMenu > android::view::Menu::addSubMenu(local_ref< java::lang::CharSequence > const &a0)
{
	return call_method<
		android::view::Menu::J2CPP_CLASS_NAME,
		android::view::Menu::J2CPP_METHOD_NAME(4),
		android::view::Menu::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< android::view::SubMenu >
	>(get_jobject(), a0);
}

local_ref< android::view::SubMenu > android::view::Menu::addSubMenu(jint a0)
{
	return call_method<
		android::view::Menu::J2CPP_CLASS_NAME,
		android::view::Menu::J2CPP_METHOD_NAME(5),
		android::view::Menu::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< android::view::SubMenu >
	>(get_jobject(), a0);
}

local_ref< android::view::SubMenu > android::view::Menu::addSubMenu(jint a0, jint a1, jint a2, local_ref< java::lang::CharSequence > const &a3)
{
	return call_method<
		android::view::Menu::J2CPP_CLASS_NAME,
		android::view::Menu::J2CPP_METHOD_NAME(6),
		android::view::Menu::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< android::view::SubMenu >
	>(get_jobject(), a0, a1, a2, a3);
}

local_ref< android::view::SubMenu > android::view::Menu::addSubMenu(jint a0, jint a1, jint a2, jint a3)
{
	return call_method<
		android::view::Menu::J2CPP_CLASS_NAME,
		android::view::Menu::J2CPP_METHOD_NAME(7),
		android::view::Menu::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< android::view::SubMenu >
	>(get_jobject(), a0, a1, a2, a3);
}

jint android::view::Menu::addIntentOptions(jint a0, jint a1, jint a2, local_ref< android::content::ComponentName > const &a3, local_ref< array< local_ref< android::content::Intent >, 1> > const &a4, local_ref< android::content::Intent > const &a5, jint a6, local_ref< array< local_ref< android::view::MenuItem >, 1> > const &a7)
{
	return call_method<
		android::view::Menu::J2CPP_CLASS_NAME,
		android::view::Menu::J2CPP_METHOD_NAME(8),
		android::view::Menu::J2CPP_METHOD_SIGNATURE(8), 
		jint
	>(get_jobject(), a0, a1, a2, a3, a4, a5, a6, a7);
}

void android::view::Menu::removeItem(jint a0)
{
	return call_method<
		android::view::Menu::J2CPP_CLASS_NAME,
		android::view::Menu::J2CPP_METHOD_NAME(9),
		android::view::Menu::J2CPP_METHOD_SIGNATURE(9), 
		void
	>(get_jobject(), a0);
}

void android::view::Menu::removeGroup(jint a0)
{
	return call_method<
		android::view::Menu::J2CPP_CLASS_NAME,
		android::view::Menu::J2CPP_METHOD_NAME(10),
		android::view::Menu::J2CPP_METHOD_SIGNATURE(10), 
		void
	>(get_jobject(), a0);
}

void android::view::Menu::clear()
{
	return call_method<
		android::view::Menu::J2CPP_CLASS_NAME,
		android::view::Menu::J2CPP_METHOD_NAME(11),
		android::view::Menu::J2CPP_METHOD_SIGNATURE(11), 
		void
	>(get_jobject());
}

void android::view::Menu::setGroupCheckable(jint a0, jboolean a1, jboolean a2)
{
	return call_method<
		android::view::Menu::J2CPP_CLASS_NAME,
		android::view::Menu::J2CPP_METHOD_NAME(12),
		android::view::Menu::J2CPP_METHOD_SIGNATURE(12), 
		void
	>(get_jobject(), a0, a1, a2);
}

void android::view::Menu::setGroupVisible(jint a0, jboolean a1)
{
	return call_method<
		android::view::Menu::J2CPP_CLASS_NAME,
		android::view::Menu::J2CPP_METHOD_NAME(13),
		android::view::Menu::J2CPP_METHOD_SIGNATURE(13), 
		void
	>(get_jobject(), a0, a1);
}

void android::view::Menu::setGroupEnabled(jint a0, jboolean a1)
{
	return call_method<
		android::view::Menu::J2CPP_CLASS_NAME,
		android::view::Menu::J2CPP_METHOD_NAME(14),
		android::view::Menu::J2CPP_METHOD_SIGNATURE(14), 
		void
	>(get_jobject(), a0, a1);
}

jboolean android::view::Menu::hasVisibleItems()
{
	return call_method<
		android::view::Menu::J2CPP_CLASS_NAME,
		android::view::Menu::J2CPP_METHOD_NAME(15),
		android::view::Menu::J2CPP_METHOD_SIGNATURE(15), 
		jboolean
	>(get_jobject());
}

local_ref< android::view::MenuItem > android::view::Menu::findItem(jint a0)
{
	return call_method<
		android::view::Menu::J2CPP_CLASS_NAME,
		android::view::Menu::J2CPP_METHOD_NAME(16),
		android::view::Menu::J2CPP_METHOD_SIGNATURE(16), 
		local_ref< android::view::MenuItem >
	>(get_jobject(), a0);
}

jint android::view::Menu::size()
{
	return call_method<
		android::view::Menu::J2CPP_CLASS_NAME,
		android::view::Menu::J2CPP_METHOD_NAME(17),
		android::view::Menu::J2CPP_METHOD_SIGNATURE(17), 
		jint
	>(get_jobject());
}

local_ref< android::view::MenuItem > android::view::Menu::getItem(jint a0)
{
	return call_method<
		android::view::Menu::J2CPP_CLASS_NAME,
		android::view::Menu::J2CPP_METHOD_NAME(18),
		android::view::Menu::J2CPP_METHOD_SIGNATURE(18), 
		local_ref< android::view::MenuItem >
	>(get_jobject(), a0);
}

void android::view::Menu::close()
{
	return call_method<
		android::view::Menu::J2CPP_CLASS_NAME,
		android::view::Menu::J2CPP_METHOD_NAME(19),
		android::view::Menu::J2CPP_METHOD_SIGNATURE(19), 
		void
	>(get_jobject());
}

jboolean android::view::Menu::performShortcut(jint a0, local_ref< android::view::KeyEvent > const &a1, jint a2)
{
	return call_method<
		android::view::Menu::J2CPP_CLASS_NAME,
		android::view::Menu::J2CPP_METHOD_NAME(20),
		android::view::Menu::J2CPP_METHOD_SIGNATURE(20), 
		jboolean
	>(get_jobject(), a0, a1, a2);
}

jboolean android::view::Menu::isShortcutKey(jint a0, local_ref< android::view::KeyEvent > const &a1)
{
	return call_method<
		android::view::Menu::J2CPP_CLASS_NAME,
		android::view::Menu::J2CPP_METHOD_NAME(21),
		android::view::Menu::J2CPP_METHOD_SIGNATURE(21), 
		jboolean
	>(get_jobject(), a0, a1);
}

jboolean android::view::Menu::performIdentifierAction(jint a0, jint a1)
{
	return call_method<
		android::view::Menu::J2CPP_CLASS_NAME,
		android::view::Menu::J2CPP_METHOD_NAME(22),
		android::view::Menu::J2CPP_METHOD_SIGNATURE(22), 
		jboolean
	>(get_jobject(), a0, a1);
}

void android::view::Menu::setQwertyMode(jboolean a0)
{
	return call_method<
		android::view::Menu::J2CPP_CLASS_NAME,
		android::view::Menu::J2CPP_METHOD_NAME(23),
		android::view::Menu::J2CPP_METHOD_SIGNATURE(23), 
		void
	>(get_jobject(), a0);
}


static_field<
	android::view::Menu::J2CPP_CLASS_NAME,
	android::view::Menu::J2CPP_FIELD_NAME(0),
	android::view::Menu::J2CPP_FIELD_SIGNATURE(0),
	jint
> android::view::Menu::NONE;

static_field<
	android::view::Menu::J2CPP_CLASS_NAME,
	android::view::Menu::J2CPP_FIELD_NAME(1),
	android::view::Menu::J2CPP_FIELD_SIGNATURE(1),
	jint
> android::view::Menu::FIRST;

static_field<
	android::view::Menu::J2CPP_CLASS_NAME,
	android::view::Menu::J2CPP_FIELD_NAME(2),
	android::view::Menu::J2CPP_FIELD_SIGNATURE(2),
	jint
> android::view::Menu::CATEGORY_CONTAINER;

static_field<
	android::view::Menu::J2CPP_CLASS_NAME,
	android::view::Menu::J2CPP_FIELD_NAME(3),
	android::view::Menu::J2CPP_FIELD_SIGNATURE(3),
	jint
> android::view::Menu::CATEGORY_SYSTEM;

static_field<
	android::view::Menu::J2CPP_CLASS_NAME,
	android::view::Menu::J2CPP_FIELD_NAME(4),
	android::view::Menu::J2CPP_FIELD_SIGNATURE(4),
	jint
> android::view::Menu::CATEGORY_SECONDARY;

static_field<
	android::view::Menu::J2CPP_CLASS_NAME,
	android::view::Menu::J2CPP_FIELD_NAME(5),
	android::view::Menu::J2CPP_FIELD_SIGNATURE(5),
	jint
> android::view::Menu::CATEGORY_ALTERNATIVE;

static_field<
	android::view::Menu::J2CPP_CLASS_NAME,
	android::view::Menu::J2CPP_FIELD_NAME(6),
	android::view::Menu::J2CPP_FIELD_SIGNATURE(6),
	jint
> android::view::Menu::FLAG_APPEND_TO_GROUP;

static_field<
	android::view::Menu::J2CPP_CLASS_NAME,
	android::view::Menu::J2CPP_FIELD_NAME(7),
	android::view::Menu::J2CPP_FIELD_SIGNATURE(7),
	jint
> android::view::Menu::FLAG_PERFORM_NO_CLOSE;

static_field<
	android::view::Menu::J2CPP_CLASS_NAME,
	android::view::Menu::J2CPP_FIELD_NAME(8),
	android::view::Menu::J2CPP_FIELD_SIGNATURE(8),
	jint
> android::view::Menu::FLAG_ALWAYS_PERFORM_CLOSE;


J2CPP_DEFINE_CLASS(android::view::Menu,"android/view/Menu")
J2CPP_DEFINE_METHOD(android::view::Menu,0,"add","(Ljava/lang/CharSequence;)Landroid/view/MenuItem;")
J2CPP_DEFINE_METHOD(android::view::Menu,1,"add","(I)Landroid/view/MenuItem;")
J2CPP_DEFINE_METHOD(android::view::Menu,2,"add","(IIILjava/lang/CharSequence;)Landroid/view/MenuItem;")
J2CPP_DEFINE_METHOD(android::view::Menu,3,"add","(IIII)Landroid/view/MenuItem;")
J2CPP_DEFINE_METHOD(android::view::Menu,4,"addSubMenu","(Ljava/lang/CharSequence;)Landroid/view/SubMenu;")
J2CPP_DEFINE_METHOD(android::view::Menu,5,"addSubMenu","(I)Landroid/view/SubMenu;")
J2CPP_DEFINE_METHOD(android::view::Menu,6,"addSubMenu","(IIILjava/lang/CharSequence;)Landroid/view/SubMenu;")
J2CPP_DEFINE_METHOD(android::view::Menu,7,"addSubMenu","(IIII)Landroid/view/SubMenu;")
J2CPP_DEFINE_METHOD(android::view::Menu,8,"addIntentOptions","(IIILandroid/content/ComponentName;[android.content.IntentLandroid/content/Intent;I[android.view.MenuItem)I")
J2CPP_DEFINE_METHOD(android::view::Menu,9,"removeItem","(I)V")
J2CPP_DEFINE_METHOD(android::view::Menu,10,"removeGroup","(I)V")
J2CPP_DEFINE_METHOD(android::view::Menu,11,"clear","()V")
J2CPP_DEFINE_METHOD(android::view::Menu,12,"setGroupCheckable","(IZZ)V")
J2CPP_DEFINE_METHOD(android::view::Menu,13,"setGroupVisible","(IZ)V")
J2CPP_DEFINE_METHOD(android::view::Menu,14,"setGroupEnabled","(IZ)V")
J2CPP_DEFINE_METHOD(android::view::Menu,15,"hasVisibleItems","()Z")
J2CPP_DEFINE_METHOD(android::view::Menu,16,"findItem","(I)Landroid/view/MenuItem;")
J2CPP_DEFINE_METHOD(android::view::Menu,17,"size","()I")
J2CPP_DEFINE_METHOD(android::view::Menu,18,"getItem","(I)Landroid/view/MenuItem;")
J2CPP_DEFINE_METHOD(android::view::Menu,19,"close","()V")
J2CPP_DEFINE_METHOD(android::view::Menu,20,"performShortcut","(ILandroid/view/KeyEvent;I)Z")
J2CPP_DEFINE_METHOD(android::view::Menu,21,"isShortcutKey","(ILandroid/view/KeyEvent;)Z")
J2CPP_DEFINE_METHOD(android::view::Menu,22,"performIdentifierAction","(II)Z")
J2CPP_DEFINE_METHOD(android::view::Menu,23,"setQwertyMode","(Z)V")
J2CPP_DEFINE_FIELD(android::view::Menu,0,"NONE","I")
J2CPP_DEFINE_FIELD(android::view::Menu,1,"FIRST","I")
J2CPP_DEFINE_FIELD(android::view::Menu,2,"CATEGORY_CONTAINER","I")
J2CPP_DEFINE_FIELD(android::view::Menu,3,"CATEGORY_SYSTEM","I")
J2CPP_DEFINE_FIELD(android::view::Menu,4,"CATEGORY_SECONDARY","I")
J2CPP_DEFINE_FIELD(android::view::Menu,5,"CATEGORY_ALTERNATIVE","I")
J2CPP_DEFINE_FIELD(android::view::Menu,6,"FLAG_APPEND_TO_GROUP","I")
J2CPP_DEFINE_FIELD(android::view::Menu,7,"FLAG_PERFORM_NO_CLOSE","I")
J2CPP_DEFINE_FIELD(android::view::Menu,8,"FLAG_ALWAYS_PERFORM_CLOSE","I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_MENU_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION