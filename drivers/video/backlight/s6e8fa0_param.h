#ifndef __S6E8FA0_PARAM_H__
#define __S6E8FA0_PARAM_H__

#define GAMMA_PARAM_SIZE	34
#define ACL_PARAM_SIZE	ARRAY_SIZE(acl_cutoff_33)
#define ELVSS_PARAM_SIZE	ARRAY_SIZE(elvss_control_set_10_100)
#define AID_PARAM_SIZE	ARRAY_SIZE(SEQ_AOR_CONTROL)

enum {
	GAMMA_10CD,
	GAMMA_20CD,
	GAMMA_30CD,
	GAMMA_40CD,
	GAMMA_50CD,
	GAMMA_60CD,
	GAMMA_70CD,
	GAMMA_80CD,
	GAMMA_90CD,
	GAMMA_100CD,
	GAMMA_110CD,
	GAMMA_120CD,
	GAMMA_130CD,
	GAMMA_140CD,
	GAMMA_150CD,
	GAMMA_160CD,
	GAMMA_170CD,
	GAMMA_180CD,
	GAMMA_190CD,
	GAMMA_200CD,
	GAMMA_210CD,
	GAMMA_220CD,
	GAMMA_230CD,
	GAMMA_240CD,
	GAMMA_250CD,
	GAMMA_260CD,
	GAMMA_270CD,
	GAMMA_280CD,
	GAMMA_290CD,
	GAMMA_300CD,
	GAMMA_MAX
};

static const unsigned char SEQ_TEST_KEY_ON_F0[] = {
	0xF0,
	0x5A, 0x5A,
};

static const unsigned char SEQ_TEST_KEY_ON_F1[] = {
	0xF1,
	0x5A, 0x5A,
};

static const unsigned char SEQ_TEST_KEY_ON_FC[] = {
	0xFC,
	0x5A, 0x5A,
};

static const unsigned char SEQ_SCAN_TIMMING_1_B0[] = {
	0xB0,
	0x29, 0x00
};

static const unsigned char SEQ_SCAN_TIMMING_1_FE[] = {
	0xFE,
	0x01, 0x12, 0x22, 0x8C, 0xA2, 0x00, 0x80, 0x0A, 0x01,
};

static const unsigned char SEQ_SCAN_TIMMING_2_FD[] = {
	0xFD,
	0x14, 0x09,
};

static const unsigned char SEQ_SCAN_TIMMING_2_C0[] = {
	0xC0,
	0x00, 0x02, 0x03, 0x32, 0xC0,
	0x44, 0x44, 0xC0, 0x00, 0x08, 0x20, 0xC0,
};

/*Rev A*/
static const unsigned char SEQ_BRIGHTNESS_REV_A_CONDITION_SET[] = {
	0xCA,
	0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00,
};

static const unsigned char SEQ_SCAN_TIMMING_1_1[] = {
	0xFE,
	0x03, 0x03, 0x00, 0x08, 0x00, 0x00, 0x04, 0x33, 0x52,
	0x00, 0x8E, 0x80, 0x72, 0x6C, 0x65, 0x5E, 0x57, 0x50,
	0x00, 0xB1, 0x9D, 0x00, 0x11, 0x3B, 0xE0, 0x37, 0x20,
	0x00, 0x00, 0x9B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0xE7, 0x64, 0x00, 0x00, 0x01, 0x12, 0x22, 0x7E,
	0xA2, 0x00, 0x80, 0x0A, 0x01,
};

static const unsigned char SEQ_SCAN_TIMMING_1_2[] = {
	0xFD,
	0x14, 0x09
};

static const unsigned char SEQ_SCAN_TIMMING_1_3[] = {
	0xFF,
	0x09, 0x00
};

static const unsigned char SEQ_SLEEP_OUT[] = {
	0x11,
	0x00, 0x00
};

static const unsigned char SEQ_SLEEP_IN[] = {
	0x10,
	0x00, 0x00
};

static const unsigned char SEQ_LTPS_F2[] = {
	0xF2,
	0x00, 0x04, 0x0C
};

static const unsigned char SEQ_LTPS_B0[] = {
	0xB0,
	0x20, 0x00
};

static const unsigned char SEQ_LTPS_CB[] = {
	0xCB,
	0x02, 0x00
};

static const unsigned char SEQ_LTPS_F7[] = {
	0xF7,
	0x03, 0x00
};

static const unsigned char SEQ_ERROR_FLAG_ON[] = {
	0xE7,
	0xED, 0xC7, 0x23, 0x63 /* 63 is only SoT Error */
};

