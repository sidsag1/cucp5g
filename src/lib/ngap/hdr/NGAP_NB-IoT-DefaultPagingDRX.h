/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "./ngap.16_8.asn1"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER`
 */

#ifndef	_NGAP_NB_IoT_DefaultPagingDRX_H_
#define	_NGAP_NB_IoT_DefaultPagingDRX_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NGAP_NB_IoT_DefaultPagingDRX {
	NGAP_NB_IoT_DefaultPagingDRX_rf128	= 0,
	NGAP_NB_IoT_DefaultPagingDRX_rf256	= 1,
	NGAP_NB_IoT_DefaultPagingDRX_rf512	= 2,
	NGAP_NB_IoT_DefaultPagingDRX_rf1024	= 3
	/*
	 * Enumeration is extensible
	 */
} e_NGAP_NB_IoT_DefaultPagingDRX;

/* NGAP_NB-IoT-DefaultPagingDRX */
typedef long	 NGAP_NB_IoT_DefaultPagingDRX_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NGAP_NB_IoT_DefaultPagingDRX;
asn_struct_free_f NGAP_NB_IoT_DefaultPagingDRX_free;
asn_struct_print_f NGAP_NB_IoT_DefaultPagingDRX_print;
asn_constr_check_f NGAP_NB_IoT_DefaultPagingDRX_constraint;
jer_type_encoder_f NGAP_NB_IoT_DefaultPagingDRX_encode_jer;
per_type_decoder_f NGAP_NB_IoT_DefaultPagingDRX_decode_aper;
per_type_encoder_f NGAP_NB_IoT_DefaultPagingDRX_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_NB_IoT_DefaultPagingDRX_H_ */
#include <asn_internal.h>
