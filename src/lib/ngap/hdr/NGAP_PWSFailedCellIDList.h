/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "./ngap.16_8.asn1"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER`
 */

#ifndef	_NGAP_PWSFailedCellIDList_H_
#define	_NGAP_PWSFailedCellIDList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NGAP_PWSFailedCellIDList_PR {
	NGAP_PWSFailedCellIDList_PR_NOTHING,	/* No components present */
	NGAP_PWSFailedCellIDList_PR_eUTRA_CGI_PWSFailedList,
	NGAP_PWSFailedCellIDList_PR_nR_CGI_PWSFailedList,
	NGAP_PWSFailedCellIDList_PR_choice_Extensions
} NGAP_PWSFailedCellIDList_PR;

/* Forward declarations */
struct NGAP_EUTRA_CGIList;
struct NGAP_NR_CGIList;
struct NGAP_ProtocolIE_SingleContainer;

/* NGAP_PWSFailedCellIDList */
typedef struct NGAP_PWSFailedCellIDList {
	NGAP_PWSFailedCellIDList_PR present;
	union NGAP_PWSFailedCellIDList_u {
		struct NGAP_EUTRA_CGIList	*eUTRA_CGI_PWSFailedList;
		struct NGAP_NR_CGIList	*nR_CGI_PWSFailedList;
		struct NGAP_ProtocolIE_SingleContainer	*choice_Extensions;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NGAP_PWSFailedCellIDList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NGAP_PWSFailedCellIDList;

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_PWSFailedCellIDList_H_ */
#include <asn_internal.h>