#include <idc.idc>

static main(void)
{
        // set 'loading idc file' mode
        set_inf_attr(INF_GENFLAGS, INFFL_LOADIDC|get_inf_attr(INF_GENFLAGS));
        Patches();            // manual patches
        // clear 'loading idc file' mode
        set_inf_attr(INF_GENFLAGS, ~INFFL_LOADIDC&get_inf_attr(INF_GENFLAGS));
}

//------------------------------------------------------------------------
// Information about all patched bytes:

static Patches(void) {
	patch_byte	(0X80085E4,	0X53);
	patch_byte	(0X80085E5,	0XA8);
	patch_byte	(0X80085E6,	0X8E);
	patch_byte	(0X80085E7,	0X6);
	patch_byte	(0X80085F0,	0X80);
	patch_byte	(0X80085F1,	0X5B);
	patch_byte	(0X80085F2,	0X40);
	patch_byte	(0X80085F3,	0XF8);
	patch_byte	(0X80085F4,	0X80);
	patch_byte	(0X80085F5,	0XDF);
	patch_byte	(0X80085F6,	0X17);
	patch_byte	(0X80085F7,	0X10);
	patch_byte	(0X800867C,	0X53);
	patch_byte	(0X800867D,	0XA8);
	patch_byte	(0X800867E,	0X8E);
	patch_byte	(0X800867F,	0X6);
	patch_byte	(0X8008688,	0X80);
	patch_byte	(0X8008689,	0X5B);
	patch_byte	(0X800868A,	0X40);
	patch_byte	(0X800868B,	0XF8);
	patch_byte	(0X800868C,	0X80);
	patch_byte	(0X800868D,	0XDF);
	patch_byte	(0X800868E,	0X17);
	patch_byte	(0X800868F,	0X10);
	patch_byte	(0X80086DE,	0X9);
	patch_byte	(0X80086E2,	0X11);
	patch_byte	(0X80086E3,	0X4A);
	patch_byte	(0X80086E4,	0X91);
	patch_byte	(0X80086E5,	0X42);
	patch_byte	(0X80086E6,	0);
	patch_byte	(0X80086E7,	0XD3);
	patch_byte	(0X80086E8,	0X5);
	patch_byte	(0X80086E9,	0X20);
	patch_byte	(0X80086EA,	0X70);
	patch_byte	(0X80086EB,	0X47);
	patch_byte	(0X80086EC,	0XC0);
	patch_byte	(0X80086ED,	0X46);
	patch_byte	(0X80086EE,	0XC0);
	patch_byte	(0X80086EF,	0X46);
	patch_byte	(0X80086F0,	0XC0);
	patch_byte	(0X80086F1,	0X46);
	patch_byte	(0X80086F2,	0XC0);
	patch_byte	(0X80086F3,	0X46);
	patch_byte	(0X80086FC,	0XBF);
	patch_byte	(0X80086FD,	0X7A);
	patch_byte	(0X80086FE,	0XF2);
	patch_byte	(0X80086FF,	0X4);
	patch_byte	(0X8008720,	0X80);
	patch_byte	(0X8008721,	0X5B);
	patch_byte	(0X8008722,	0X40);
	patch_byte	(0X8008723,	0XF8);
	patch_byte	(0X8008725,	0XDF);
	patch_byte	(0X8008726,	0X17);
	patch_byte	(0X8008727,	0X10);
	patch_byte	(0X8008728,	0);
	patch_byte	(0X8008729,	0X24);
	patch_byte	(0X800872A,	0XF4);
	patch_byte	(0X800872B,	0);
	patch_byte	(0X800CCCC,	0X80);
	patch_byte	(0X800CCCD,	0X5B);
	patch_byte	(0X800CCCE,	0X40);
	patch_byte	(0X800CCCF,	0XF8);
	patch_byte	(0X800CCD0,	0X81);
	patch_byte	(0X800CCD1,	0XDF);
	patch_byte	(0X800CCD2,	0X17);
	patch_byte	(0X800CCD3,	0X10);
	patch_byte	(0X800EFEC,	0X80);
	patch_byte	(0X800EFED,	0X5B);
	patch_byte	(0X800EFEE,	0X40);
	patch_byte	(0X800EFEF,	0XF8);
	patch_byte	(0X800EFF0,	0X80);
	patch_byte	(0X800EFF1,	0XDF);
	patch_byte	(0X800EFF2,	0X17);
	patch_byte	(0X800EFF3,	0X10);
	patch_byte	(0X8014A68,	0X80);
	patch_byte	(0X8014A69,	0X5B);
	patch_byte	(0X8014A6A,	0X40);
	patch_byte	(0X8014A6B,	0XF8);
	patch_byte	(0X8014A6C,	0X80);
	patch_byte	(0X8014A6D,	0XDF);
	patch_byte	(0X8014A6E,	0X17);
	patch_byte	(0X8014A6F,	0X10);
	patch_byte	(0X8014D80,	0X80);
	patch_byte	(0X8014D81,	0X5B);
	patch_byte	(0X8014D82,	0X40);
	patch_byte	(0X8014D83,	0XF8);
	patch_byte	(0X8014D84,	0X80);
	patch_byte	(0X8014D85,	0XDF);
	patch_byte	(0X8014D86,	0X17);
	patch_byte	(0X8014D87,	0X10);
	patch_byte	(0X8015180,	0X80);
	patch_byte	(0X8015181,	0X5B);
	patch_byte	(0X8015182,	0X40);
	patch_byte	(0X8015183,	0XF8);
	patch_byte	(0X8015184,	0X80);
	patch_byte	(0X8015185,	0XDF);
	patch_byte	(0X8015186,	0X17);
	patch_byte	(0X8015187,	0X10);
	patch_byte	(0X801F6B0,	0XFF);
	patch_byte	(0X801F6B1,	0XB3);
	patch_byte	(0X801F6B2,	0XC4);
	patch_byte	(0X801F6B3,	0X4);
	patch_byte	(0X801F6B4,	0X80);
	patch_byte	(0X801F6B5,	0X5B);
	patch_byte	(0X801F6B6,	0X40);
	patch_byte	(0X801F6B7,	0XF8);
	patch_byte	(0X801F6B8,	0X80);
	patch_byte	(0X801F6B9,	0XDF);
	patch_byte	(0X801F6BA,	0X17);
	patch_byte	(0X801F6BB,	0X10);
	patch_byte	(0X801F8B8,	0XFF);
	patch_byte	(0X801F8B9,	0XB3);
	patch_byte	(0X801F8BA,	0XC4);
	patch_byte	(0X801F8BB,	0X4);
	patch_byte	(0X801F8BC,	0X80);
	patch_byte	(0X801F8BD,	0X5B);
	patch_byte	(0X801F8BE,	0X40);
	patch_byte	(0X801F8BF,	0XF8);
	patch_byte	(0X801F8C0,	0X80);
	patch_byte	(0X801F8C1,	0XDF);
	patch_byte	(0X801F8C2,	0X17);
	patch_byte	(0X801F8C3,	0X10);
	patch_byte	(0X801F954,	0XFF);
	patch_byte	(0X801F955,	0XB3);
	patch_byte	(0X801F956,	0XC4);
	patch_byte	(0X801F957,	0X4);
	patch_byte	(0X801F958,	0X80);
	patch_byte	(0X801F959,	0X5B);
	patch_byte	(0X801F95A,	0X40);
	patch_byte	(0X801F95B,	0XF8);
	patch_byte	(0X801F95C,	0X80);
	patch_byte	(0X801F95D,	0XDF);
	patch_byte	(0X801F95E,	0X17);
	patch_byte	(0X801F95F,	0X10);
	patch_byte	(0X801FD4C,	0X80);
	patch_byte	(0X801FD4D,	0XA4);
	patch_byte	(0X801FD4E,	0XBF);
	patch_byte	(0X801FD4F,	0X7);
	patch_byte	(0X801FD51,	0X84);
	patch_byte	(0X801FD52,	0XD7);
	patch_byte	(0X801FD53,	0X17);
	patch_byte	(0X802491C,	0X80);
	patch_byte	(0X802491D,	0X5B);
	patch_byte	(0X802491E,	0X40);
	patch_byte	(0X802491F,	0XF8);
	patch_byte	(0X8024920,	0X81);
	patch_byte	(0X8024921,	0XDF);
	patch_byte	(0X8024922,	0X17);
	patch_byte	(0X8024923,	0X10);
	patch_byte	(0X8024E84,	0X80);
	patch_byte	(0X8024E85,	0X5B);
	patch_byte	(0X8024E86,	0X40);
	patch_byte	(0X8024E87,	0XF8);
	patch_byte	(0X8024E88,	0X81);
	patch_byte	(0X8024E89,	0XDF);
	patch_byte	(0X8024E8A,	0X17);
	patch_byte	(0X8024E8B,	0X10);
	patch_byte	(0X80257A3,	0X2B);
	patch_byte	(0X80257A4,	0X31);
	patch_byte	(0X80257A5,	0XD);
	patch_byte	(0X80257A6,	0XA);
	patch_byte	(0X8028F40,	0X80);
	patch_byte	(0X8028F41,	0X5B);
	patch_byte	(0X8028F42,	0X40);
	patch_byte	(0X8028F43,	0XF8);
	patch_byte	(0X8028F44,	0X81);
	patch_byte	(0X8028F45,	0XDF);
	patch_byte	(0X8028F46,	0X17);
	patch_byte	(0X8028F47,	0X10);
	patch_byte	(0X8028F60,	0);
	patch_byte	(0X8028F61,	0X92);
	patch_byte	(0X8028F62,	0XFE);
	patch_byte	(0X8028F63,	0X1E);
	patch_byte	(0X80290A8,	0X80);
	patch_byte	(0X80290A9,	0X5B);
	patch_byte	(0X80290AA,	0X40);
	patch_byte	(0X80290AB,	0XF8);
	patch_byte	(0X80290AC,	0X81);
	patch_byte	(0X80290AD,	0XDF);
	patch_byte	(0X80290AE,	0X17);
	patch_byte	(0X80290AF,	0X10);
	patch_byte	(0X80290C8,	0);
	patch_byte	(0X80290C9,	0X92);
	patch_byte	(0X80290CA,	0XFE);
	patch_byte	(0X80290CB,	0X1E);
}

// End of file.
