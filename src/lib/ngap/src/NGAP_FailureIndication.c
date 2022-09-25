/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "./ngap.16_8.asn1"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER`
 */

#include "NGAP_FailureIndication.h"

#include "NGAP_ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_NGAP_FailureIndication_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NGAP_FailureIndication, uERLFReportContainer),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NGAP_UERLFReportContainer,
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
		"uERLFReportContainer"
		},
	{ ATF_POINTER, 1, offsetof(struct NGAP_FailureIndication, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NGAP_ProtocolExtensionContainer_9626P79,
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
static const int asn_MAP_NGAP_FailureIndication_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_NGAP_FailureIndication_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NGAP_FailureIndication_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* uERLFReportContainer */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_NGAP_FailureIndication_specs_1 = {
	sizeof(struct NGAP_FailureIndication),
	offsetof(struct NGAP_FailureIndication, _asn_ctx),
	asn_MAP_NGAP_FailureIndication_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_NGAP_FailureIndication_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NGAP_FailureIndication = {
	"FailureIndication",
	"FailureIndication",
	&asn_OP_SEQUENCE,
	asn_DEF_NGAP_FailureIndication_tags_1,
	sizeof(asn_DEF_NGAP_FailureIndication_tags_1)
		/sizeof(asn_DEF_NGAP_FailureIndication_tags_1[0]), /* 1 */
	asn_DEF_NGAP_FailureIndication_tags_1,	/* Same as above */
	sizeof(asn_DEF_NGAP_FailureIndication_tags_1)
		/sizeof(asn_DEF_NGAP_FailureIndication_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NGAP_FailureIndication_1,
	2,	/* Elements count */
	&asn_SPC_NGAP_FailureIndication_specs_1	/* Additional specs */
};

