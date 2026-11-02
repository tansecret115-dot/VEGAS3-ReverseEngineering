/* Module: vegas30.exe
   Function: FUN_0040c3b0
   Address: 0040c3b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0040c3b0(int param_1)

{
  undefined4 uVar1;
  
  if (0 < *(int *)(param_1 + 0x60)) {
    *(undefined4 *)(param_1 + 0x60) = 0;
    FUN_0040c190(param_1,0);
    return;
  }
  uVar1 = FUN_004e7800();
  *(undefined4 *)(param_1 + 0x60) = uVar1;
  FUN_0040c190(param_1,0);
  return;
}


