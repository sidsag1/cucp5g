/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "./ngap.16_8.asn1"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER`
 */

#include "NGAP_Allowed-PNI-NPN-Item.h"

#include "NGAP_ProtocolExtensionContainer.h"
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NGAP_pNI_NPN_restricted_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  1,  1,  0,  1 }	/* (0..1,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_NGAP_pNI_NPN_restricted_value2enum_3[] = {
	{ 0,	10,	"restricted" },
	{ 1,	14,	"not-restricted" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_NGAP_pNI_NPN_restricted_enum2value_3[] = {
	1,	/* not-restricted(1) */
	0	/* restricted(0) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_NGAP_pNI_NPN_restricted_specs_3 = {
	asn_MAP_NGAP_pNI_NPN_restricted_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_NGAP_pNI_NPN_restricted_enum2value_3,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	3,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NGAP_pNI_NPN_restricted_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NGAP_pNI_NPN_restricted_3 = {
	"pNI-NPN-restricted",
	"pNI-NPN-restricted",
	&asn_OP_NativeEnumerated,
	asn_DEF_NGAP_pNI_NPN_restricted_tags_3,
	sizeof(asn_DEF_NGAP_pNI_NPN_restricted_tags_3)
		/sizeof(asn_DEF_NGAP_pNI_NPN_restricted_tags_3[0]) - 1, /* 1 */
	asn_DEF_NGAP_pNI_NPN_restricted_tags_3,	/* Same as above */
	sizeof(asn_DEF_NGAP_pNI_NPN_restricted_tags_3)
		/sizeof(asn_DEF_NGAP_pNI_NPN_restricted_tags_3[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NGAP_pNI_NPN_restricted_constr_3,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NGAP_pNI_NPN_restricted_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NGAP_Allowed_PNI_NPN_Item_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NGAP_Allowed_PNI_NPN_Item, pLMNIdentity),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NGAP_PLMNIdentity,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"pLMNIdentity"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NGAP_Allowed_PNI_NPN_Item, pNI_NPN_restricted),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NGAP_pNI_NPN_restricted_3,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"pNI-NPN-restricted"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NGAP_Allowed_PNI_NPN_Item, allowed_CAG_List_per_PLMN),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NGAP_Allowed_CAG_List_per_PLMN,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"allowed-CAG-List-per-PLMN"
		},
	{ ATF_POINTER, 1, offsetof(struct NGAP_Allowed_PNI_NPN_Item, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NGAP_ProtocolExtensionContainer_9626P3,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_NGAP_Allowed_PNI_NPN_Item_oms_1[] = { 3 };
static const ber_tlv_tag_t asn_DEF_NGAP_Allowed_PNI_NPN_Item_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NGAP_Allowed_PNI_NPN_Item_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pLMNIdentity */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* pNI-NPN-restricted */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* allowed-CAG-List-per-PLMN */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_NGAP_Allowed_PNI_NPN_Item_specs_1 = {
	sizeof(struct NGAP_Allowed_PNI_NPN_Item),
	offsetof(struct NGAP_Allowed_PNI_NPN_Item, _asn_ctx),
	asn_MAP_NGAP_Allowed_PNI_NPN_Item_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_NGAP_Allowed_PNI_NPN_Item_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NGAP_Allowed_PNI_NPN_Item = {
	"Allowed-PNI-NPN-Item",
	"Allowed-PNI-NPN-Item",
	&asn_OP_SEQUENCE,
	asn_DEF_NGAP_Allowed_PNI_NPN_Item_tags_1,
	sizeof(asn_DEF_NGAP_Allowed_PNI_NPN_Item_tags_1)
		/sizeof(asn_DEF_NGAP_Allowed_PNI_NPN_Item_tags_1[0]), /* 1 */
	asn_DEF_NGAP_Allowed_PNI_NPN_Item_tags_1,	/* Same as above */
	sizeof(asn_DEF_NGAP_Allowed_PNI_NPN_Item_tags_1)
		/sizeof(asn_DEF_NGAP_Allowed_PNI_NPN_Item_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NGAP_Allowed_PNI_NPN_Item_1,
	4,	/* Elements count */
	&asn_SPC_NGAP_Allowed_PNI_NPN_Item_specs_1	/* Additional specs */
};

