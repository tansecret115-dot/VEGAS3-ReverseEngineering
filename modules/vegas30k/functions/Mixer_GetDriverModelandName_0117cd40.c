/* Module: vegas30k.dll
   Function: Mixer_GetDriverModelandName
   Address: 0117cd40
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Mixer_GetDriverModelandName(enum AUDIODRVMODEL *,char *,unsigned long) */

long Mixer_GetDriverModelandName(AUDIODRVMODEL *param_1,char *param_2,ulong param_3)

{
  long lVar1;
  
                    /* 0x17cd40  174  ?Mixer_GetDriverModelandName@@YGJPAW4AUDIODRVMODEL@@PADK@Z */
  lVar1 = (**(code **)(*DAT_012b09c8 + 0x2c))(DAT_012b09c8,param_1,param_2,param_3);
  return lVar1;
}


