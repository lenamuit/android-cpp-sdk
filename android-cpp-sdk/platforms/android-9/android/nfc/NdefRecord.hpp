/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.nfc.NdefRecord
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_NFC_NDEFRECORD_HPP_DECL
#define J2CPP_ANDROID_NFC_NDEFRECORD_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace android { namespace os { class Parcelable; } } }
namespace j2cpp { namespace android { namespace os { class Parcel; } } }
namespace j2cpp { namespace android { namespace os { namespace Parcelable_ { class Creator; } } } }


#include <android/os/Parcel.hpp>
#include <android/os/Parcelable.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace nfc {

	class NdefRecord;
	class NdefRecord
		: public object<NdefRecord>
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
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)
		J2CPP_DECLARE_FIELD(5)
		J2CPP_DECLARE_FIELD(6)
		J2CPP_DECLARE_FIELD(7)
		J2CPP_DECLARE_FIELD(8)
		J2CPP_DECLARE_FIELD(9)
		J2CPP_DECLARE_FIELD(10)
		J2CPP_DECLARE_FIELD(11)
		J2CPP_DECLARE_FIELD(12)
		J2CPP_DECLARE_FIELD(13)
		J2CPP_DECLARE_FIELD(14)

		explicit NdefRecord(jobject jobj)
		: object<NdefRecord>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<android::os::Parcelable>() const;


		NdefRecord(jshort, local_ref< array<jbyte,1> > const&, local_ref< array<jbyte,1> > const&, local_ref< array<jbyte,1> > const&);
		NdefRecord(local_ref< array<jbyte,1> > const&);
		jshort getTnf();
		local_ref< array<jbyte,1> > getType();
		local_ref< array<jbyte,1> > getId();
		local_ref< array<jbyte,1> > getPayload();
		local_ref< array<jbyte,1> > toByteArray();
		jint describeContents();
		void writeToParcel(local_ref< android::os::Parcel >  const&, jint);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jshort > TNF_EMPTY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jshort > TNF_WELL_KNOWN;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), jshort > TNF_MIME_MEDIA;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), jshort > TNF_ABSOLUTE_URI;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), jshort > TNF_EXTERNAL_TYPE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), jshort > TNF_UNKNOWN;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), jshort > TNF_UNCHANGED;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(7), J2CPP_FIELD_SIGNATURE(7), local_ref< array<jbyte,1> > > RTD_TEXT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(8), J2CPP_FIELD_SIGNATURE(8), local_ref< array<jbyte,1> > > RTD_URI;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(9), J2CPP_FIELD_SIGNATURE(9), local_ref< array<jbyte,1> > > RTD_SMART_POSTER;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(10), J2CPP_FIELD_SIGNATURE(10), local_ref< array<jbyte,1> > > RTD_ALTERNATIVE_CARRIER;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(11), J2CPP_FIELD_SIGNATURE(11), local_ref< array<jbyte,1> > > RTD_HANDOVER_CARRIER;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(12), J2CPP_FIELD_SIGNATURE(12), local_ref< array<jbyte,1> > > RTD_HANDOVER_REQUEST;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(13), J2CPP_FIELD_SIGNATURE(13), local_ref< array<jbyte,1> > > RTD_HANDOVER_SELECT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(14), J2CPP_FIELD_SIGNATURE(14), local_ref< android::os::Parcelable_::Creator > > CREATOR;
	}; //class NdefRecord

} //namespace nfc
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_NFC_NDEFRECORD_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_NFC_NDEFRECORD_HPP_IMPL
#define J2CPP_ANDROID_NFC_NDEFRECORD_HPP_IMPL

