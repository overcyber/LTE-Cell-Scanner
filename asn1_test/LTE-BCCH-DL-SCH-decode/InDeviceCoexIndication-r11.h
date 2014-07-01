/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-c10.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_InDeviceCoexIndication_r11_H_
#define	_InDeviceCoexIndication_r11_H_


#include <asn_application.h>

/* Including external dependencies */
#include "InDeviceCoexIndication-r11-IEs.h"
#include <NULL.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum InDeviceCoexIndication_r11__criticalExtensions_PR {
	InDeviceCoexIndication_r11__criticalExtensions_PR_NOTHING,	/* No components present */
	InDeviceCoexIndication_r11__criticalExtensions_PR_c1,
	InDeviceCoexIndication_r11__criticalExtensions_PR_criticalExtensionsFuture
} InDeviceCoexIndication_r11__criticalExtensions_PR;
typedef enum InDeviceCoexIndication_r11__criticalExtensions__c1_PR {
	InDeviceCoexIndication_r11__criticalExtensions__c1_PR_NOTHING,	/* No components present */
	InDeviceCoexIndication_r11__criticalExtensions__c1_PR_inDeviceCoexIndication_r11,
	InDeviceCoexIndication_r11__criticalExtensions__c1_PR_spare3,
	InDeviceCoexIndication_r11__criticalExtensions__c1_PR_spare2,
	InDeviceCoexIndication_r11__criticalExtensions__c1_PR_spare1
} InDeviceCoexIndication_r11__criticalExtensions__c1_PR;

/* InDeviceCoexIndication-r11 */
typedef struct InDeviceCoexIndication_r11 {
	struct InDeviceCoexIndication_r11__criticalExtensions {
		InDeviceCoexIndication_r11__criticalExtensions_PR present;
		union InDeviceCoexIndication_r11__criticalExtensions_u {
			struct InDeviceCoexIndication_r11__criticalExtensions__c1 {
				InDeviceCoexIndication_r11__criticalExtensions__c1_PR present;
				union InDeviceCoexIndication_r11__criticalExtensions__c1_u {
					InDeviceCoexIndication_r11_IEs_t	 inDeviceCoexIndication_r11;
					NULL_t	 spare3;
					NULL_t	 spare2;
					NULL_t	 spare1;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} c1;
			struct InDeviceCoexIndication_r11__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} InDeviceCoexIndication_r11_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_InDeviceCoexIndication_r11;

#ifdef __cplusplus
}
#endif

#endif	/* _InDeviceCoexIndication_r11_H_ */
#include <asn_internal.h>
