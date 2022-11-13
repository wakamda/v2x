/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DefMotion"
 * 	found in "/home/chengtao/Documents/github/v2x/ADS/v2x_asn/DefMotion.asn"
 * 	`asn1c -D /home/chengtao/Downloads/v2x_ads_c`
 */

#include "MotionConfidenceSet.h"

asn_TYPE_member_t asn_MBR_MotionConfidenceSet_1[] = {
	{ ATF_POINTER, 3, offsetof(struct MotionConfidenceSet, speedCfd),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SpeedConfidence,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"speedCfd"
		},
	{ ATF_POINTER, 2, offsetof(struct MotionConfidenceSet, headingCfd),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_HeadingConfidence,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"headingCfd"
		},
	{ ATF_POINTER, 1, offsetof(struct MotionConfidenceSet, steerCfd),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SteeringWheelAngleConfidence,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"steerCfd"
		},
};
static const int asn_MAP_MotionConfidenceSet_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_MotionConfidenceSet_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MotionConfidenceSet_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* speedCfd */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* headingCfd */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* steerCfd */
};
asn_SEQUENCE_specifics_t asn_SPC_MotionConfidenceSet_specs_1 = {
	sizeof(struct MotionConfidenceSet),
	offsetof(struct MotionConfidenceSet, _asn_ctx),
	asn_MAP_MotionConfidenceSet_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_MotionConfidenceSet_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MotionConfidenceSet = {
	"MotionConfidenceSet",
	"MotionConfidenceSet",
	&asn_OP_SEQUENCE,
	asn_DEF_MotionConfidenceSet_tags_1,
	sizeof(asn_DEF_MotionConfidenceSet_tags_1)
		/sizeof(asn_DEF_MotionConfidenceSet_tags_1[0]), /* 1 */
	asn_DEF_MotionConfidenceSet_tags_1,	/* Same as above */
	sizeof(asn_DEF_MotionConfidenceSet_tags_1)
		/sizeof(asn_DEF_MotionConfidenceSet_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_MotionConfidenceSet_1,
	3,	/* Elements count */
	&asn_SPC_MotionConfidenceSet_specs_1	/* Additional specs */
};

