/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-c10.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_UplinkPowerControlDedicated_v1130_H_
#define	_UplinkPowerControlDedicated_v1130_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct DeltaTxD_OffsetListPUCCH_v1130;

/* UplinkPowerControlDedicated-v1130 */
typedef struct UplinkPowerControlDedicated_v1130 {
	long	*pSRS_Offset_v1130	/* OPTIONAL */;
	long	*pSRS_OffsetAp_v1130	/* OPTIONAL */;
	struct DeltaTxD_OffsetListPUCCH_v1130	*deltaTxD_OffsetListPUCCH_v1130	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UplinkPowerControlDedicated_v1130_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UplinkPowerControlDedicated_v1130;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "DeltaTxD-OffsetListPUCCH-v1130.h"

#endif	/* _UplinkPowerControlDedicated_v1130_H_ */
#include <asn_internal.h>
