/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-PDU-Contents"
 * 	found in "./ngap.16_8.asn1"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER`
 */

#ifndef	_NGAP_UETNLABindingReleaseRequest_H_
#define	_NGAP_UETNLABindingReleaseRequest_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NGAP_ProtocolIE-Container.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* NGAP_UETNLABindingReleaseRequest */
typedef struct NGAP_UETNLABindingReleaseRequest {
	NGAP_ProtocolIE_Container_9575P85_t	 protocolIEs;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NGAP_UETNLABindingReleaseRequest_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NGAP_UETNLABindingReleaseRequest;
extern asn_SEQUENCE_specifics_t asn_SPC_NGAP_UETNLABindingReleaseRequest_specs_1;
extern asn_TYPE_member_t asn_MBR_NGAP_UETNLABindingReleaseRequest_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_UETNLABindingReleaseRequest_H_ */
#include <asn_internal.h>
