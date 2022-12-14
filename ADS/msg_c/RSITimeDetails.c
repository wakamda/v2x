/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "RSI"
 * 	found in "/home/chengtao/Documents/github/v2x/ADS/v2x_asn/RSI.asn"
 * 	`asn1c -D /home/chengtao/Downloads/v2x_ads_c`
 */

#include "RSITimeDetails.h"

asn_TYPE_member_t asn_MBR_RSITimeDetails_1[] = {
	{ ATF_POINTER, 3, offsetof(struct RSITimeDetails, startTime),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MinuteOfTheYear,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"startTime"
		},
	{ ATF_POINTER, 2, offsetof(struct RSITimeDetails, endTime),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MinuteOfTheYear,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"endTime"
		},
	{ ATF_POINTER, 1, offsetof(struct RSITimeDetails, endTimeConfidence),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TimeConfidence,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"endTimeConfidence"
		},
};
static const int asn_MAP_RSITimeDetails_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_RSITimeDetails_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RSITimeDetails_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* startTime */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* endTime */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* endTimeConfidence */
};
asn_SEQUENCE_specifics_t asn_SPC_RSITimeDetails_specs_1 = {
	sizeof(struct RSITimeDetails),
	offsetof(struct RSITimeDetails, _asn_ctx),
	asn_MAP_RSITimeDetails_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_RSITimeDetails_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RSITimeDetails = {
	"RSITimeDetails",
	"RSITimeDetails",
	&asn_OP_SEQUENCE,
	asn_DEF_RSITimeDetails_tags_1,
	sizeof(asn_DEF_RSITimeDetails_tags_1)
		/sizeof(asn_DEF_RSITimeDetails_tags_1[0]), /* 1 */
	asn_DEF_RSITimeDetails_tags_1,	/* Same as above */
	sizeof(asn_DEF_RSITimeDetails_tags_1)
		/sizeof(asn_DEF_RSITimeDetails_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RSITimeDetails_1,
	3,	/* Elements count */
	&asn_SPC_RSITimeDetails_specs_1	/* Additional specs */
};

