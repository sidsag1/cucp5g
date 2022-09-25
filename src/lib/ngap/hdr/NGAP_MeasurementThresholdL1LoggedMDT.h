/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "./ngap.16_8.asn1"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER`
 */

#ifndef	_NGAP_MeasurementThresholdL1LoggedMDT_H_
#define	_NGAP_MeasurementThresholdL1LoggedMDT_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NGAP_Threshold-RSRP.h"
#include "NGAP_Threshold-RSRQ.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NGAP_MeasurementThresholdL1LoggedMDT_PR {
	NGAP_MeasurementThresholdL1LoggedMDT_PR_NOTHING,	/* No components present */
	NGAP_MeasurementThresholdL1LoggedMDT_PR_threshold_RSRP,
	NGAP_MeasurementThresholdL1LoggedMDT_PR_threshold_RSRQ,
	NGAP_MeasurementThresholdL1LoggedMDT_PR_choice_Extensions
} NGAP_MeasurementThresholdL1LoggedMDT_PR;

/* Forward declarations */
struct NGAP_ProtocolIE_SingleContainer;

/* NGAP_MeasurementThresholdL1LoggedMDT */
typedef struct NGAP_MeasurementThresholdL1LoggedMDT {
	NGAP_MeasurementThresholdL1LoggedMDT_PR present;
	union NGAP_MeasurementThresholdL1LoggedMDT_u {
		NGAP_Threshold_RSRP_t	 threshold_RSRP;
		NGAP_Threshold_RSRQ_t	 threshold_RSRQ;
		struct NGAP_ProtocolIE_SingleContainer	*choice_Extensions;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NGAP_MeasurementThresholdL1LoggedMDT_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NGAP_MeasurementThresholdL1LoggedMDT;
extern asn_CHOICE_specifics_t asn_SPC_NGAP_MeasurementThresholdL1LoggedMDT_specs_1;
extern asn_TYPE_member_t asn_MBR_NGAP_MeasurementThresholdL1LoggedMDT_1[3];
extern asn_per_constraints_t asn_PER_type_NGAP_MeasurementThresholdL1LoggedMDT_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_MeasurementThresholdL1LoggedMDT_H_ */
#include <asn_internal.h>
