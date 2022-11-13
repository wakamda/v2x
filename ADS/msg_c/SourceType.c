/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "RSM"
 * 	found in "/home/chengtao/Documents/github/v2x/ADS/v2x_asn/RSM.asn"
 * 	`asn1c -D /home/chengtao/Downloads/v2x_ads_c`
 */

#include "SourceType.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_SourceType_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_SourceType_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  3,  3,  0,  5 }	/* (0..5,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_SourceType_value2enum_1[] = {
	{ 0,	7,	"unknown" },
	{ 1,	8,	"selfinfo" },
	{ 2,	3,	"v2x" },
	{ 3,	5,	"video" },
	{ 4,	14,	"microwaveRadar" },
	{ 5,	4,	"loop" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_SourceType_enum2value_1[] = {
	5,	/* loop(5) */
	4,	/* microwaveRadar(4) */
	1,	/* selfinfo(1) */
	0,	/* unknown(0) */
	2,	/* v2x(2) */
	3	/* video(3) */
	/* This list is extensible */
};
const asn_INTEGER_specifics_t asn_SPC_SourceType_specs_1 = {
	asn_MAP_SourceType_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_SourceType_enum2value_1,	/* N => "tag"; sorted by N */
	6,	/* Number of elements in the maps */
	7,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_SourceType_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_SourceType = {
	"SourceType",
	"SourceType",
	&asn_OP_NativeEnumerated,
	asn_DEF_SourceType_tags_1,
	sizeof(asn_DEF_SourceType_tags_1)
		/sizeof(asn_DEF_SourceType_tags_1[0]), /* 1 */
	asn_DEF_SourceType_tags_1,	/* Same as above */
	sizeof(asn_DEF_SourceType_tags_1)
		/sizeof(asn_DEF_SourceType_tags_1[0]), /* 1 */
	{ &asn_OER_type_SourceType_constr_1, &asn_PER_type_SourceType_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_SourceType_specs_1	/* Additional specs */
};

