/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "./ngap.16_8.asn1"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER`
 */

#include "NGAP_HandoverType.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NGAP_HandoverType_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  2,  2,  0,  2 }	/* (0..2,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_NGAP_HandoverType_value2enum_1[] = {
	{ 0,	8,	"intra5gs" },
	{ 1,	13,	"fivegs-to-eps" },
	{ 2,	10,	"eps-to-5gs" },
	{ 3,	15,	"fivegs-to-utran" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_NGAP_HandoverType_enum2value_1[] = {
	2,	/* eps-to-5gs(2) */
	1,	/* fivegs-to-eps(1) */
	3,	/* fivegs-to-utran(3) */
	0	/* intra5gs(0) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_NGAP_HandoverType_specs_1 = {
	asn_MAP_NGAP_HandoverType_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_NGAP_HandoverType_enum2value_1,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	4,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NGAP_HandoverType_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_NGAP_HandoverType = {
	"HandoverType",
	"HandoverType",
	&asn_OP_NativeEnumerated,
	asn_DEF_NGAP_HandoverType_tags_1,
	sizeof(asn_DEF_NGAP_HandoverType_tags_1)
		/sizeof(asn_DEF_NGAP_HandoverType_tags_1[0]), /* 1 */
	asn_DEF_NGAP_HandoverType_tags_1,	/* Same as above */
	sizeof(asn_DEF_NGAP_HandoverType_tags_1)
		/sizeof(asn_DEF_NGAP_HandoverType_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NGAP_HandoverType_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NGAP_HandoverType_specs_1	/* Additional specs */
};

