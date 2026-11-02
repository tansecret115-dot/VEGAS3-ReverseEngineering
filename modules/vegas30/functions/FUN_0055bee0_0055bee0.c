/* Module: vegas30.exe
   Function: FUN_0055bee0
   Address: 0055bee0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0055bee0(undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2[0x1a] != 0) {
    iVar1 = *param_2;
    iVar2 = param_2[1];
    *(undefined4 *)(iVar2 + 0x2e60) = *(undefined4 *)(iVar1 + 0x2e60);
    *(undefined4 *)(iVar2 + 0x2e64) = *(undefined4 *)(iVar1 + 0x2e64);
    *(undefined4 *)(param_2[1] + 0x2e5c) = *(undefined4 *)(*param_2 + 0x2e5c);
    Mixer_SetPref(0x90,(void *)(*param_2 + 0x2e5c));
    Mixer_SetPref(0x91,(void *)(*param_2 + 0x2e60));
  }
  param_2[0x1a] = 0;
  return;
}


