/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "MapLane"
 * 	found in "/home/chengtao/Documents/github/v2x/ADS/v2x_asn/MapLane.asn"
 * 	`asn1c -D /home/chengtao/Downloads/v2x_ads_c`
 */

#ifndef	_AllowedManeuvers_H_
#define	_AllowedManeuvers_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum AllowedManeuvers {
	AllowedManeuvers_maneuverStraightAllowed	= 0,
	AllowedManeuvers_maneuverLeftAllowed	= 1,
	AllowedManeuvers_maneuverRightAllowed	= 2,
	AllowedManeuvers_maneuverUTurnAllowed	= 3,
	AllowedManeuvers_maneuverLeftTurnOnRedAllowed	= 4,
	AllowedManeuvers_maneuverRightTurnOnRedAllowed	= 5,
	AllowedManeuvers_maneuverLaneChangeAllowed	= 6,
	AllowedManeuvers_maneuverNoStoppingAllowed	= 7,
	AllowedManeuvers_yieldAllwaysRequired	= 8,
	AllowedManeuvers_goWithHalt	= 9,
	AllowedManeuvers_caution	= 10,
	AllowedManeuvers_reserved1	= 11
} e_AllowedManeuvers;

/* AllowedManeuvers */
typedef BIT_STRING_t	 AllowedManeuvers_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_AllowedManeuvers_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_AllowedManeuvers;
asn_struct_free_f AllowedManeuvers_free;
asn_struct_print_f AllowedManeuvers_print;
asn_constr_check_f AllowedManeuvers_constraint;
ber_type_decoder_f AllowedManeuvers_decode_ber;
der_type_encoder_f AllowedManeuvers_encode_der;
xer_type_decoder_f AllowedManeuvers_decode_xer;
xer_type_encoder_f AllowedManeuvers_encode_xer;
oer_type_decoder_f AllowedManeuvers_decode_oer;
oer_type_encoder_f AllowedManeuvers_encode_oer;
per_type_decoder_f AllowedManeuvers_decode_uper;
per_type_encoder_f AllowedManeuvers_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _AllowedManeuvers_H_ */
#include <asn_internal.h>
