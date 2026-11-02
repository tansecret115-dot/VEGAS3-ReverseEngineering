/* Module: vegas30k.dll
   Function: Mixer_AssignMetronomePort
   Address: 0117e470
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Mixer_AssignMetronomePort(struct ISFMixer *,unsigned long) */

long Mixer_AssignMetronomePort(ISFMixer *param_1,ulong param_2)

{
  int *piVar1;
  int *piVar2;
  int local_4;
  
                    /* 0x17e470  143  ?Mixer_AssignMetronomePort@@YGJPAUISFMixer@@K@Z */
  piVar1 = &local_4;
  local_4 = 0;
  piVar2 = DAT_012b09c8;
  (**(code **)(*DAT_012b09c8 + 0x24))(DAT_012b09c8,0,0,&local_4,0,0);
  if (piVar2 <= piVar1) {
    piVar1 = (int *)0xffffffff;
  }
  (**(code **)(*DAT_012b09c8 + 0xb0))(DAT_012b09c8,piVar1);
  return 1;
}


