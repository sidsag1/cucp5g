/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "./ngap.16_8.asn1"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER`
 */

#ifndef	_NGAP_RSN_H_
#define	_NGAP_RSN_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NGAP_RSN {
	NGAP_RSN_v1	= 0,
	NGAP_RSN_v2	= 1
	/*
	 * Enumeration is extensible
	 */
} e_NGAP_RSN;

/* NGAP_RSN */
typedef long	 NGAP_RSN_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_NGAP_RSN_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_NGAP_RSN;
extern const asn_INTEGER_specifics_t asn_SPC_RSN_specs_1;
asn_struct_free_f RSN_free;
asn_struct_print_f RSN_print;
asn_constr_check_f RSN_constraint;
jer_type_encoder_f RSN_encode_jer;
per_type_decoder_f RSN_decode_aper;
per_type_encoder_f RSN_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_RSN_H_ */
#include <asn_internal.h>
