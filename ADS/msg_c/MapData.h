/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "Map"
 * 	found in "/home/chengtao/Documents/github/v2x/ADS/v2x_asn/Map.asn"
 * 	`asn1c -D /home/chengtao/Downloads/v2x_ads_c`
 */

#ifndef	_MapData_H_
#define	_MapData_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MsgCount.h"
#include "MinuteOfTheYear.h"
#include "NodeList.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* MapData */
typedef struct MapData {
	MsgCount_t	 msgCnt;
	MinuteOfTheYear_t	*timeStamp	/* OPTIONAL */;
	NodeList_t	 nodes;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MapData_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MapData;
extern asn_SEQUENCE_specifics_t asn_SPC_MapData_specs_1;
extern asn_TYPE_member_t asn_MBR_MapData_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _MapData_H_ */
#include <asn_internal.h>
