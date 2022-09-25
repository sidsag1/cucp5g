/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "./ngap.16_8.asn1"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER`
 */

#ifndef	_NGAP_LoggedMDTNr_H_
#define	_NGAP_LoggedMDTNr_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NGAP_LoggingInterval.h"
#include "NGAP_LoggingDuration.h"
#include "NGAP_LoggedMDTTrigger.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NGAP_BluetoothMeasurementConfiguration;
struct NGAP_WLANMeasurementConfiguration;
struct NGAP_SensorMeasurementConfiguration;
struct NGAP_AreaScopeOfNeighCellsList;
struct NGAP_ProtocolExtensionContainer;

/* NGAP_LoggedMDTNr */
typedef struct NGAP_LoggedMDTNr {
	NGAP_LoggingInterval_t	 loggingInterval;
	NGAP_LoggingDuration_t	 loggingDuration;
	NGAP_LoggedMDTTrigger_t	 loggedMDTTrigger;
	struct NGAP_BluetoothMeasurementConfiguration	*bluetoothMeasurementConfiguration;	/* OPTIONAL */
	struct NGAP_WLANMeasurementConfiguration	*wLANMeasurementConfiguration;	/* OPTIONAL */
	struct NGAP_SensorMeasurementConfiguration	*sensorMeasurementConfiguration;	/* OPTIONAL */
	struct NGAP_AreaScopeOfNeighCellsList	*areaScopeOfNeighCellsList;	/* OPTIONAL */
	struct NGAP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NGAP_LoggedMDTNr_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NGAP_LoggedMDTNr;
extern asn_SEQUENCE_specifics_t asn_SPC_NGAP_LoggedMDTNr_specs_1;
extern asn_TYPE_member_t asn_MBR_NGAP_LoggedMDTNr_1[8];

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_LoggedMDTNr_H_ */
#include <asn_internal.h>