static const unsigned char SEQ_LTPS_PANEL_CONTROL[] = {
	0xCB,
	0x1F, 0x00, 0x10, 0x10, 0xED, 0x04, 0x00, 0x00, 0x03, 0x00,
	0x08, 0x00, 0x06, 0x00, 0x00, 0x00, 0x04, 0x92, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x10, 0x72, 0x10, 0x72, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x01, 0x00, 0x00, 0x95, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x10, 0x72, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80,
	0x88, 0x00, 0x00
};

static const unsigned char SEQ_PANEL_UPDATE[] = {
	0xF7,
	0x03, 0x00
};

static const unsigned char SEQ_SCAN_TIMMING_2_1[] = {
	0xFD,
	0x14, 0x09,
};

static const unsigned char SEQ_SCAN_TIMMING_2_2[] = {
	0xC0,
	0x63, 0x02, 0x03, 0x32, 0xFF,
	0x44, 0x44, 0xC0, 0x00, 0x00/*40->00 during DDI debug*/,
};

/*2.2 300cd*/
static const unsigned char SEQ_BRIGHTNESS_CONDITION_SET[] = {
	0xCA,
	0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x08, 0x08, 0x08,
};

static const unsigned char SEQ_GAMMA_UPDATE[] = {
	0xF7,
	0x03, 0x00
};

static const unsigned char SEQ_BRIGHTNESS_CONTROL_1[] = {
	0x53,
	0x20, 0x00
};

static const unsigned char SEQ_BRIGHTNESS_CONTROL_REV_A_2[] = {
	0xB2,
	0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06
};

static const unsigned char SEQ_BRIGHTNESS_CONTROL_2[] = {
	0x51,
	0xFF, 0x00
};

static const unsigned char SEQ_ELVSS_REV_A_CONDITION_SET[] = {
	0xB6,
	0x28, 0x01
};

static const unsigned char SEQ_ELVSS_CONDITION_SET[] = {
	0xB6,
	0x28, 0x04
};

static const unsigned char SEQ_ETC_CONDITION_SET[] = {
	0x55,
	0x00, 0x00
};

static const unsigned char SEQ_DISPLAY_ON[] = {
	0x29,
	0x00,  0x00
};

static const unsigned char SEQ_DISPLAY_OFF[] = {
	0x28,
	0x00,  0x00
};

static const unsigned char SEQ_APPLY_LEVEL_2_KEY[] = {
	 0xF0,
	 0x5A, 0x5A
};

static const unsigned char SEQ_APPLY_LEVEL_2_KEY_DISABLE[] = {
	 0xF0,
	 0xA5, 0xA5
};

static const unsigned char SEQ_APPLY_LEVEL_3_KEY[] = {
	 0xFC,
	 0x5A, 0x5A
};

static const unsigned char SEQ_APPLY_LEVEL_3_KEY_DISABLE[] = {
	 0xFC,
	 0xA5, 0xA5
};

static const unsigned char SEQ_GAMMA_CONDITION_SET[] = {
	0xCA,
	0x00, 0xFF, 0x01, 0x1C, 0x01, 0x2C, 0xDA, 0xD7, 0xDA, 0xD5,
	0xD2, 0xD6, 0xC1, 0xBC, 0xC2, 0xCA, 0xB9, 0xCB, 0xDC, 0xE5,
	0xDD, 0xDA, 0xD8, 0xDD, 0xBA, 0xA8, 0xC1, 0x6B, 0x20, 0xD7,
	0x02, 0x03, 0x02
};

static const unsigned char SEQ_GAMMA_CONDITION_SET_UB[] = {
	0xCA,
	0x01, 0x27, 0x01, 0x3D, 0x01, 0x47, 0xD1, 0xD7, 0xD1, 0xCA,
	0xCE, 0xCC, 0xC4, 0xB3, 0xB1, 0xA1, 0xB9, 0xB8, 0xA2, 0xCE,
	0xBA, 0xC8, 0xC9, 0xAD, 0x9B, 0x85, 0x53, 0x6A, 0x7E, 0xE3,
	0x09, 0x09, 0x0B
};

static const unsigned char SEQ_BRIGHTNESS_CONTROL_ON[] = {
	0x53,
	0x20, 0x00
};

static const unsigned char SEQ_AOR_CONTROL[] = {
	0xB2,
	0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06
};

static const unsigned char SEQ_ELVSS_CONDITION_SET_UB[] = {
	0xB6,
	0x08, 0x07
};

static const unsigned char SEQ_AVC2_SET[] = {
	0xF4,
	0x6B, 0x18, 0x95, 0x02, 0x11, 0x8C, 0x77, 0x01, 0x01
};

static const unsigned char SEQ_ACL_ON[] = {
	0x55, 0x01,
	0x00
};

