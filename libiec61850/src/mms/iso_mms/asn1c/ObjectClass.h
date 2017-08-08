/*
 * Generated by asn1c-0.9.21 (http://lionet.info/asn1c)
 * From ASN.1 module "MMS"
 * 	found in "../mms-extended.asn"
 * 	`asn1c -fskeletons-copy`
 */

#ifndef	_ObjectClass_H_
#define	_ObjectClass_H_


#include <asn_application.h>

/* Including external dependencies */
#include <INTEGER.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ObjectClass_PR {
	ObjectClass_PR_NOTHING,	/* No components present */
	ObjectClass_PR_basicObjectClass
} ObjectClass_PR;
typedef enum ObjectClass__basicObjectClass {
	ObjectClass__basicObjectClass_namedVariable	= 0,
	ObjectClass__basicObjectClass_scatteredAccess	= 1,
	ObjectClass__basicObjectClass_namedVariableList	= 2,
	ObjectClass__basicObjectClass_namedType	= 3,
	ObjectClass__basicObjectClass_semaphore	= 4,
	ObjectClass__basicObjectClass_eventCondition	= 5,
	ObjectClass__basicObjectClass_eventAction	= 6,
	ObjectClass__basicObjectClass_eventEnrollment	= 7,
	ObjectClass__basicObjectClass_journal	= 8,
	ObjectClass__basicObjectClass_domain	= 9,
	ObjectClass__basicObjectClass_programInvocation	= 10,
	ObjectClass__basicObjectClass_operatorStation	= 11,
	ObjectClass__basicObjectClass_dataExchange	= 12,
	ObjectClass__basicObjectClass_accessControlList	= 13
} e_ObjectClass__basicObjectClass;

/* ObjectClass */
typedef struct ObjectClass {
	ObjectClass_PR present;
	union ObjectClass_u {
		INTEGER_t	 basicObjectClass;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ObjectClass_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ObjectClass;

#ifdef __cplusplus
}
#endif

#endif	/* _ObjectClass_H_ */
