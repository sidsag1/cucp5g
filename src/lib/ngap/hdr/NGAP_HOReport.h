/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "./ngap.16_8.asn1"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER`
 */

#ifndef	_NGAP_HOReport_H_
#define	_NGAP_HOReport_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include "NGAP_Cause.h"
#include "NGAP_NGRAN-CGI.h"
#include <BIT_STRING.h>
#include "NGAP_MobilityInformation.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NGAP_HOReport__handoverReportType {
	NGAP_HOReport__handoverReportType_ho_too_early	= 0,
	NGAP_HOReport__handoverReportType_ho_to_wrong_cell	= 1,
	NGAP_HOReport__handoverReportType_intersystem_ping_pong	= 2
	/*
	 * Enumeration is extensible
	 */
} e_NGAP_HOReport__handoverReportType;

/* Forward declarations */
struct NGAP_NGRAN_CGI;
struct NGAP_EUTRA_CGI;
struct NGAP_UERLFReportContainer;
struct NGAP_ProtocolExtensionContainer;

/* NGAP_HOReport */
typedef struct NGAP_HOReport {
	long	 handoverReportType;
	NGAP_Cause_t	 handoverCause;
	NGAP_NGRAN_CGI_t	 sourcecellCGI;
	NGAP_NGRAN_CGI_t	 targetcellCGI;
	struct NGAP_NGRAN_CGI	*reestablishmentcellCGI;	/* OPTIONAL */
	BIT_STRING_t	*sourcecellC_RNTI;	/* OPTIONAL */
	struct NGAP_EUTRA_CGI	*targetcellinE_UTRAN;	/* OPTIONAL */
	NGAP_MobilityInformation_t	*mobilityInformation;	/* OPTIONAL */
	struct NGAP_UERLFReportContainer	*uERLFReportContainer;	/* OPTIONAL */
	struct NGAP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NGAP_HOReport_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NGAP_handoverReportType_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NGAP_HOReport;
extern asn_SEQUENCE_specifics_t asn_SPC_NGAP_HOReport_specs_1;
extern asn_TYPE_member_t asn_MBR_NGAP_HOReport_1[10];

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_HOReport_H_ */
#include <asn_internal.h>