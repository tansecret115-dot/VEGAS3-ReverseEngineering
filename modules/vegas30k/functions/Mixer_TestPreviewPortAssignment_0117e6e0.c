/* Module: vegas30k.dll
   Function: Mixer_TestPreviewPortAssignment
   Address: 0117e6e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Mixer_TestPreviewPortAssignment(unsigned long) */

long Mixer_TestPreviewPortAssignment(ulong param_1)

{
  long lVar1;
  int *piVar2;
  int *piVar3;
  ISFMixerIn *local_18;
  int local_14 [5];
  
                    /* 0x17e6e0  247  ?Mixer_TestPreviewPortAssignment@@YGJK@Z */
  local_18 = (ISFMixerIn *)0x0;
  lVar1 = Mixer_GetHardwareBus(&local_18,param_1,(ISFMixer *)0x0);
  if (-1 < lVar1) {
    piVar3 = local_14;
    (**(code **)(*DAT_012b09c8 + 0x6c))(DAT_012b09c8);
    piVar2 = (int *)&stack0xffffffe0;
    lVar1 = (**(code **)(*piVar3 + 0xbc))(piVar3,piVar2,1);
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  return lVar1;
}


