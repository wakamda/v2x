/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "RSI"
 * 	found in "/home/chengtao/Documents/github/v2x/ADS/v2x_asn/RSI.asn"
 * 	`asn1c -D /home/chengtao/Downloads/v2x_ads_c`
 */

#include "ReferencePath.h"

asn_TYPE_member_t asn_MBR_ReferencePath_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ReferencePath, activePath),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PathPointList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"activePath"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ReferencePath, pathRadius),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Radius,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pathRadius"
		},
};
static const ber_tlv_tag_t asn_DEF_ReferencePath_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ReferencePath_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* activePath */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* pathRadius */
};
asn_SEQUENCE_specifics_t asn_SPC_ReferencePath_specs_1 = {
	sizeof(struct ReferencePath),
	offsetof(struct ReferencePath, _asn_ctx),
	asn_MAP_ReferencePath_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ReferencePath = {
	"ReferencePath",
	"ReferencePath",
	&asn_OP_SEQUENCE,
	asn_DEF_ReferencePath_tags_1,
	sizeof(asn_DEF_ReferencePath_tags_1)
		/sizeof(asn_DEF_ReferencePath_tags_1[0]), /* 1 */
	asn_DEF_ReferencePath_tags_1,	/* Same as above */
	sizeof(asn_DEF_ReferencePath_tags_1)
		/sizeof(asn_DEF_ReferencePath_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ReferencePath_1,
	2,	/* Elements count */
	&asn_SPC_ReferencePath_specs_1	/* Additional specs */
};

