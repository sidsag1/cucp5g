/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-CommonDataTypes"
 * 	found in "./ngap.16_8.asn1"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER`
 */

#ifndef	_NGAP_Presence_H_
#define	_NGAP_Presence_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NGAP_Presence {
	NGAP_Presence_optional	= 0,
	NGAP_Presence_conditional	= 1,
	NGAP_Presence_mandatory	= 2
} e_NGAP_Presence;

/* NGAP_Presence */
typedef long	 NGAP_Presence_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_NGAP_Presence_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_NGAP_Presence;
extern const asn_INTEGER_specifics_t asn_SPC_Presence_specs_1;
asn_struct_free_f Presence_free;
asn_struct_print_f Presence_print;
asn_constr_check_f Presence_constraint;
jer_type_encoder_f Presence_encode_jer;
per_type_decoder_f Presence_decode_aper;
per_type_encoder_f Presence_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_Presence_H_ */
#include <asn_internal.h>
