/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SPATIntersectionState"
 * 	found in "/home/chengtao/Documents/github/v2x/ADS/v2x_asn/SPATIntersectionState.asn"
 * 	`asn1c -D /home/chengtao/Downloads/v2x_ads_c`
 */

#include "PhaseState.h"

asn_TYPE_member_t asn_MBR_PhaseState_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PhaseState, light),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LightState,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"light"
		},
	{ ATF_POINTER, 1, offsetof(struct PhaseState, timing),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TimeChangeDetails,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"timing"
		},
};
static const int asn_MAP_PhaseState_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_PhaseState_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PhaseState_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* light */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* timing */
};
asn_SEQUENCE_specifics_t asn_SPC_PhaseState_specs_1 = {
	sizeof(struct PhaseState),
	offsetof(struct PhaseState, _asn_ctx),
	asn_MAP_PhaseState_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_PhaseState_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_PhaseState = {
	"PhaseState",
	"PhaseState",
	&asn_OP_SEQUENCE,
	asn_DEF_PhaseState_tags_1,
	sizeof(asn_DEF_PhaseState_tags_1)
		/sizeof(asn_DEF_PhaseState_tags_1[0]), /* 1 */
	asn_DEF_PhaseState_tags_1,	/* Same as above */
	sizeof(asn_DEF_PhaseState_tags_1)
		/sizeof(asn_DEF_PhaseState_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_PhaseState_1,
	2,	/* Elements count */
	&asn_SPC_PhaseState_specs_1	/* Additional specs */
};

