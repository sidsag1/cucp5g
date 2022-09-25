/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "./ngap.16_8.asn1"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER`
 */

#ifndef	_NGAP_PDUSessionUsageReport_H_
#define	_NGAP_PDUSessionUsageReport_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include "NGAP_VolumeTimedReportList.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NGAP_PDUSessionUsageReport__rATType {
	NGAP_PDUSessionUsageReport__rATType_nr	= 0,
	NGAP_PDUSessionUsageReport__rATType_eutra	= 1,
	/*
	 * Enumeration is extensible
	 */
	NGAP_PDUSessionUsageReport__rATType_nr_unlicensed	= 2,
	NGAP_PDUSessionUsageReport__rATType_e_utra_unlicensed	= 3
} e_NGAP_PDUSessionUsageReport__rATType;

/* Forward declarations */
struct NGAP_ProtocolExtensionContainer;

/* NGAP_PDUSessionUsageReport */
typedef struct NGAP_PDUSessionUsageReport {
	long	 rATType;
	NGAP_VolumeTimedReportList_t	 pDUSessionTimedReportList;
	struct NGAP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NGAP_PDUSessionUsageReport_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NGAP_rATType_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NGAP_PDUSessionUsageReport;
extern asn_SEQUENCE_specifics_t asn_SPC_NGAP_PDUSessionUsageReport_specs_1;
extern asn_TYPE_member_t asn_MBR_NGAP_PDUSessionUsageReport_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_PDUSessionUsageReport_H_ */
#include <asn_internal.h>