namespace j2cpp {



android::nfc::NdefRecord::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::nfc::NdefRecord::operator local_ref<android::os::Parcelable>() const
{
	return local_ref<android::os::Parcelable>(get_jobject());
}


android::nfc::NdefRecord::NdefRecord(jshort a0, local_ref< array<jbyte,1> > const &a1, local_ref< array<jbyte,1> > const &a2, local_ref< array<jbyte,1> > const &a3)
: object<android::nfc::NdefRecord>(
	call_new_object<
		android::nfc::NdefRecord::J2CPP_CLASS_NAME,
		android::nfc::NdefRecord::J2CPP_METHOD_NAME(0),
		android::nfc::NdefRecord::J2CPP_METHOD_SIGNATURE(0)>
	(a0, a1, a2, a3)
)
{
}



android::nfc::NdefRecord::NdefRecord(local_ref< array<jbyte,1> > const &a0)
: object<android::nfc::NdefRecord>(
	call_new_object<
		android::nfc::NdefRecord::J2CPP_CLASS_NAME,
		android::nfc::NdefRecord::J2CPP_METHOD_NAME(1),
		android::nfc::NdefRecord::J2CPP_METHOD_SIGNATURE(1)>
	(a0)
)
{
}


jshort android::nfc::NdefRecord::getTnf()
{
	return call_method<
		android::nfc::NdefRecord::J2CPP_CLASS_NAME,
		android::nfc::NdefRecord::J2CPP_METHOD_NAME(2),
		android::nfc::NdefRecord::J2CPP_METHOD_SIGNATURE(2), 
		jshort >
	(get_jobject());
}

local_ref< array<jbyte,1> > android::nfc::NdefRecord::getType()
{
	return call_method<
		android::nfc::NdefRecord::J2CPP_CLASS_NAME,
		android::nfc::NdefRecord::J2CPP_METHOD_NAME(3),
		android::nfc::NdefRecord::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< array<jbyte,1> > >
	(get_jobject());
}

local_ref< array<jbyte,1> > android::nfc::NdefRecord::getId()
{
	return call_method<
		android::nfc::NdefRecord::J2CPP_CLASS_NAME,
		android::nfc::NdefRecord::J2CPP_METHOD_NAME(4),
		android::nfc::NdefRecord::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< array<jbyte,1> > >
	(get_jobject());
}

local_ref< array<jbyte,1> > android::nfc::NdefRecord::getPayload()
{
	return call_method<
		android::nfc::NdefRecord::J2CPP_CLASS_NAME,
		android::nfc::NdefRecord::J2CPP_METHOD_NAME(5),
		android::nfc::NdefRecord::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< array<jbyte,1> > >
	(get_jobject());
}

local_ref< array<jbyte,1> > android::nfc::NdefRecord::toByteArray()
{
	return call_method<
		android::nfc::NdefRecord::J2CPP_CLASS_NAME,
		android::nfc::NdefRecord::J2CPP_METHOD_NAME(6),
		android::nfc::NdefRecord::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< array<jbyte,1> > >
	(get_jobject());
}

jint android::nfc::NdefRecord::describeContents()
{
	return call_method<
		android::nfc::NdefRecord::J2CPP_CLASS_NAME,
		android::nfc::NdefRecord::J2CPP_METHOD_NAME(7),
		android::nfc::NdefRecord::J2CPP_METHOD_SIGNATURE(7), 
		jint >
	(get_jobject());
}

void android::nfc::NdefRecord::writeToParcel(local_ref< android::os::Parcel > const &a0, jint a1)
{
	return call_method<
		android::nfc::NdefRecord::J2CPP_CLASS_NAME,
		android::nfc::NdefRecord::J2CPP_METHOD_NAME(8),
		android::nfc::NdefRecord::J2CPP_METHOD_SIGNATURE(8), 
		void >
	(get_jobject(), a0, a1);
}



static_field<
	android::nfc::NdefRecord::J2CPP_CLASS_NAME,
	android::nfc::NdefRecord::J2CPP_FIELD_NAME(0),
	android::nfc::NdefRecord::J2CPP_FIELD_SIGNATURE(0),
	jshort
> android::nfc::NdefRecord::TNF_EMPTY;

static_field<
	android::nfc::NdefRecord::J2CPP_CLASS_NAME,
	android::nfc::NdefRecord::J2CPP_FIELD_NAME(1),
	android::nfc::NdefRecord::J2CPP_FIELD_SIGNATURE(1),
	jshort
> android::nfc::NdefRecord::TNF_WELL_KNOWN;

static_field<
	android::nfc::NdefRecord::J2CPP_CLASS_NAME,
	android::nfc::NdefRecord::J2CPP_FIELD_NAME(2),
	android::nfc::NdefRecord::J2CPP_FIELD_SIGNATURE(2),
	jshort
> android::nfc::NdefRecord::TNF_MIME_MEDIA;

static_field<
	android::nfc::NdefRecord::J2CPP_CLASS_NAME,
	android::nfc::NdefRecord::J2CPP_FIELD_NAME(3),
	android::nfc::NdefRecord::J2CPP_FIELD_SIGNATURE(3),
	jshort
> android::nfc::NdefRecord::TNF_ABSOLUTE_URI;

static_field<
	android::nfc::NdefRecord::J2CPP_CLASS_NAME,
	android::nfc::NdefRecord::J2CPP_FIELD_NAME(4),
	android::nfc::NdefRecord::J2CPP_FIELD_SIGNATURE(4),
	jshort
> android::nfc::NdefRecord::TNF_EXTERNAL_TYPE;

static_field<
	android::nfc::NdefRecord::J2CPP_CLASS_NAME,
	android::nfc::NdefRecord::J2CPP_FIELD_NAME(5),
	android::nfc::NdefRecord::J2CPP_FIELD_SIGNATURE(5),
	jshort
> android::nfc::NdefRecord::TNF_UNKNOWN;

static_field<
	android::nfc::NdefRecord::J2CPP_CLASS_NAME,
	android::nfc::NdefRecord::J2CPP_FIELD_NAME(6),
	android::nfc::NdefRecord::J2CPP_FIELD_SIGNATURE(6),
	jshort
> android::nfc::NdefRecord::TNF_UNCHANGED;

static_field<
	android::nfc::NdefRecord::J2CPP_CLASS_NAME,
	android::nfc::NdefRecord::J2CPP_FIELD_NAME(7),
	android::nfc::NdefRecord::J2CPP_FIELD_SIGNATURE(7),
	local_ref< array<jbyte,1> >
> android::nfc::NdefRecord::RTD_TEXT;

static_field<
	android::nfc::NdefRecord::J2CPP_CLASS_NAME,
	android::nfc::NdefRecord::J2CPP_FIELD_NAME(8),
	android::nfc::NdefRecord::J2CPP_FIELD_SIGNATURE(8),
	local_ref< array<jbyte,1> >
> android::nfc::NdefRecord::RTD_URI;

static_field<
	android::nfc::NdefRecord::J2CPP_CLASS_NAME,
	android::nfc::NdefRecord::J2CPP_FIELD_NAME(9),
	android::nfc::NdefRecord::J2CPP_FIELD_SIGNATURE(9),
	local_ref< array<jbyte,1> >
> android::nfc::NdefRecord::RTD_SMART_POSTER;

static_field<
	android::nfc::NdefRecord::J2CPP_CLASS_NAME,
	android::nfc::NdefRecord::J2CPP_FIELD_NAME(10),
	android::nfc::NdefRecord::J2CPP_FIELD_SIGNATURE(10),
	local_ref< array<jbyte,1> >
> android::nfc::NdefRecord::RTD_ALTERNATIVE_CARRIER;

static_field<
	android::nfc::NdefRecord::J2CPP_CLASS_NAME,
	android::nfc::NdefRecord::J2CPP_FIELD_NAME(11),
	android::nfc::NdefRecord::J2CPP_FIELD_SIGNATURE(11),
	local_ref< array<jbyte,1> >
> android::nfc::NdefRecord::RTD_HANDOVER_CARRIER;

static_field<
	android::nfc::NdefRecord::J2CPP_CLASS_NAME,
	android::nfc::NdefRecord::J2CPP_FIELD_NAME(12),
	android::nfc::NdefRecord::J2CPP_FIELD_SIGNATURE(12),
	local_ref< array<jbyte,1> >
> android::nfc::NdefRecord::RTD_HANDOVER_REQUEST;

static_field<
	android::nfc::NdefRecord::J2CPP_CLASS_NAME,
	android::nfc::NdefRecord::J2CPP_FIELD_NAME(13),
	android::nfc::NdefRecord::J2CPP_FIELD_SIGNATURE(13),
	local_ref< array<jbyte,1> >
> android::nfc::NdefRecord::RTD_HANDOVER_SELECT;

static_field<
	android::nfc::NdefRecord::J2CPP_CLASS_NAME,
	android::nfc::NdefRecord::J2CPP_FIELD_NAME(14),
	android::nfc::NdefRecord::J2CPP_FIELD_SIGNATURE(14),
	local_ref< android::os::Parcelable_::Creator >
> android::nfc::NdefRecord::CREATOR;


J2CPP_DEFINE_CLASS(android::nfc::NdefRecord,"android/nfc/NdefRecord")
J2CPP_DEFINE_METHOD(android::nfc::NdefRecord,0,"<init>","(S[B[B[B)V")
J2CPP_DEFINE_METHOD(android::nfc::NdefRecord,1,"<init>","([B)V")
J2CPP_DEFINE_METHOD(android::nfc::NdefRecord,2,"getTnf","()S")
J2CPP_DEFINE_METHOD(android::nfc::NdefRecord,3,"getType","()[B")
J2CPP_DEFINE_METHOD(android::nfc::NdefRecord,4,"getId","()[B")
J2CPP_DEFINE_METHOD(android::nfc::NdefRecord,5,"getPayload","()[B")
J2CPP_DEFINE_METHOD(android::nfc::NdefRecord,6,"toByteArray","()[B")
J2CPP_DEFINE_METHOD(android::nfc::NdefRecord,7,"describeContents","()I")
J2CPP_DEFINE_METHOD(android::nfc::NdefRecord,8,"writeToParcel","(Landroid/os/Parcel;I)V")
J2CPP_DEFINE_METHOD(android::nfc::NdefRecord,9,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::nfc::NdefRecord,0,"TNF_EMPTY","S")
J2CPP_DEFINE_FIELD(android::nfc::NdefRecord,1,"TNF_WELL_KNOWN","S")
J2CPP_DEFINE_FIELD(android::nfc::NdefRecord,2,"TNF_MIME_MEDIA","S")
J2CPP_DEFINE_FIELD(android::nfc::NdefRecord,3,"TNF_ABSOLUTE_URI","S")
J2CPP_DEFINE_FIELD(android::nfc::NdefRecord,4,"TNF_EXTERNAL_TYPE","S")
J2CPP_DEFINE_FIELD(android::nfc::NdefRecord,5,"TNF_UNKNOWN","S")
J2CPP_DEFINE_FIELD(android::nfc::NdefRecord,6,"TNF_UNCHANGED","S")
J2CPP_DEFINE_FIELD(android::nfc::NdefRecord,7,"RTD_TEXT","[B")
J2CPP_DEFINE_FIELD(android::nfc::NdefRecord,8,"RTD_URI","[B")
J2CPP_DEFINE_FIELD(android::nfc::NdefRecord,9,"RTD_SMART_POSTER","[B")
J2CPP_DEFINE_FIELD(android::nfc::NdefRecord,10,"RTD_ALTERNATIVE_CARRIER","[B")
J2CPP_DEFINE_FIELD(android::nfc::NdefRecord,11,"RTD_HANDOVER_CARRIER","[B")
J2CPP_DEFINE_FIELD(android::nfc::NdefRecord,12,"RTD_HANDOVER_REQUEST","[B")
J2CPP_DEFINE_FIELD(android::nfc::NdefRecord,13,"RTD_HANDOVER_SELECT","[B")
J2CPP_DEFINE_FIELD(android::nfc::NdefRecord,14,"CREATOR","Landroid/os/Parcelable$Creator;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_NFC_NDEFRECORD_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION