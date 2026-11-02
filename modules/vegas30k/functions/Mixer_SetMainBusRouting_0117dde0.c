/* Module: vegas30k.dll
   Function: Mixer_SetMainBusRouting
   Address: 0117dde0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Mixer_SetMainBusRouting(unsigned long *,unsigned long) */

long Mixer_SetMainBusRouting(ulong *param_1,ulong param_2)

{
  long lVar1;
  
                    /* 0x17dde0  232  ?Mixer_SetMainBusRouting@@YGJPAKK@Z */
  Mixer_Unprepare();
  lVar1 = (**(code **)(*DAT_012b09c8 + 100))(DAT_012b09c8,param_1,param_2);
  Mixer_Prepare();
  return lVar1;
}


