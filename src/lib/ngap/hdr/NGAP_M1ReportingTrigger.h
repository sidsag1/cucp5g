/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "./ngap.16_8.asn1"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER`
 */

#ifndef	_NGAP_M1ReportingTrigger_H_
#define	_NGAP_M1ReportingTrigger_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NGAP_M1ReportingTrigger {
	NGAP_M1ReportingTrigger_periodic	= 0,
	NGAP_M1ReportingTrigger_a2eventtriggered	= 1,
	NGAP_M1ReportingTrigger_a2eventtriggered_periodic	= 2
	/*
	 * Enumeration is extensible
	 */
} e_NGAP_M1ReportingTrigger;

/* NGAP_M1ReportingTrigger */
typedef long	 NGAP_M1ReportingTrigger_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_NGAP_M1ReportingTrigger_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_NGAP_M1ReportingTrigger;
extern const asn_INTEGER_specifics_t asn_SPC_M1ReportingTrigger_specs_1;
asn_struct_free_f M1ReportingTrigger_free;
asn_struct_print_f M1ReportingTrigger_print;
asn_constr_check_f M1ReportingTrigger_constraint;
jer_type_encoder_f M1ReportingTrigger_encode_jer;
per_type_decoder_f M1ReportingTrigger_decode_aper;
per_type_encoder_f M1ReportingTrigger_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_M1ReportingTrigger_H_ */
#include <asn_internal.h>