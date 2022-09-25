/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "./ngap.16_8.asn1"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER`
 */

#ifndef	_NGAP_PDUSessionResourceModifyIndicationUnsuccessfulTransfer_H_
#define	_NGAP_PDUSessionResourceModifyIndicationUnsuccessfulTransfer_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NGAP_Cause.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NGAP_ProtocolExtensionContainer;

/* NGAP_PDUSessionResourceModifyIndicationUnsuccessfulTransfer */
typedef struct NGAP_PDUSessionResourceModifyIndicationUnsuccessfulTransfer {
	NGAP_Cause_t	 cause;
	struct NGAP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NGAP_PDUSessionResourceModifyIndicationUnsuccessfulTransfer_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NGAP_PDUSessionResourceModifyIndicationUnsuccessfulTransfer;

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_PDUSessionResourceModifyIndicationUnsuccessfulTransfer_H_ */
#include <asn_internal.h>
