/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "./ngap.16_8.asn1"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER`
 */

#ifndef	_NGAP_SONInformationReply_H_
#define	_NGAP_SONInformationReply_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NGAP_XnTNLConfigurationInfo;
struct NGAP_ProtocolExtensionContainer;

/* NGAP_SONInformationReply */
typedef struct NGAP_SONInformationReply {
	struct NGAP_XnTNLConfigurationInfo	*xnTNLConfigurationInfo;	/* OPTIONAL */
	struct NGAP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NGAP_SONInformationReply_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NGAP_SONInformationReply;
extern asn_SEQUENCE_specifics_t asn_SPC_NGAP_SONInformationReply_specs_1;
extern asn_TYPE_member_t asn_MBR_NGAP_SONInformationReply_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_SONInformationReply_H_ */
#include <asn_internal.h>
