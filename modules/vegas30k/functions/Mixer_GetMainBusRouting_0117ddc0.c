/* Module: vegas30k.dll
   Function: Mixer_GetMainBusRouting
   Address: 0117ddc0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Mixer_GetMainBusRouting(unsigned long *,unsigned long *) */

long Mixer_GetMainBusRouting(ulong *param_1,ulong *param_2)

{
  long lVar1;
  
                    /* 0x17ddc0  180  ?Mixer_GetMainBusRouting@@YGJPAK0@Z */
  lVar1 = (**(code **)(*DAT_012b09c8 + 0x60))(DAT_012b09c8,param_1,param_2);
  return lVar1;
}


