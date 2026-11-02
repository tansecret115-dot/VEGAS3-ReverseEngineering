/* Module: vegas30k.dll
   Function: FUN_01044230
   Address: 01044230
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01044230(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x22c) == 0) {
    if (*(int *)(param_1 + 0x24c) != 0) {
      uVar1 = _SfLang_GetLCID_4(DAT_0120e5c8);
      *(undefined4 *)(param_1 + 0x228) = uVar1;
      FUN_01044270(param_1);
    }
    *(undefined4 *)(param_1 + 0x22c) = 1;
  }
  return;
}