static const unsigned char SEQ_ACL_OFF[] = {
	0x55, 0x00,
	0x00
};

enum {
	ELVSS_STATUS_100,
	ELVSS_STATUS_110,
	ELVSS_STATUS_120,
	ELVSS_STATUS_130,
	ELVSS_STATUS_140,
	ELVSS_STATUS_150,
	ELVSS_STATUS_160,
	ELVSS_STATUS_170,
	ELVSS_STATUS_180,
	ELVSS_STATUS_190,
	ELVSS_STATUS_200,
	ELVSS_STATUS_210,
	ELVSS_STATUS_220,
	ELVSS_STATUS_230,
	ELVSS_STATUS_240,
	ELVSS_STATUS_250,
	ELVSS_STATUS_260,
	ELVSS_STATUS_270,
	ELVSS_STATUS_280,
	ELVSS_STATUS_290,
	ELVSS_STATUS_300,
	ELVSS_STATUS_MAX
};

static const unsigned char elvss_control_set_10_100[] = {
	0xB6, 0x28,
	0x0F
};

static const unsigned char elvss_control_set_110[] = {
	0xB6, 0x28,
	0x0B
};

static const unsigned char elvss_control_set_120[] = {
	0xB6, 0x28,
	0x0A
};

static const unsigned char elvss_control_set_130[] = {
	0xB6, 0x28,
	0x09
};

static const unsigned char elvss_control_set_140[] = {
	0xB6, 0x28,
	0x08
};

static const unsigned char elvss_control_set_150[] = {
	0xB6, 0x28,
	0x07
};

static const unsigned char elvss_control_set_160[] = {
	0xB6, 0x28,
	0x06
};

static const unsigned char elvss_control_set_170[] = {
	0xB6, 0x28,
	0x05
};

static const unsigned char elvss_control_set_180[] = {
	0xB6, 0x28,
	0x05
};

static const unsigned char elvss_control_set_190[] = {
	0xB6, 0x28,
	0x09
};

static const unsigned char elvss_control_set_200[] = {
	0xB6, 0x28,
	0x08
};

static const unsigned char elvss_control_set_210[] = {
	0xB6, 0x28,
	0x07
};

static const unsigned char elvss_control_set_220[] = {
	0xB6, 0x28,
	0x06
};

static const unsigned char elvss_control_set_230[] = {
	0xB6, 0x28,
	0x06
};

static const unsigned char elvss_control_set_240[] = {
	0xB6, 0x08,
	0x05
};

static const unsigned char elvss_control_set_250[] = {
	0xB6, 0x28,
	0x04
};

static const unsigned char elvss_control_set_260[] = {
	0xB6, 0x28,
	0x03
};

static const unsigned char elvss_control_set_270[] = {
	0xB6, 0x28,
	0x02
};

static const unsigned char elvss_control_set_280[] = {
	0xB6, 0x28,
	0x02
};

static const unsigned char elvss_control_set_290[] = {
	0xB6, 0x28,
	0x01
};

static const unsigned char elvss_control_set_300[] = {
	0xB6, 0x28,
	0x00
};

static const unsigned char *ELVSS_CONTROL_TABLE[ELVSS_STATUS_MAX] = {
	elvss_control_set_10_100,
	elvss_control_set_110,
	elvss_control_set_120,
	elvss_control_set_130,
	elvss_control_set_140,
	elvss_control_set_150,
	elvss_control_set_160,
	elvss_control_set_170,
	elvss_control_set_180,
	elvss_control_set_190,
	elvss_control_set_200,
	elvss_control_set_210,
	elvss_control_set_220,
	elvss_control_set_230,
	elvss_control_set_240,
	elvss_control_set_250,
	elvss_control_set_260,
	elvss_control_set_270,
	elvss_control_set_280,
	elvss_control_set_290,
	elvss_control_set_300
};

enum {
	ACL_STATUS_0P = 0,
	ACL_STATUS_33P,
	ACL_STATUS_40P,
	ACL_STATUS_50P,
	ACL_STATUS_MAX
};

static const unsigned char acl_cutoff_33[] = {
	0x55, 0x01,
	0x00
};

static const unsigned char acl_cutoff_40[] = {
	0x55, 0x02,
	0x00
};

static const unsigned char acl_cutoff_50[] = {
	0x55, 0x03,
	0x00
};

static const unsigned char *ACL_CUTOFF_TABLE[ACL_STATUS_MAX] = {
	SEQ_ACL_OFF,
	acl_cutoff_33,
	acl_cutoff_40,
	acl_cutoff_50,
};
#endif /* __S6E8FA0_PARAM_H__ */
