/*================================================================================
  code generated by: java2cpp
  class: java.security.spec.MGF1ParameterSpec
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_SPEC_MGF1PARAMETERSPEC_HPP_DECL
#define J2CPP_JAVA_SECURITY_SPEC_MGF1PARAMETERSPEC_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/String.hpp>


namespace j2cpp {

namespace java { namespace security { namespace spec {

	class MGF1ParameterSpec;
	class MGF1ParameterSpec
		: public cpp_object<MGF1ParameterSpec>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)

		MGF1ParameterSpec(jobject jobj)
		: cpp_object<MGF1ParameterSpec>(jobj)
		{
		}

		local_ref< java::lang::String > getDigestAlgorithm();

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::security::spec::MGF1ParameterSpec > > SHA1;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< java::security::spec::MGF1ParameterSpec > > SHA256;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), local_ref< java::security::spec::MGF1ParameterSpec > > SHA384;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), local_ref< java::security::spec::MGF1ParameterSpec > > SHA512;
	}; //class MGF1ParameterSpec

} //namespace spec
} //namespace security
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_SPEC_MGF1PARAMETERSPEC_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_SPEC_MGF1PARAMETERSPEC_HPP_IMPL
#define J2CPP_JAVA_SECURITY_SPEC_MGF1PARAMETERSPEC_HPP_IMPL

namespace j2cpp {


template <>
local_ref< java::security::spec::MGF1ParameterSpec > create< java::security::spec::MGF1ParameterSpec>(local_ref< java::lang::String > const &a0)
{
	return local_ref< java::security::spec::MGF1ParameterSpec >(
		environment::get().get_jenv()->NewObject(
			get_class<java::security::spec::MGF1ParameterSpec::J2CPP_CLASS_NAME>(),
			get_method_id<java::security::spec::MGF1ParameterSpec::J2CPP_CLASS_NAME, java::security::spec::MGF1ParameterSpec::J2CPP_METHOD_NAME(0), java::security::spec::MGF1ParameterSpec::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > java::security::spec::MGF1ParameterSpec::getDigestAlgorithm()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}


static_field<
	java::security::spec::MGF1ParameterSpec::J2CPP_CLASS_NAME,
	java::security::spec::MGF1ParameterSpec::J2CPP_FIELD_NAME(0),
	java::security::spec::MGF1ParameterSpec::J2CPP_FIELD_SIGNATURE(0),
	local_ref< java::security::spec::MGF1ParameterSpec >
> java::security::spec::MGF1ParameterSpec::SHA1;

static_field<
	java::security::spec::MGF1ParameterSpec::J2CPP_CLASS_NAME,
	java::security::spec::MGF1ParameterSpec::J2CPP_FIELD_NAME(1),
	java::security::spec::MGF1ParameterSpec::J2CPP_FIELD_SIGNATURE(1),
	local_ref< java::security::spec::MGF1ParameterSpec >
> java::security::spec::MGF1ParameterSpec::SHA256;

static_field<
	java::security::spec::MGF1ParameterSpec::J2CPP_CLASS_NAME,
	java::security::spec::MGF1ParameterSpec::J2CPP_FIELD_NAME(2),
	java::security::spec::MGF1ParameterSpec::J2CPP_FIELD_SIGNATURE(2),
	local_ref< java::security::spec::MGF1ParameterSpec >
> java::security::spec::MGF1ParameterSpec::SHA384;

static_field<
	java::security::spec::MGF1ParameterSpec::J2CPP_CLASS_NAME,
	java::security::spec::MGF1ParameterSpec::J2CPP_FIELD_NAME(3),
	java::security::spec::MGF1ParameterSpec::J2CPP_FIELD_SIGNATURE(3),
	local_ref< java::security::spec::MGF1ParameterSpec >
> java::security::spec::MGF1ParameterSpec::SHA512;


J2CPP_DEFINE_CLASS(java::security::spec::MGF1ParameterSpec,"java/security/spec/MGF1ParameterSpec")
J2CPP_DEFINE_METHOD(java::security::spec::MGF1ParameterSpec,0,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::security::spec::MGF1ParameterSpec,1,"getDigestAlgorithm","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::security::spec::MGF1ParameterSpec,2,"<clinit>","()V")
J2CPP_DEFINE_FIELD(java::security::spec::MGF1ParameterSpec,0,"SHA1","Ljava/security/spec/MGF1ParameterSpec;")
J2CPP_DEFINE_FIELD(java::security::spec::MGF1ParameterSpec,1,"SHA256","Ljava/security/spec/MGF1ParameterSpec;")
J2CPP_DEFINE_FIELD(java::security::spec::MGF1ParameterSpec,2,"SHA384","Ljava/security/spec/MGF1ParameterSpec;")
J2CPP_DEFINE_FIELD(java::security::spec::MGF1ParameterSpec,3,"SHA512","Ljava/security/spec/MGF1ParameterSpec;")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_SPEC_MGF1PARAMETERSPEC_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION