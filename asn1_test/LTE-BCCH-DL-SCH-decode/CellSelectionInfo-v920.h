/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-c10.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_CellSelectionInfo_v920_H_
#define	_CellSelectionInfo_v920_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Q-QualMin-r9.h"
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CellSelectionInfo-v920 */
typedef struct CellSelectionInfo_v920 {
	Q_QualMin_r9_t	 q_QualMin_r9;
	long	*q_QualMinOffset_r9	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CellSelectionInfo_v920_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CellSelectionInfo_v920;

#ifdef __cplusplus
}
#endif

#endif	/* _CellSelectionInfo_v920_H_ */
#include <asn_internal.h>
