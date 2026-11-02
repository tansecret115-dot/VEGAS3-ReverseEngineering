/* Module: vegas30k.dll
   Function: Mixer_GetFXBusAssignment
   Address: 01181690
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Mixer_GetFXBusAssignment(unsigned long,unsigned long *) */

long Mixer_GetFXBusAssignment(ulong param_1,ulong *param_2)

{
  long lVar1;
  
                    /* 0x181690  175  ?Mixer_GetFXBusAssignment@@YGJKPAK@Z */
  lVar1 = (**(code **)(*DAT_012b09c8 + 0x98))(DAT_012b09c8,param_1,param_2);
  return lVar1;
}


