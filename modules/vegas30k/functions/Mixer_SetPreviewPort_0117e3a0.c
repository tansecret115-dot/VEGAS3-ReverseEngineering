/* Module: vegas30k.dll
   Function: Mixer_SetPreviewPort
   Address: 0117e3a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Mixer_SetPreviewPort(unsigned long) */

long Mixer_SetPreviewPort(ulong param_1)

{
  long lVar1;
  
                    /* 0x17e3a0  239  ?Mixer_SetPreviewPort@@YGJK@Z */
  Mixer_Unprepare();
  lVar1 = (**(code **)(*(int *)DAT_012b09c8 + 0xa8))(DAT_012b09c8,param_1);
  Mixer_AssignMetronomePort(DAT_012b09c8,DAT_012b0998);
  Mixer_Prepare();
  return lVar1;
}


