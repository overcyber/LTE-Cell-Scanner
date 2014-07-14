/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-c10.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_OTDOA_PositioningCapabilities_r10_H_
#define	_OTDOA_PositioningCapabilities_r10_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum OTDOA_PositioningCapabilities_r10__otdoa_UE_Assisted_r10 {
	OTDOA_PositioningCapabilities_r10__otdoa_UE_Assisted_r10_supported	= 0
} e_OTDOA_PositioningCapabilities_r10__otdoa_UE_Assisted_r10;
typedef enum OTDOA_PositioningCapabilities_r10__interFreqRSTD_Measurement_r10 {
	OTDOA_PositioningCapabilities_r10__interFreqRSTD_Measurement_r10_supported	= 0
} e_OTDOA_PositioningCapabilities_r10__interFreqRSTD_Measurement_r10;

/* OTDOA-PositioningCapabilities-r10 */
typedef struct OTDOA_PositioningCapabilities_r10 {
	long	 otdoa_UE_Assisted_r10;
	long	*interFreqRSTD_Measurement_r10	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} OTDOA_PositioningCapabilities_r10_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_otdoa_UE_Assisted_r10_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_interFreqRSTD_Measurement_r10_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_OTDOA_PositioningCapabilities_r10;

#ifdef __cplusplus
}
#endif

#endif	/* _OTDOA_PositioningCapabilities_r10_H_ */
#include <asn_internal.h>