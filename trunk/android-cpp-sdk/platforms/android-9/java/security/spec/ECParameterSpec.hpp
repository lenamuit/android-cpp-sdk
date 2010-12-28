/*================================================================================
  code generated by: java2cpp
  class: java.security.spec.ECParameterSpec
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_SPEC_ECPARAMETERSPEC_HPP_DECL
#define J2CPP_JAVA_SECURITY_SPEC_ECPARAMETERSPEC_HPP_DECL


namespace j2cpp { namespace java { namespace security { namespace spec { class ECPoint; } } } }
namespace j2cpp { namespace java { namespace security { namespace spec { class EllipticCurve; } } } }
namespace j2cpp { namespace java { namespace math { class BigInteger; } } }


#include <java/math/BigInteger.hpp>
#include <java/security/spec/ECPoint.hpp>
#include <java/security/spec/EllipticCurve.hpp>


namespace j2cpp {

namespace java { namespace security { namespace spec {

	class ECParameterSpec;
	class ECParameterSpec
		: public cpp_object<ECParameterSpec>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)

		ECParameterSpec(jobject jobj)
		: cpp_object<ECParameterSpec>(jobj)
		{
		}

		cpp_int getCofactor();
		local_ref< java::security::spec::EllipticCurve > getCurve();
		local_ref< java::security::spec::ECPoint > getGenerator();
		local_ref< java::math::BigInteger > getOrder();
	}; //class ECParameterSpec

} //namespace spec
} //namespace security
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_SPEC_ECPARAMETERSPEC_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_SPEC_ECPARAMETERSPEC_HPP_IMPL
#define J2CPP_JAVA_SECURITY_SPEC_ECPARAMETERSPEC_HPP_IMPL

namespace j2cpp {


template <>
local_ref< java::security::spec::ECParameterSpec > create< java::security::spec::ECParameterSpec>(local_ref< java::security::spec::EllipticCurve > const &a0, local_ref< java::security::spec::ECPoint > const &a1, local_ref< java::math::BigInteger > const &a2, cpp_int const &a3)
{
	return local_ref< java::security::spec::ECParameterSpec >(
		environment::get().get_jenv()->NewObject(
			get_class<java::security::spec::ECParameterSpec::J2CPP_CLASS_NAME>(),
			get_method_id<java::security::spec::ECParameterSpec::J2CPP_CLASS_NAME, java::security::spec::ECParameterSpec::J2CPP_METHOD_NAME(0), java::security::spec::ECParameterSpec::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

cpp_int java::security::spec::ECParameterSpec::getCofactor()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

local_ref< java::security::spec::EllipticCurve > java::security::spec::ECParameterSpec::getCurve()
{
	return local_ref< java::security::spec::EllipticCurve >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

local_ref< java::security::spec::ECPoint > java::security::spec::ECParameterSpec::getGenerator()
{
	return local_ref< java::security::spec::ECPoint >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

local_ref< java::math::BigInteger > java::security::spec::ECParameterSpec::getOrder()
{
	return local_ref< java::math::BigInteger >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(java::security::spec::ECParameterSpec,"java/security/spec/ECParameterSpec")
J2CPP_DEFINE_METHOD(java::security::spec::ECParameterSpec,0,"<init>","(Ljava/security/spec/EllipticCurve;Ljava/security/spec/ECPoint;Ljava/math/BigInteger;I)V")
J2CPP_DEFINE_METHOD(java::security::spec::ECParameterSpec,1,"getCofactor","()I")
J2CPP_DEFINE_METHOD(java::security::spec::ECParameterSpec,2,"getCurve","()Ljava/security/spec/EllipticCurve;")
J2CPP_DEFINE_METHOD(java::security::spec::ECParameterSpec,3,"getGenerator","()Ljava/security/spec/ECPoint;")
J2CPP_DEFINE_METHOD(java::security::spec::ECParameterSpec,4,"getOrder","()Ljava/math/BigInteger;")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_SPEC_ECPARAMETERSPEC_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION