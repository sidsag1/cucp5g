/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "./ngap.16_8.asn1"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER`
 */

#ifndef	_NGAP_CandidateCellID_H_
#define	_NGAP_CandidateCellID_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NGAP_NR-CGI.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NGAP_ProtocolExtensionContainer;

/* NGAP_CandidateCellID */
typedef struct NGAP_CandidateCellID {
	NGAP_NR_CGI_t	 candidateCellID;
	struct NGAP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NGAP_CandidateCellID_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NGAP_CandidateCellID;
extern asn_SEQUENCE_specifics_t asn_SPC_NGAP_CandidateCellID_specs_1;
extern asn_TYPE_member_t asn_MBR_NGAP_CandidateCellID_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_CandidateCellID_H_ */
#include <asn_internal.h>