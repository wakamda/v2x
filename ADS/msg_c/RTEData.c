/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "RSI"
 * 	found in "/home/chengtao/Documents/github/v2x/ADS/v2x_asn/RSI.asn"
 * 	`asn1c -D /home/chengtao/Downloads/v2x_ads_c`
 */

#include "RTEData.h"

static int
memb_rteId_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 255)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_memb_rteId_constr_2 CC_NOTUSED = {
	{ 1, 1 }	/* (0..255) */,
	-1};
static asn_per_constraints_t asn_PER_memb_rteId_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8,  0,  255 }	/* (0..255) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_RTEData_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RTEData, rteId),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_rteId_constr_2, &asn_PER_memb_rteId_constr_2,  memb_rteId_constraint_1 },
		0, 0, /* No default value */
		"rteId"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RTEData, eventType),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EventType,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eventType"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RTEData, eventSource),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EventSource,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eventSource"
		},
	{ ATF_POINTER, 8, offsetof(struct RTEData, eventPos),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PositionOffsetLLV,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eventPos"
		},
	{ ATF_POINTER, 7, offsetof(struct RTEData, eventRadius),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Radius,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eventRadius"
		},
	{ ATF_POINTER, 6, offsetof(struct RTEData, description),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_Description,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"description"
		},
	{ ATF_POINTER, 5, offsetof(struct RTEData, timeDetails),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RSITimeDetails,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"timeDetails"
		},
	{ ATF_POINTER, 4, offsetof(struct RTEData, priority),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RSIPriority,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"priority"
		},
	{ ATF_POINTER, 3, offsetof(struct RTEData, referencePaths),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ReferencePathList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"referencePaths"
		},
	{ ATF_POINTER, 2, offsetof(struct RTEData, referenceLinks),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ReferenceLinkList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"referenceLinks"
		},
	{ ATF_POINTER, 1, offsetof(struct RTEData, eventConfidence),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Confidence,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eventConfidence"
		},
};
static const int asn_MAP_RTEData_oms_1[] = { 3, 4, 5, 6, 7, 8, 9, 10 };
static const ber_tlv_tag_t asn_DEF_RTEData_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RTEData_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rteId */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* eventType */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* eventSource */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* eventPos */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* eventRadius */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* description */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* timeDetails */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* priority */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* referencePaths */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* referenceLinks */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 } /* eventConfidence */
};
asn_SEQUENCE_specifics_t asn_SPC_RTEData_specs_1 = {
	sizeof(struct RTEData),
	offsetof(struct RTEData, _asn_ctx),
	asn_MAP_RTEData_tag2el_1,
	11,	/* Count of tags in the map */
	asn_MAP_RTEData_oms_1,	/* Optional members */
	8, 0,	/* Root/Additions */
	11,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RTEData = {
	"RTEData",
	"RTEData",
	&asn_OP_SEQUENCE,
	asn_DEF_RTEData_tags_1,
	sizeof(asn_DEF_RTEData_tags_1)
		/sizeof(asn_DEF_RTEData_tags_1[0]), /* 1 */
	asn_DEF_RTEData_tags_1,	/* Same as above */
	sizeof(asn_DEF_RTEData_tags_1)
		/sizeof(asn_DEF_RTEData_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RTEData_1,
	11,	/* Elements count */
	&asn_SPC_RTEData_specs_1	/* Additional specs */
};

