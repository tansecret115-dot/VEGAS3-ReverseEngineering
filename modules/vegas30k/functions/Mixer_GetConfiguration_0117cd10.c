/* Module: vegas30k.dll
   Function: Mixer_GetConfiguration
   Address: 0117cd10
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Mixer_GetConfiguration(enum EMIXERTYPE *,unsigned long *,unsigned long *,unsigned
   long *,unsigned long *) */

long Mixer_GetConfiguration
               (EMIXERTYPE *param_1,ulong *param_2,ulong *param_3,ulong *param_4,ulong *param_5)

{
  long lVar1;
  
                    /* 0x17cd10  165  ?Mixer_GetConfiguration@@YGJPAW4EMIXERTYPE@@PAK111@Z */
  lVar1 = (**(code **)(*DAT_012b09c8 + 0x24))(DAT_012b09c8,param_1,param_2,param_3,param_4,param_5);
  return lVar1;
}


