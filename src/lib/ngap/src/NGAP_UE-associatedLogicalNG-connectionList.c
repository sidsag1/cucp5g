/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "./ngap.16_8.asn1"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER`
 */

#include "NGAP_UE-associatedLogicalNG-connectionList.h"

#include "NGAP_UE-associatedLogicalNG-connectionItem.h"
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_NGAP_UE_associatedLogicalNG_connectionList_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 16, -1,  1,  65536 }	/* (SIZE(1..65536)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
asn_TYPE_member_t asn_MBR_NGAP_UE_associatedLogicalNG_connectionList_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_NGAP_UE_associatedLogicalNG_connectionItem,
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
		""
		},
};
static const ber_tlv_tag_t asn_DEF_NGAP_UE_associatedLogicalNG_connectionList_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_NGAP_UE_associatedLogicalNG_connectionList_specs_1 = {
	sizeof(struct NGAP_UE_associatedLogicalNG_connectionList),
	offsetof(struct NGAP_UE_associatedLogicalNG_connectionList, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_NGAP_UE_associatedLogicalNG_connectionList = {
	"UE-associatedLogicalNG-connectionList",
	"UE-associatedLogicalNG-connectionList",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_NGAP_UE_associatedLogicalNG_connectionList_tags_1,
	sizeof(asn_DEF_NGAP_UE_associatedLogicalNG_connectionList_tags_1)
		/sizeof(asn_DEF_NGAP_UE_associatedLogicalNG_connectionList_tags_1[0]), /* 1 */
	asn_DEF_NGAP_UE_associatedLogicalNG_connectionList_tags_1,	/* Same as above */
	sizeof(asn_DEF_NGAP_UE_associatedLogicalNG_connectionList_tags_1)
		/sizeof(asn_DEF_NGAP_UE_associatedLogicalNG_connectionList_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NGAP_UE_associatedLogicalNG_connectionList_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_NGAP_UE_associatedLogicalNG_connectionList_1,
	1,	/* Single element */
	&asn_SPC_NGAP_UE_associatedLogicalNG_connectionList_specs_1	/* Additional specs */
};

