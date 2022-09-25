/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "./ngap.16_8.asn1"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER`
 */

#ifndef	_NGAP_Range_H_
#define	_NGAP_Range_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NGAP_Range {
	NGAP_Range_m50	= 0,
	NGAP_Range_m80	= 1,
	NGAP_Range_m180	= 2,
	NGAP_Range_m200	= 3,
	NGAP_Range_m350	= 4,
	NGAP_Range_m400	= 5,
	NGAP_Range_m500	= 6,
	NGAP_Range_m700	= 7,
	NGAP_Range_m1000	= 8
	/*
	 * Enumeration is extensible
	 */
} e_NGAP_Range;

/* NGAP_Range */
typedef long	 NGAP_Range_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_NGAP_Range_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_NGAP_Range;
extern const asn_INTEGER_specifics_t asn_SPC_Range_specs_1;
asn_struct_free_f Range_free;
asn_struct_print_f Range_print;
asn_constr_check_f Range_constraint;
jer_type_encoder_f Range_encode_jer;
per_type_decoder_f Range_decode_aper;
per_type_encoder_f Range_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_Range_H_ */
#include <asn_internal.h>
