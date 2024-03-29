/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "./ngap.16_8.asn1"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER`
 */

#ifndef	_NGAP_UserLocationInformationTWIF_H_
#define	_NGAP_UserLocationInformationTWIF_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NGAP_TWAP-ID.h"
#include "NGAP_TransportLayerAddress.h"
#include "NGAP_PortNumber.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NGAP_ProtocolExtensionContainer;

/* NGAP_UserLocationInformationTWIF */
typedef struct NGAP_UserLocationInformationTWIF {
	NGAP_TWAP_ID_t	 tWAP_ID;
	NGAP_TransportLayerAddress_t	 iPAddress;
	NGAP_PortNumber_t	*portNumber;	/* OPTIONAL */
	struct NGAP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NGAP_UserLocationInformationTWIF_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NGAP_UserLocationInformationTWIF;

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_UserLocationInformationTWIF_H_ */
#include <asn_internal.h>
