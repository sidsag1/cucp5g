/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "./ngap.16_8.asn1"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER`
 */

#ifndef	_NGAP_GlobalTWIF_ID_H_
#define	_NGAP_GlobalTWIF_ID_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NGAP_PLMNIdentity.h"
#include "NGAP_TWIF-ID.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NGAP_ProtocolExtensionContainer;

/* NGAP_GlobalTWIF-ID */
typedef struct NGAP_GlobalTWIF_ID {
	NGAP_PLMNIdentity_t	 pLMNIdentity;
	NGAP_TWIF_ID_t	 tWIF_ID;
	struct NGAP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NGAP_GlobalTWIF_ID_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NGAP_GlobalTWIF_ID;

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_GlobalTWIF_ID_H_ */
#include <asn_internal.h>
