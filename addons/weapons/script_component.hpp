#define COMPONENT weapons
#include "\x\arc_misc\addons\main\script_macros.hpp"

#define HIDE(x,y) class x: y {scope = 1; scopeArsenal = 0;}

#define AK74_MAGS {                                    \
	"CUP_30Rnd_545x39_AK74_plum_M",                    \
	"CUP_30Rnd_545x39_AK_M",                           \
	"CUP_30Rnd_Subsonic_545x39_AK_M",                  \
	"CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M",          \
	"CUP_30Rnd_TE1_Red_Tracer_545x39_AK_M",            \
	"CUP_30Rnd_TE1_White_Tracer_545x39_AK_M",          \
	"CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK_M",         \
	"CUP_30Rnd_Subsonic_545x39_AK74_plum_M",           \
	"CUP_30Rnd_TE1_Green_Tracer_545x39_AK74_plum_M",   \
	"CUP_30Rnd_TE1_Red_Tracer_545x39_AK74_plum_M",     \
	"CUP_30Rnd_TE1_White_Tracer_545x39_AK74_plum_M",   \
	"CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK74_plum_M",  \
	"CUP_30Rnd_545x39_AK74M_M",                        \
	"CUP_30Rnd_Subsonic_545x39_AK74M_M",               \
	"CUP_30Rnd_TE1_Green_Tracer_545x39_AK74M_M",       \
	"CUP_30Rnd_TE1_Red_Tracer_545x39_AK74M_M",         \
	"CUP_30Rnd_TE1_White_Tracer_545x39_AK74M_M",       \
	"CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK74M_M",      \
	"CUP_30Rnd_545x39_AK74M_camo_M",                   \
	"CUP_30Rnd_TE1_Green_Tracer_545x39_AK_camo_M",     \
	"CUP_30Rnd_TE1_Red_Tracer_545x39_AK_camo_M",       \
	"CUP_30Rnd_TE1_White_Tracer_545x39_AK_camo_M",     \
	"CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK_camo_M",    \
	"CUP_30Rnd_545x39_AK74M_desert_M",                 \
	"CUP_30Rnd_TE1_Green_Tracer_545x39_AK_desert_M",   \
	"CUP_30Rnd_TE1_Red_Tracer_545x39_AK_desert_M",     \
	"CUP_30Rnd_TE1_White_Tracer_545x39_AK_desert_M",   \
	"CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK_desert_M",  \
	"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",    \
	"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK74M_M", \
	"CUP_60Rnd_545x39_AK74M_M",                        \
	"CUP_60Rnd_TE1_Green_Tracer_545x39_AK74M_M",       \
	"CUP_60Rnd_TE1_Red_Tracer_545x39_AK74M_M",         \
	"CUP_60Rnd_TE1_White_Tracer_545x39_AK74M_M",       \
	"CUP_60Rnd_TE1_Yellow_Tracer_545x39_AK74M_M",      \
	"CUP_20Rnd_545x39_AKSU_M",                         \
	"CUP_20Rnd_Subsonic_545x39_AKSU_M"                 \
}

#define RPK74_MAGS {                                   \
	"CUP_60Rnd_545x39_AK74M_M",                        \
	"CUP_30Rnd_545x39_AK74_plum_M",                    \
	"CUP_30Rnd_545x39_AK_M",                           \
	"CUP_30Rnd_Subsonic_545x39_AK_M",                  \
	"CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M",          \
	"CUP_30Rnd_TE1_Red_Tracer_545x39_AK_M",            \
	"CUP_30Rnd_TE1_White_Tracer_545x39_AK_M",          \
	"CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK_M",         \
	"CUP_30Rnd_Subsonic_545x39_AK74_plum_M",           \
	"CUP_30Rnd_TE1_Green_Tracer_545x39_AK74_plum_M",   \
	"CUP_30Rnd_TE1_Red_Tracer_545x39_AK74_plum_M",     \
	"CUP_30Rnd_TE1_White_Tracer_545x39_AK74_plum_M",   \
	"CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK74_plum_M",  \
	"CUP_30Rnd_545x39_AK74M_M",                        \
	"CUP_30Rnd_Subsonic_545x39_AK74M_M",               \
	"CUP_30Rnd_TE1_Green_Tracer_545x39_AK74M_M",       \
	"CUP_30Rnd_TE1_Red_Tracer_545x39_AK74M_M",         \
	"CUP_30Rnd_TE1_White_Tracer_545x39_AK74M_M",       \
	"CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK74M_M",      \
	"CUP_30Rnd_545x39_AK74M_camo_M",                   \
	"CUP_30Rnd_TE1_Green_Tracer_545x39_AK_camo_M",     \
	"CUP_30Rnd_TE1_Red_Tracer_545x39_AK_camo_M",       \
	"CUP_30Rnd_TE1_White_Tracer_545x39_AK_camo_M",     \
	"CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK_camo_M",    \
	"CUP_30Rnd_545x39_AK74M_desert_M",                 \
	"CUP_30Rnd_TE1_Green_Tracer_545x39_AK_desert_M",   \
	"CUP_30Rnd_TE1_Red_Tracer_545x39_AK_desert_M",     \
	"CUP_30Rnd_TE1_White_Tracer_545x39_AK_desert_M",   \
	"CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK_desert_M",  \
	"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",    \
	"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK74M_M", \
	"CUP_60Rnd_TE1_Green_Tracer_545x39_AK74M_M",       \
	"CUP_60Rnd_TE1_Red_Tracer_545x39_AK74M_M",         \
	"CUP_60Rnd_TE1_White_Tracer_545x39_AK74M_M",       \
	"CUP_60Rnd_TE1_Yellow_Tracer_545x39_AK74M_M",      \
	"CUP_20Rnd_545x39_AKSU_M",                         \
	"CUP_20Rnd_Subsonic_545x39_AKSU_M"                 \
}
