/* Module: vegas30.exe
   Function: FUN_0041c6e0
   Address: 0041c6e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041c6e0(int param_1)

{
  EMIXERTYPE EVar1;
  
  EVar1 = Mixer_GetMixerType((ISFMixer *)0x0);
  if (EVar1 == 1) {
    FUN_0041c5c0(param_1);
  }
  else if ((1 < (int)EVar1) && ((int)EVar1 < 4)) {
    FUN_0041c3c0(param_1);
  }
  SendMessageA(*(HWND *)(param_1 + 0x204),0x411,0x192,4);
  return;
}


