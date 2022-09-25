/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "./ngap.16_8.asn1"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER`
 */

#ifndef	_NGAP_TargetRNC_ID_H_
#define	_NGAP_TargetRNC_ID_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NGAP_LAI.h"
#include "NGAP_RNC-ID.h"
#include "NGAP_ExtendedRNC-ID.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NGAP_ProtocolExtensionContainer;

/* NGAP_TargetRNC-ID */
typedef struct NGAP_TargetRNC_ID {
	NGAP_LAI_t	 lAI;
	NGAP_RNC_ID_t	 rNC_ID;
	NGAP_ExtendedRNC_ID_t	*extendedRNC_ID;	/* OPTIONAL */
	struct NGAP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NGAP_TargetRNC_ID_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NGAP_TargetRNC_ID;

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_TargetRNC_ID_H_ */
#include <asn_internal.h>
