/* Module: vegas30k.dll
   Function: Mixer_SetMixerPrefs
   Address: 01181710
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Mixer_SetMixerPrefs(long (__stdcall*)(struct ISFMixer *,unsigned long,unsigned
   long,void *),unsigned long) */

long Mixer_SetMixerPrefs(_func_long_ISFMixer_ptr_ulong_ulong_void_ptr *param_1,ulong param_2)

{
                    /* 0x181710  236  ?Mixer_SetMixerPrefs@@YGJP6GJPAUISFMixer@@KKPAX@ZK@Z */
  (*param_1)(DAT_012b09c8,param_2,0x82,&DAT_012b09a8);
  (*param_1)(DAT_012b09c8,param_2,0x70,&DAT_012b0940);
  (*param_1)(DAT_012b09c8,param_2,0x71,&DAT_012b0944);
  (*param_1)(DAT_012b09c8,param_2,0x83,&DAT_012b0948);
  (*param_1)(DAT_012b09c8,param_2,6,&DAT_012b0950);
  (*param_1)(DAT_012b09c8,param_2,7,&DAT_012b09a0);
  (*param_1)(DAT_012b09c8,param_2,10,&DAT_012b0960);
  (*param_1)(DAT_012b09c8,param_2,0xb,&DAT_012b0968);
  (*param_1)(DAT_012b09c8,param_2,0x72,&DAT_012b0970);
  (*param_1)(DAT_012b09c8,param_2,0x74,&DAT_012b0974);
  (*param_1)(DAT_012b09c8,param_2,0x73,&DAT_012b0978);
  (*param_1)(DAT_012b09c8,param_2,0x60,&DAT_012b097c);
  (*param_1)(DAT_012b09c8,param_2,0x61,&DAT_012b0980);
  (*param_1)(DAT_012b09c8,param_2,0x40,&DAT_012b0984);
  (*param_1)(DAT_012b09c8,param_2,0x84,&DAT_012b0988);
  (*param_1)(DAT_012b09c8,param_2,0x90,&DAT_012b098c);
  (*param_1)(DAT_012b09c8,param_2,0x91,&DAT_012b0990);
  (*param_1)(DAT_012b09c8,param_2,0x80,&DAT_012b09ac);
  (*param_1)(DAT_012b09c8,param_2,0x81,&DAT_012b09b0);
  return 0;
}


