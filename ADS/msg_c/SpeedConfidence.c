/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DefMotion"
 * 	found in "/home/chengtao/Documents/github/v2x/ADS/v2x_asn/DefMotion.asn"
 * 	`asn1c -D /home/chengtao/Downloads/v2x_ads_c`
 */

#include "SpeedConfidence.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_SpeedConfidence_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_SpeedConfidence_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_SpeedConfidence_value2enum_1[] = {
	{ 0,	11,	"unavailable" },
	{ 1,	9,	"prec100ms" },
	{ 2,	8,	"prec10ms" },
	{ 3,	7,	"prec5ms" },
	{ 4,	7,	"prec1ms" },
	{ 5,	9,	"prec0-1ms" },
	{ 6,	10,	"prec0-05ms" },
	{ 7,	10,	"prec0-01ms" }
};
static const unsigned int asn_MAP_SpeedConfidence_enum2value_1[] = {
	7,	/* prec0-01ms(7) */
	6,	/* prec0-05ms(6) */
	5,	/* prec0-1ms(5) */
	1,	/* prec100ms(1) */
	2,	/* prec10ms(2) */
	4,	/* prec1ms(4) */
	3,	/* prec5ms(3) */
	0	/* unavailable(0) */
};
const asn_INTEGER_specifics_t asn_SPC_SpeedConfidence_specs_1 = {
	asn_MAP_SpeedConfidence_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_SpeedConfidence_enum2value_1,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_SpeedConfidence_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_SpeedConfidence = {
	"SpeedConfidence",
	"SpeedConfidence",
	&asn_OP_NativeEnumerated,
	asn_DEF_SpeedConfidence_tags_1,
	sizeof(asn_DEF_SpeedConfidence_tags_1)
		/sizeof(asn_DEF_SpeedConfidence_tags_1[0]), /* 1 */
	asn_DEF_SpeedConfidence_tags_1,	/* Same as above */
	sizeof(asn_DEF_SpeedConfidence_tags_1)
		/sizeof(asn_DEF_SpeedConfidence_tags_1[0]), /* 1 */
	{ &asn_OER_type_SpeedConfidence_constr_1, &asn_PER_type_SpeedConfidence_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_SpeedConfidence_specs_1	/* Additional specs */
};

