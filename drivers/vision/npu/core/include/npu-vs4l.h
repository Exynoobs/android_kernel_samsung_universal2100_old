#ifndef _VS4L_NPU_H_
#define _VS4L_NPU_H_

#include <linux/types.h>

/* target value used for S_PARAM of NPU */
enum {
	NPU_S_PARAM_FW_UTC_LOAD = 0x780000,
	NPU_S_PARAM_FW_UTC_EXECUTE,
	NPU_S_PARAM_QOS_NPU = 0x880000,
	NPU_S_PARAM_QOS_MIF,
	NPU_S_PARAM_QOS_INT,
	NPU_S_PARAM_QOS_DNC,
	NPU_S_PARAM_QOS_NPU_MAX,
	NPU_S_PARAM_QOS_MIF_MAX,
	NPU_S_PARAM_QOS_INT_MAX,
	NPU_S_PARAM_QOS_DNC_MAX,
	NPU_S_PARAM_QOS_CL0 = 0x890000,
	NPU_S_PARAM_QOS_CL1,
	NPU_S_PARAM_QOS_CL2,
	NPU_S_PARAM_CPU_AFF,
	NPU_S_PARAM_IS_PRESET = 0x891000,
	NPU_S_PARAM_QOS_NPU_PRESET,
	NPU_S_PARAM_QOS_DSP_PRESET,
	NPU_S_PARAM_QOS_MIF_PRESET,
	NPU_S_PARAM_QOS_INT_PRESET,
	NPU_S_PARAM_QOS_CL0_PRESET,
	NPU_S_PARAM_QOS_CL1_PRESET,
	NPU_S_PARAM_QOS_CL2_PRESET,
	NPU_S_PARAM_QOS_MO_SCEN_PRESET,
	NPU_S_PARAM_QOS_CPU_AFF_PRESET,
	NPU_S_PARAM_QOS_RST,
	/* User API version 4 */
	NPU_S_PARAM_PERF_MODE = 0x900000,
	NPU_S_PARAM_PRIORITY,
	NPU_S_PARAM_TPF,
};

#endif	/* _VS4L_NPU_H_ */
