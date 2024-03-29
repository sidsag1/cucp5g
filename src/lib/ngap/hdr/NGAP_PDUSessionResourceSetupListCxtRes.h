/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "./ngap.16_8.asn1"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER`
 */

#ifndef	_NGAP_PDUSessionResourceSetupListCxtRes_H_
#define	_NGAP_PDUSessionResourceSetupListCxtRes_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NGAP_PDUSessionResourceSetupItemCxtRes;

/* NGAP_PDUSessionResourceSetupListCxtRes */
typedef struct NGAP_PDUSessionResourceSetupListCxtRes {
	A_SEQUENCE_OF(struct NGAP_PDUSessionResourceSetupItemCxtRes) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NGAP_PDUSessionResourceSetupListCxtRes_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NGAP_PDUSessionResourceSetupListCxtRes;

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_PDUSessionResourceSetupListCxtRes_H_ */
#include <asn_internal.h>
