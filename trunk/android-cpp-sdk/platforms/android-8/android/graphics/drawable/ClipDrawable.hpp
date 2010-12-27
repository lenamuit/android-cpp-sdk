/*================================================================================
  code generated by: java2cpp
  class: android.graphics.drawable.ClipDrawable
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_DRAWABLE_CLIPDRAWABLE_HPP_DECL
#define J2CPP_ANDROID_GRAPHICS_DRAWABLE_CLIPDRAWABLE_HPP_DECL


namespace j2cpp { namespace org { namespace xmlpull { namespace v1 { class XmlPullParser; } } } }
namespace j2cpp { namespace android { namespace content { namespace res { class Resources; } } } }
namespace j2cpp { namespace android { namespace util { class AttributeSet; } } }
namespace j2cpp { namespace android { namespace graphics { class Canvas; } } }
namespace j2cpp { namespace android { namespace graphics { class Rect; } } }
namespace j2cpp { namespace android { namespace graphics { class ColorFilter; } } }
namespace j2cpp { namespace android { namespace graphics { namespace drawable { class Drawable; } } } }
namespace j2cpp { namespace android { namespace graphics { namespace drawable { namespace Drawable_ { class ConstantState; } } } } }
namespace j2cpp { namespace java { namespace lang { class Runnable; } } }


#include <android/content/res/Resources.hpp>
#include <android/graphics/Canvas.hpp>
#include <android/graphics/ColorFilter.hpp>
#include <android/graphics/Rect.hpp>
#include <android/graphics/drawable/Drawable.hpp>
#include <android/util/AttributeSet.hpp>
#include <java/lang/Runnable.hpp>
#include <org/xmlpull/v1/XmlPullParser.hpp>


namespace j2cpp {

namespace android { namespace graphics { namespace drawable {

	class ClipDrawable;
	class ClipDrawable
		: public cpp_object<ClipDrawable>
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
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)

		ClipDrawable(jobject jobj)
		: cpp_object<ClipDrawable>(jobj)
		{
		}

		void inflate(local_ref< android::content::res::Resources > const&, local_ref< org::xmlpull::v1::XmlPullParser > const&, local_ref< android::util::AttributeSet > const&);
		void invalidateDrawable(local_ref< android::graphics::drawable::Drawable > const&);
		void scheduleDrawable(local_ref< android::graphics::drawable::Drawable > const&, local_ref< java::lang::Runnable > const&, cpp_long const&);
		void unscheduleDrawable(local_ref< android::graphics::drawable::Drawable > const&, local_ref< java::lang::Runnable > const&);
		cpp_int getChangingConfigurations();
		cpp_boolean getPadding(local_ref< android::graphics::Rect > const&);
		cpp_boolean setVisible(cpp_boolean const&, cpp_boolean const&);
		void setAlpha(cpp_int const&);
		void setColorFilter(local_ref< android::graphics::ColorFilter > const&);
		cpp_int getOpacity();
		cpp_boolean isStateful();
		void draw(local_ref< android::graphics::Canvas > const&);
		cpp_int getIntrinsicWidth();
		cpp_int getIntrinsicHeight();
		local_ref< android::graphics::drawable::Drawable_::ConstantState > getConstantState();

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), cpp_int > HORIZONTAL;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), cpp_int > VERTICAL;
	}; //class ClipDrawable

} //namespace drawable
} //namespace graphics
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_DRAWABLE_CLIPDRAWABLE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_DRAWABLE_CLIPDRAWABLE_HPP_IMPL
#define J2CPP_ANDROID_GRAPHICS_DRAWABLE_CLIPDRAWABLE_HPP_IMPL

namespace j2cpp {


template <>
local_ref< android::graphics::drawable::ClipDrawable > create< android::graphics::drawable::ClipDrawable>(local_ref< android::graphics::drawable::Drawable > const &a0, cpp_int const &a1, cpp_int const &a2)
{
	return local_ref< android::graphics::drawable::ClipDrawable >(
		environment::get().get_jenv()->NewObject(
			get_class<android::graphics::drawable::ClipDrawable::J2CPP_CLASS_NAME>(),
			get_method_id<android::graphics::drawable::ClipDrawable::J2CPP_CLASS_NAME, android::graphics::drawable::ClipDrawable::J2CPP_METHOD_NAME(0), android::graphics::drawable::ClipDrawable::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void android::graphics::drawable::ClipDrawable::inflate(local_ref< android::content::res::Resources > const &a0, local_ref< org::xmlpull::v1::XmlPullParser > const &a1, local_ref< android::util::AttributeSet > const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void android::graphics::drawable::ClipDrawable::invalidateDrawable(local_ref< android::graphics::drawable::Drawable > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}

void android::graphics::drawable::ClipDrawable::scheduleDrawable(local_ref< android::graphics::drawable::Drawable > const &a0, local_ref< java::lang::Runnable > const &a1, cpp_long const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void android::graphics::drawable::ClipDrawable::unscheduleDrawable(local_ref< android::graphics::drawable::Drawable > const &a0, local_ref< java::lang::Runnable > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_int android::graphics::drawable::ClipDrawable::getChangingConfigurations()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

cpp_boolean android::graphics::drawable::ClipDrawable::getPadding(local_ref< android::graphics::Rect > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::graphics::drawable::ClipDrawable::setVisible(cpp_boolean const &a0, cpp_boolean const &a1)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::graphics::drawable::ClipDrawable::setAlpha(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype()
		)
	);
}

void android::graphics::drawable::ClipDrawable::setColorFilter(local_ref< android::graphics::ColorFilter > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::graphics::drawable::ClipDrawable::getOpacity()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>()
		)
	);
}

cpp_boolean android::graphics::drawable::ClipDrawable::isStateful()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>()
		)
	);
}




void android::graphics::drawable::ClipDrawable::draw(local_ref< android::graphics::Canvas > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::graphics::drawable::ClipDrawable::getIntrinsicWidth()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), false>()
		)
	);
}

cpp_int android::graphics::drawable::ClipDrawable::getIntrinsicHeight()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(17), J2CPP_METHOD_SIGNATURE(17), false>()
		)
	);
}

local_ref< android::graphics::drawable::Drawable_::ConstantState > android::graphics::drawable::ClipDrawable::getConstantState()
{
	return local_ref< android::graphics::drawable::Drawable_::ConstantState >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(18), J2CPP_METHOD_SIGNATURE(18), false>()
		)
	);
}


static_field<
	android::graphics::drawable::ClipDrawable::J2CPP_CLASS_NAME,
	android::graphics::drawable::ClipDrawable::J2CPP_FIELD_NAME(0),
	android::graphics::drawable::ClipDrawable::J2CPP_FIELD_SIGNATURE(0),
	cpp_int
> android::graphics::drawable::ClipDrawable::HORIZONTAL;

static_field<
	android::graphics::drawable::ClipDrawable::J2CPP_CLASS_NAME,
	android::graphics::drawable::ClipDrawable::J2CPP_FIELD_NAME(1),
	android::graphics::drawable::ClipDrawable::J2CPP_FIELD_SIGNATURE(1),
	cpp_int
> android::graphics::drawable::ClipDrawable::VERTICAL;


J2CPP_DEFINE_CLASS(android::graphics::drawable::ClipDrawable,"android/graphics/drawable/ClipDrawable")
J2CPP_DEFINE_METHOD(android::graphics::drawable::ClipDrawable,0,"<init>","(Landroid/graphics/drawable/Drawable;II)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::ClipDrawable,1,"inflate","(Landroid/content/res/Resources;Lorg/xmlpull/v1/XmlPullParser;Landroid/util/AttributeSet;)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::ClipDrawable,2,"invalidateDrawable","(Landroid/graphics/drawable/Drawable;)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::ClipDrawable,3,"scheduleDrawable","(Landroid/graphics/drawable/Drawable;Ljava/lang/Runnable;J)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::ClipDrawable,4,"unscheduleDrawable","(Landroid/graphics/drawable/Drawable;Ljava/lang/Runnable;)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::ClipDrawable,5,"getChangingConfigurations","()I")
J2CPP_DEFINE_METHOD(android::graphics::drawable::ClipDrawable,6,"getPadding","(Landroid/graphics/Rect;)Z")
J2CPP_DEFINE_METHOD(android::graphics::drawable::ClipDrawable,7,"setVisible","(ZZ)Z")
J2CPP_DEFINE_METHOD(android::graphics::drawable::ClipDrawable,8,"setAlpha","(I)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::ClipDrawable,9,"setColorFilter","(Landroid/graphics/ColorFilter;)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::ClipDrawable,10,"getOpacity","()I")
J2CPP_DEFINE_METHOD(android::graphics::drawable::ClipDrawable,11,"isStateful","()Z")
J2CPP_DEFINE_METHOD(android::graphics::drawable::ClipDrawable,12,"onStateChange","([I)Z")
J2CPP_DEFINE_METHOD(android::graphics::drawable::ClipDrawable,13,"onLevelChange","(I)Z")
J2CPP_DEFINE_METHOD(android::graphics::drawable::ClipDrawable,14,"onBoundsChange","(Landroid/graphics/Rect;)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::ClipDrawable,15,"draw","(Landroid/graphics/Canvas;)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::ClipDrawable,16,"getIntrinsicWidth","()I")
J2CPP_DEFINE_METHOD(android::graphics::drawable::ClipDrawable,17,"getIntrinsicHeight","()I")
J2CPP_DEFINE_METHOD(android::graphics::drawable::ClipDrawable,18,"getConstantState","()Landroid/graphics/drawable/Drawable$ConstantState;")
J2CPP_DEFINE_FIELD(android::graphics::drawable::ClipDrawable,0,"HORIZONTAL","I")
J2CPP_DEFINE_FIELD(android::graphics::drawable::ClipDrawable,1,"VERTICAL","I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_DRAWABLE_CLIPDRAWABLE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION