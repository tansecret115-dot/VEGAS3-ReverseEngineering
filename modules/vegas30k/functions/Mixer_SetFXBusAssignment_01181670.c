/* Module: vegas30k.dll
   Function: Mixer_SetFXBusAssignment
   Address: 01181670
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Mixer_SetFXBusAssignment(unsigned long,unsigned long) */

long Mixer_SetFXBusAssignment(ulong param_1,ulong param_2)

{
  long lVar1;
  
                    /* 0x181670  228  ?Mixer_SetFXBusAssignment@@YGJKK@Z */
  lVar1 = (**(code **)(*DAT_012b09c8 + 0x9c))(DAT_012b09c8,param_1,param_2);
  return lVar1;
}


