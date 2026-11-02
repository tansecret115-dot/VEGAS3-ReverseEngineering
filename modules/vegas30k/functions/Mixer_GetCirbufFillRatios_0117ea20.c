/* Module: vegas30k.dll
   Function: Mixer_GetCirbufFillRatios
   Address: 0117ea20
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Mixer_GetCirbufFillRatios(double *,unsigned long *) */

long Mixer_GetCirbufFillRatios(double *param_1,ulong *param_2)

{
  long lVar1;
  
                    /* 0x17ea20  164  ?Mixer_GetCirbufFillRatios@@YGJPANPAK@Z */
  lVar1 = (**(code **)(*DAT_012b09c8 + 0x20c))(DAT_012b09c8,param_1,param_2);
  return lVar1;
}


