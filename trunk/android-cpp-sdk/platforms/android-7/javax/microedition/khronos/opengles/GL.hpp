/*================================================================================
  code generated by: java2cpp
  class: javax.microedition.khronos.opengles.GL
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_MICROEDITION_KHRONOS_OPENGLES_GL_HPP_DECL
#define J2CPP_JAVAX_MICROEDITION_KHRONOS_OPENGLES_GL_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>


namespace j2cpp {

namespace javax { namespace microedition { namespace khronos { namespace opengles {

	class GL;
	class GL
		: public cpp_object<GL>
	{
	public:

		J2CPP_DECLARE_CLASS


		explicit GL(jobject jobj)
		: cpp_object<GL>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;

	}; //class GL

} //namespace opengles
} //namespace khronos
} //namespace microedition
} //namespace javax

} //namespace j2cpp

#endif //J2CPP_JAVAX_MICROEDITION_KHRONOS_OPENGLES_GL_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_MICROEDITION_KHRONOS_OPENGLES_GL_HPP_IMPL
#define J2CPP_JAVAX_MICROEDITION_KHRONOS_OPENGLES_GL_HPP_IMPL

namespace j2cpp {



javax::microedition::khronos::opengles::GL::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}

J2CPP_DEFINE_CLASS(javax::microedition::khronos::opengles::GL,"javax/microedition/khronos/opengles/GL")

} //namespace j2cpp

#endif //J2CPP_JAVAX_MICROEDITION_KHRONOS_OPENGLES_GL_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION