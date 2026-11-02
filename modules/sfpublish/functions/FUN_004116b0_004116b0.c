/* Module: sfpublish.dll
   Function: FUN_004116b0
   Address: 004116b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_004116b0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (-1 < *(int *)(param_1 + 0x30)) {
    uVar1 = **(undefined4 **)(*(int *)(*(int *)(param_1 + 0x2c) + 8) + *(int *)(param_1 + 0x30) * 4)
    ;
  }
  return uVar1;
}


