/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DefAcceleration"
 * 	found in "/home/chengtao/Documents/github/v2x/ADS/v2x_asn/DefAcceleration.asn"
 * 	`asn1c -D /home/chengtao/Downloads/v2x_ads_c`
 */

#ifndef	_AccelerationSet4Way_H_
#define	_AccelerationSet4Way_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Acceleration.h"
#include "VerticalAcceleration.h"
#include "YawRate.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* AccelerationSet4Way */
typedef struct AccelerationSet4Way {
	Acceleration_t	 Long;
	Acceleration_t	 lat;
	VerticalAcceleration_t	 vert;
	YawRate_t	 yaw;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AccelerationSet4Way_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AccelerationSet4Way;
extern asn_SEQUENCE_specifics_t asn_SPC_AccelerationSet4Way_specs_1;
extern asn_TYPE_member_t asn_MBR_AccelerationSet4Way_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _AccelerationSet4Way_H_ */
#include <asn_internal.h>
