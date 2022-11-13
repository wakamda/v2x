/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "RSI"
 * 	found in "/home/chengtao/Documents/github/v2x/ADS/v2x_asn/RSI.asn"
 * 	`asn1c -D /home/chengtao/Downloads/v2x_ads_c`
 */

#include "Description.h"

static int check_permitted_alphabet_2(const void *sptr) {
	/* The underlying type is IA5String */
	const IA5String_t *st = (const IA5String_t *)sptr;
	const uint8_t *ch = st->buf;
	const uint8_t *end = ch + st->size;
	
	for(; ch < end; ch++) {
		uint8_t cv = *ch;
		if(!(cv <= 127)) return -1;
	}
	return 0;
}

static int
memb_textString_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const IA5String_t *st = (const IA5String_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	size = st->size;
	
	if((size >= 1 && size <= 512)
		 && !check_permitted_alphabet_2(st)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_textGB2312_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const OCTET_STRING_t *st = (const OCTET_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	size = st->size;
	
	if((size >= 2 && size <= 512)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_memb_textString_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..512)) */};
static asn_per_constraints_t asn_PER_memb_textString_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7,  0,  127 }	/* (0..127) */,
	{ APC_CONSTRAINED,	 9,  9,  1,  512 }	/* (SIZE(1..512)) */,
	0, 0	/* No PER character map necessary */
};
static asn_oer_constraints_t asn_OER_memb_textGB2312_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(2..512)) */};
static asn_per_constraints_t asn_PER_memb_textGB2312_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 9,  9,  2,  512 }	/* (SIZE(2..512)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_Description_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_Description_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_Description_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Description, choice.textString),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IA5String,
		0,
		{ &asn_OER_memb_textString_constr_2, &asn_PER_memb_textString_constr_2,  memb_textString_constraint_1 },
		0, 0, /* No default value */
		"textString"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Description, choice.textGB2312),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ &asn_OER_memb_textGB2312_constr_3, &asn_PER_memb_textGB2312_constr_3,  memb_textGB2312_constraint_1 },
		0, 0, /* No default value */
		"textGB2312"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_Description_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* textString */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* textGB2312 */
};
asn_CHOICE_specifics_t asn_SPC_Description_specs_1 = {
	sizeof(struct Description),
	offsetof(struct Description, _asn_ctx),
	offsetof(struct Description, present),
	sizeof(((struct Description *)0)->present),
	asn_MAP_Description_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_Description = {
	"Description",
	"Description",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_Description_constr_1, &asn_PER_type_Description_constr_1, CHOICE_constraint },
	asn_MBR_Description_1,
	2,	/* Elements count */
	&asn_SPC_Description_specs_1	/* Additional specs */
};

