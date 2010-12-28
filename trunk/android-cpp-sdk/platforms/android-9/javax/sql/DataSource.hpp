/*================================================================================
  code generated by: java2cpp
  class: javax.sql.DataSource
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_SQL_DATASOURCE_HPP_DECL
#define J2CPP_JAVAX_SQL_DATASOURCE_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace sql { class Connection; } } }


#include <java/lang/String.hpp>
#include <java/sql/Connection.hpp>


namespace j2cpp {

namespace javax { namespace sql {

	class DataSource;
	class DataSource
		: public cpp_object<DataSource>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		DataSource(jobject jobj)
		: cpp_object<DataSource>(jobj)
		{
		}

		local_ref< java::sql::Connection > getConnection();
		local_ref< java::sql::Connection > getConnection(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&);
	}; //class DataSource

} //namespace sql
} //namespace javax


} //namespace j2cpp

#endif //J2CPP_JAVAX_SQL_DATASOURCE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_SQL_DATASOURCE_HPP_IMPL
#define J2CPP_JAVAX_SQL_DATASOURCE_HPP_IMPL

namespace j2cpp {


local_ref< java::sql::Connection > javax::sql::DataSource::getConnection()
{
	return local_ref< java::sql::Connection >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

local_ref< java::sql::Connection > javax::sql::DataSource::getConnection(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return local_ref< java::sql::Connection >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(javax::sql::DataSource,"javax/sql/DataSource")
J2CPP_DEFINE_METHOD(javax::sql::DataSource,0,"getConnection","()Ljava/sql/Connection;")
J2CPP_DEFINE_METHOD(javax::sql::DataSource,1,"getConnection","(Ljava/lang/String;Ljava/lang/String;)Ljava/sql/Connection;")

} //namespace j2cpp

#endif //J2CPP_JAVAX_SQL_DATASOURCE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION