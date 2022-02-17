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
	patch_byte	(0X8009360,	0X53);
	patch_byte	(0X8009361,	0XA8);
	patch_byte	(0X8009362,	0X8E);
	patch_byte	(0X8009363,	0X6);
	patch_byte	(0X800936C,	0X80);
	patch_byte	(0X800936D,	0X5B);
	patch_byte	(0X800936E,	0X40);
	patch_byte	(0X800936F,	0XF8);
	patch_byte	(0X8009370,	0X80);
	patch_byte	(0X8009371,	0XDF);
	patch_byte	(0X8009372,	0X17);
	patch_byte	(0X8009373,	0X10);
	patch_byte	(0X80093F4,	0X53);
	patch_byte	(0X80093F5,	0XA8);
	patch_byte	(0X80093F6,	0X8E);
	patch_byte	(0X80093F7,	0X6);
	patch_byte	(0X8009400,	0X80);
	patch_byte	(0X8009401,	0X5B);
	patch_byte	(0X8009402,	0X40);
	patch_byte	(0X8009403,	0XF8);
	patch_byte	(0X8009404,	0X80);
	patch_byte	(0X8009405,	0XDF);
	patch_byte	(0X8009406,	0X17);
	patch_byte	(0X8009407,	0X10);
	patch_byte	(0X8009456,	0X9);
	patch_byte	(0X800945A,	0X11);
	patch_byte	(0X800945B,	0X4A);
	patch_byte	(0X800945C,	0X91);
	patch_byte	(0X800945D,	0X42);
	patch_byte	(0X800945E,	0);
	patch_byte	(0X800945F,	0XD3);
	patch_byte	(0X8009460,	0X5);
	patch_byte	(0X8009461,	0X20);
	patch_byte	(0X8009462,	0X70);
	patch_byte	(0X8009463,	0X47);
	patch_byte	(0X8009464,	0XC0);
	patch_byte	(0X8009465,	0X46);
	patch_byte	(0X8009466,	0XC0);
	patch_byte	(0X8009467,	0X46);
	patch_byte	(0X8009468,	0XC0);
	patch_byte	(0X8009469,	0X46);
	patch_byte	(0X800946A,	0XC0);
	patch_byte	(0X800946B,	0X46);
	patch_byte	(0X8009474,	0XBF);
	patch_byte	(0X8009475,	0X7A);
	patch_byte	(0X8009476,	0XF2);
	patch_byte	(0X8009477,	0X4);
	patch_byte	(0X8009498,	0X80);
	patch_byte	(0X8009499,	0X5B);
	patch_byte	(0X800949A,	0X40);
	patch_byte	(0X800949B,	0XF8);
	patch_byte	(0X800949D,	0XDF);
	patch_byte	(0X800949E,	0X17);
	patch_byte	(0X800949F,	0X10);
	patch_byte	(0X80094A0,	0);
	patch_byte	(0X80094A1,	0X24);
	patch_byte	(0X80094A2,	0XF4);
	patch_byte	(0X80094A3,	0);
	patch_byte	(0X800D6F4,	0X80);
	patch_byte	(0X800D6F5,	0X5B);
	patch_byte	(0X800D6F6,	0X40);
	patch_byte	(0X800D6F7,	0XF8);
	patch_byte	(0X800D6F8,	0X81);
	patch_byte	(0X800D6F9,	0XDF);
	patch_byte	(0X800D6FA,	0X17);
	patch_byte	(0X800D6FB,	0X10);
	patch_byte	(0X800FAE8,	0X80);
	patch_byte	(0X800FAE9,	0X5B);
	patch_byte	(0X800FAEA,	0X40);
	patch_byte	(0X800FAEB,	0XF8);
	patch_byte	(0X800FAEC,	0X80);
	patch_byte	(0X800FAED,	0XDF);
	patch_byte	(0X800FAEE,	0X17);
	patch_byte	(0X800FAEF,	0X10);
	patch_byte	(0X8015AC8,	0X80);
	patch_byte	(0X8015AC9,	0XDF);
	patch_byte	(0X8015ACA,	0X17);
	patch_byte	(0X8015ACB,	0X10);
	patch_byte	(0X8015AE0,	0X80);
	patch_byte	(0X8015AE1,	0X5B);
	patch_byte	(0X8015AE2,	0X40);
	patch_byte	(0X8015AE3,	0XF8);
	patch_byte	(0X8015D9C,	0X80);
	patch_byte	(0X8015D9D,	0XDF);
	patch_byte	(0X8015D9E,	0X17);
	patch_byte	(0X8015D9F,	0X10);
	patch_byte	(0X8015DA8,	0X80);
	patch_byte	(0X8015DA9,	0X5B);
	patch_byte	(0X8015DAA,	0X40);
	patch_byte	(0X8015DAB,	0XF8);
	patch_byte	(0X8016180,	0X80);
	patch_byte	(0X8016181,	0X5B);
	patch_byte	(0X8016182,	0X40);
	patch_byte	(0X8016183,	0XF8);
	patch_byte	(0X8016184,	0X80);
	patch_byte	(0X8016185,	0XDF);
	patch_byte	(0X8016186,	0X17);
	patch_byte	(0X8016187,	0X10);
	patch_byte	(0X80201B4,	0XFF);
	patch_byte	(0X80201B5,	0XB3);
	patch_byte	(0X80201B6,	0XC4);
	patch_byte	(0X80201B7,	0X4);
	patch_byte	(0X80201B8,	0X80);
	patch_byte	(0X80201B9,	0X5B);
	patch_byte	(0X80201BA,	0X40);
	patch_byte	(0X80201BB,	0XF8);
	patch_byte	(0X80201BC,	0X80);
	patch_byte	(0X80201BD,	0XDF);
	patch_byte	(0X80201BE,	0X17);
	patch_byte	(0X80201BF,	0X10);
	patch_byte	(0X80203F0,	0XFF);
	patch_byte	(0X80203F1,	0XB3);
	patch_byte	(0X80203F2,	0XC4);
	patch_byte	(0X80203F3,	0X4);
	patch_byte	(0X80203F4,	0X80);
	patch_byte	(0X80203F5,	0X5B);
	patch_byte	(0X80203F6,	0X40);
	patch_byte	(0X80203F7,	0XF8);
	patch_byte	(0X80203F8,	0X80);
	patch_byte	(0X80203F9,	0XDF);
	patch_byte	(0X80203FA,	0X17);
	patch_byte	(0X80203FB,	0X10);
	patch_byte	(0X8020488,	0XFF);
	patch_byte	(0X8020489,	0XB3);
	patch_byte	(0X802048A,	0XC4);
	patch_byte	(0X802048B,	0X4);
	patch_byte	(0X802048C,	0X80);
	patch_byte	(0X802048D,	0X5B);
	patch_byte	(0X802048E,	0X40);
	patch_byte	(0X802048F,	0XF8);
	patch_byte	(0X8020490,	0X80);
	patch_byte	(0X8020491,	0XDF);
	patch_byte	(0X8020492,	0X17);
	patch_byte	(0X8020493,	0X10);
	patch_byte	(0X80208C0,	0X80);
	patch_byte	(0X80208C1,	0XA4);
	patch_byte	(0X80208C2,	0XBF);
	patch_byte	(0X80208C3,	0X7);
	patch_byte	(0X80208C5,	0X84);
	patch_byte	(0X80208C6,	0XD7);
	patch_byte	(0X80208C7,	0X17);
	patch_byte	(0X8024A40,	0X80);
	patch_byte	(0X8024A41,	0X5B);
	patch_byte	(0X8024A42,	0X40);
	patch_byte	(0X8024A43,	0XF8);
	patch_byte	(0X8024A44,	0X81);
	patch_byte	(0X8024A45,	0XDF);
	patch_byte	(0X8024A46,	0X17);
	patch_byte	(0X8024A47,	0X10);
	patch_byte	(0X8024F68,	0X80);
	patch_byte	(0X8024F69,	0X5B);
	patch_byte	(0X8024F6A,	0X40);
	patch_byte	(0X8024F6B,	0XF8);
	patch_byte	(0X8024F6C,	0X81);
	patch_byte	(0X8024F6D,	0XDF);
	patch_byte	(0X8024F6E,	0X17);
	patch_byte	(0X8024F6F,	0X10);
	patch_byte	(0X8025843,	0X2B);
	patch_byte	(0X8025844,	0X31);
	patch_byte	(0X8025845,	0XD);
	patch_byte	(0X8025846,	0XA);
	patch_byte	(0X80290D0,	0X80);
	patch_byte	(0X80290D1,	0X5B);
	patch_byte	(0X80290D2,	0X40);
	patch_byte	(0X80290D3,	0XF8);
	patch_byte	(0X80290D4,	0X81);
	patch_byte	(0X80290D5,	0XDF);
	patch_byte	(0X80290D6,	0X17);
	patch_byte	(0X80290D7,	0X10);
	patch_byte	(0X80290F0,	0);
	patch_byte	(0X80290F1,	0X92);
	patch_byte	(0X80290F2,	0XFE);
	patch_byte	(0X80290F3,	0X1E);
	patch_byte	(0X8029238,	0X80);
	patch_byte	(0X8029239,	0X5B);
	patch_byte	(0X802923A,	0X40);
	patch_byte	(0X802923B,	0XF8);
	patch_byte	(0X802923C,	0X81);
	patch_byte	(0X802923D,	0XDF);
	patch_byte	(0X802923E,	0X17);
	patch_byte	(0X802923F,	0X10);
	patch_byte	(0X8029258,	0);
	patch_byte	(0X8029259,	0X92);
	patch_byte	(0X802925A,	0XFE);
	patch_byte	(0X802925B,	0X1E);
}

// End of file.
