/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "MapLink"
 * 	found in "/home/chengtao/Documents/github/v2x/ADS/v2x_asn/MapLink.asn"
 * 	`asn1c -D /home/chengtao/Downloads/v2x_ads_c`
 */

#ifndef	_LinkList_H_
#define	_LinkList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Link;

/* LinkList */
typedef struct LinkList {
	A_SEQUENCE_OF(struct Link) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LinkList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LinkList;
extern asn_SET_OF_specifics_t asn_SPC_LinkList_specs_1;
extern asn_TYPE_member_t asn_MBR_LinkList_1[1];
extern asn_per_constraints_t asn_PER_type_LinkList_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "Link.h"

#endif	/* _LinkList_H_ */
#include <asn_internal.h>
