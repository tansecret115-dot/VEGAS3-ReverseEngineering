/* Module: vegas30k.dll
   Function: Mixer_AssignPreviewPort
   Address: 0117e410
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Mixer_AssignPreviewPort(struct ISFMixer *,unsigned long) */

long Mixer_AssignPreviewPort(ISFMixer *param_1,ulong param_2)

{
  long lVar1;
  
                    /* 0x17e410  144  ?Mixer_AssignPreviewPort@@YGJPAUISFMixer@@K@Z */
  if (param_1 == (ISFMixer *)0x0) {
    param_1 = DAT_012b09c8;
  }
  Mixer_Unprepare();
  lVar1 = (**(code **)(*(int *)param_1 + 0xa8))(param_1,param_2);
  (**(code **)(*(int *)DAT_012b09c8 + 0x24))(DAT_012b09c8,0,0,&stack0xfffffffc,0,0);
  Mixer_AssignMetronomePort(param_1,DAT_012b0998);
  Mixer_Prepare();
  return lVar1;
}


