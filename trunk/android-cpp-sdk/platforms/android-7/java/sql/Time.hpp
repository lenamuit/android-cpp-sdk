/*================================================================================
  code generated by: java2cpp
  class: java.sql.Time
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SQL_TIME_HPP_DECL
#define J2CPP_JAVA_SQL_TIME_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace util { class Date; } } }


#include <java/lang/String.hpp>
#include <java/util/Date.hpp>


namespace j2cpp {

namespace java { namespace sql {

	class Time;
	class Time
		: public cpp_object<Time>
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

		explicit Time(jobject jobj)
		: cpp_object<Time>(jobj)
		{
		}

		operator local_ref<java::util::Date>() const;


		Time(cpp_int const&, cpp_int const&, cpp_int const&);
		Time(cpp_long const&);
		cpp_int getDate();
		cpp_int getDay();
		cpp_int getMonth();
		cpp_int getYear();
		void setDate(cpp_int const&);
		void setMonth(cpp_int const&);
		void setYear(cpp_int const&);
		void setTime(cpp_long const&);
		local_ref< java::lang::String > toString();
		static local_ref< java::sql::Time > valueOf(local_ref< java::lang::String > const&);
	}; //class Time

} //namespace sql
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_SQL_TIME_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SQL_TIME_HPP_IMPL
#define J2CPP_JAVA_SQL_TIME_HPP_IMPL

namespace j2cpp {



java::sql::Time::operator local_ref<java::util::Date>() const
{
	return local_ref<java::util::Date>(get_jtype());
}


java::sql::Time::Time(cpp_int const &a0, cpp_int const &a1, cpp_int const &a2)
: cpp_object<java::sql::Time>(
	environment::get().get_jenv()->NewObject(
		get_class<java::sql::Time::J2CPP_CLASS_NAME>(),
		get_method_id<java::sql::Time::J2CPP_CLASS_NAME, java::sql::Time::J2CPP_METHOD_NAME(0), java::sql::Time::J2CPP_METHOD_SIGNATURE(0), false>(),
		a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
	)
)
{
}



java::sql::Time::Time(cpp_long const &a0)
: cpp_object<java::sql::Time>(
	environment::get().get_jenv()->NewObject(
		get_class<java::sql::Time::J2CPP_CLASS_NAME>(),
		get_method_id<java::sql::Time::J2CPP_CLASS_NAME, java::sql::Time::J2CPP_METHOD_NAME(1), java::sql::Time::J2CPP_METHOD_SIGNATURE(1), false>(),
		a0.get_jtype()
	)
)
{
}


cpp_int java::sql::Time::getDate()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

cpp_int java::sql::Time::getDay()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

cpp_int java::sql::Time::getMonth()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

cpp_int java::sql::Time::getYear()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

void java::sql::Time::setDate(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype()
		)
	);
}

void java::sql::Time::setMonth(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype()
		)
	);
}

void java::sql::Time::setYear(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype()
		)
	);
}

void java::sql::Time::setTime(cpp_long const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > java::sql::Time::toString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>()
		)
	);
}

local_ref< java::sql::Time > java::sql::Time::valueOf(local_ref< java::lang::String > const &a0)
{
	return local_ref< java::sql::Time >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), true>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(java::sql::Time,"java/sql/Time")
J2CPP_DEFINE_METHOD(java::sql::Time,0,"<init>","(III)V")
J2CPP_DEFINE_METHOD(java::sql::Time,1,"<init>","(J)V")
J2CPP_DEFINE_METHOD(java::sql::Time,2,"getDate","()I")
J2CPP_DEFINE_METHOD(java::sql::Time,3,"getDay","()I")
J2CPP_DEFINE_METHOD(java::sql::Time,4,"getMonth","()I")
J2CPP_DEFINE_METHOD(java::sql::Time,5,"getYear","()I")
J2CPP_DEFINE_METHOD(java::sql::Time,6,"setDate","(I)V")
J2CPP_DEFINE_METHOD(java::sql::Time,7,"setMonth","(I)V")
J2CPP_DEFINE_METHOD(java::sql::Time,8,"setYear","(I)V")
J2CPP_DEFINE_METHOD(java::sql::Time,9,"setTime","(J)V")
J2CPP_DEFINE_METHOD(java::sql::Time,10,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::sql::Time,11,"valueOf","(Ljava/lang/String;)Ljava/sql/Time;")

} //namespace j2cpp

#endif //J2CPP_JAVA_SQL_TIME_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION