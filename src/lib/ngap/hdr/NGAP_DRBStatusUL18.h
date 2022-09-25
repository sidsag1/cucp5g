/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "./ngap.16_8.asn1"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER`
 */

#ifndef	_NGAP_DRBStatusUL18_H_
#define	_NGAP_DRBStatusUL18_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NGAP_COUNTValueForPDCP-SN18.h"
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NGAP_ProtocolExtensionContainer;

/* NGAP_DRBStatusUL18 */
typedef struct NGAP_DRBStatusUL18 {
	NGAP_COUNTValueForPDCP_SN18_t	 uL_COUNTValue;
	BIT_STRING_t	*receiveStatusOfUL_PDCP_SDUs;	/* OPTIONAL */
	struct NGAP_ProtocolExtensionContainer	*iE_Extension;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NGAP_DRBStatusUL18_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NGAP_DRBStatusUL18;
extern asn_SEQUENCE_specifics_t asn_SPC_NGAP_DRBStatusUL18_specs_1;
extern asn_TYPE_member_t asn_MBR_NGAP_DRBStatusUL18_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_DRBStatusUL18_H_ */
#include <asn_internal.h>
