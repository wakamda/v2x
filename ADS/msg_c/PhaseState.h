/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SPATIntersectionState"
 * 	found in "/home/chengtao/Documents/github/v2x/ADS/v2x_asn/SPATIntersectionState.asn"
 * 	`asn1c -D /home/chengtao/Downloads/v2x_ads_c`
 */

#ifndef	_PhaseState_H_
#define	_PhaseState_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LightState.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct TimeChangeDetails;

/* PhaseState */
typedef struct PhaseState {
	LightState_t	 light;
	struct TimeChangeDetails	*timing	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PhaseState_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PhaseState;
extern asn_SEQUENCE_specifics_t asn_SPC_PhaseState_specs_1;
extern asn_TYPE_member_t asn_MBR_PhaseState_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "TimeChangeDetails.h"

#endif	/* _PhaseState_H_ */
#include <asn_internal.h>
