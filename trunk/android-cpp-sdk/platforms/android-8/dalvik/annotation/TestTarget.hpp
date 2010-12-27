/*================================================================================
  code generated by: java2cpp
  class: dalvik.annotation.TestTarget
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_DALVIK_ANNOTATION_TESTTARGET_HPP_DECL
#define J2CPP_DALVIK_ANNOTATION_TESTTARGET_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Class; } } }


#include <java/lang/Class.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace dalvik { namespace annotation {

	class TestTarget;
	class TestTarget
		: public cpp_object<TestTarget>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		TestTarget(jobject jobj)
		: cpp_object<TestTarget>(jobj)
		{
		}

		local_ref< java::lang::String > methodName();
		local_ref< java::lang::String > conceptName();
		local_ref< cpp_object_array<java::lang::Class, 1> > methodArgs();
	}; //class TestTarget

} //namespace annotation
} //namespace dalvik


} //namespace j2cpp

#endif //J2CPP_DALVIK_ANNOTATION_TESTTARGET_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_DALVIK_ANNOTATION_TESTTARGET_HPP_IMPL
#define J2CPP_DALVIK_ANNOTATION_TESTTARGET_HPP_IMPL

namespace j2cpp {


local_ref< java::lang::String > dalvik::annotation::TestTarget::methodName()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

local_ref< java::lang::String > dalvik::annotation::TestTarget::conceptName()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

local_ref< cpp_object_array<java::lang::Class, 1> > dalvik::annotation::TestTarget::methodArgs()
{
	return local_ref< cpp_object_array<java::lang::Class, 1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(dalvik::annotation::TestTarget,"dalvik/annotation/TestTarget")
J2CPP_DEFINE_METHOD(dalvik::annotation::TestTarget,0,"methodName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(dalvik::annotation::TestTarget,1,"conceptName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(dalvik::annotation::TestTarget,2,"methodArgs","()[java.lang.Class")

} //namespace j2cpp

#endif //J2CPP_DALVIK_ANNOTATION_TESTTARGET_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION