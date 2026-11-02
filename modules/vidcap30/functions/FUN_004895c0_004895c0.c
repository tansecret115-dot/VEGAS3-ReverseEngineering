/* Module: vidcap30.exe
   Function: FUN_004895c0
   Address: 004895c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004895c0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x22c) == 0) {
    if (*(int *)(param_1 + 0x24c) != 0) {
      uVar1 = _SfLang_GetLCID_4(DAT_005c16d8);
      *(undefined4 *)(param_1 + 0x228) = uVar1;
      FUN_00489600(param_1);
    }
    *(undefined4 *)(param_1 + 0x22c) = 1;
  }
  return;
}


