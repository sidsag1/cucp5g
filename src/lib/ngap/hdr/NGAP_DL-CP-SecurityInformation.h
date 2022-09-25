/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "./ngap.16_8.asn1"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER`
 */

#ifndef	_NGAP_DL_CP_SecurityInformation_H_
#define	_NGAP_DL_CP_SecurityInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NGAP_DL-NAS-MAC.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NGAP_ProtocolExtensionContainer;

/* NGAP_DL-CP-SecurityInformation */
typedef struct NGAP_DL_CP_SecurityInformation {
	NGAP_DL_NAS_MAC_t	 dl_NAS_MAC;
	struct NGAP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NGAP_DL_CP_SecurityInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NGAP_DL_CP_SecurityInformation;

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_DL_CP_SecurityInformation_H_ */
#include <asn_internal.h>
