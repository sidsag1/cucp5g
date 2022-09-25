/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "./ngap.16_8.asn1"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER`
 */

#ifndef	_NGAP_M1ThresholdType_H_
#define	_NGAP_M1ThresholdType_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NGAP_Threshold-RSRP.h"
#include "NGAP_Threshold-RSRQ.h"
#include "NGAP_Threshold-SINR.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NGAP_M1ThresholdType_PR {
	NGAP_M1ThresholdType_PR_NOTHING,	/* No components present */
	NGAP_M1ThresholdType_PR_threshold_RSRP,
	NGAP_M1ThresholdType_PR_threshold_RSRQ,
	NGAP_M1ThresholdType_PR_threshold_SINR,
	NGAP_M1ThresholdType_PR_choice_Extensions
} NGAP_M1ThresholdType_PR;

/* Forward declarations */
struct NGAP_ProtocolIE_SingleContainer;

/* NGAP_M1ThresholdType */
typedef struct NGAP_M1ThresholdType {
	NGAP_M1ThresholdType_PR present;
	union NGAP_M1ThresholdType_u {
		NGAP_Threshold_RSRP_t	 threshold_RSRP;
		NGAP_Threshold_RSRQ_t	 threshold_RSRQ;
		NGAP_Threshold_SINR_t	 threshold_SINR;
		struct NGAP_ProtocolIE_SingleContainer	*choice_Extensions;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NGAP_M1ThresholdType_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NGAP_M1ThresholdType;
extern asn_CHOICE_specifics_t asn_SPC_NGAP_M1ThresholdType_specs_1;
extern asn_TYPE_member_t asn_MBR_NGAP_M1ThresholdType_1[4];
extern asn_per_constraints_t asn_PER_type_NGAP_M1ThresholdType_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_M1ThresholdType_H_ */
#include <asn_internal.h>
