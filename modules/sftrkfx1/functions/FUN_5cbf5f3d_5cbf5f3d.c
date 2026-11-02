/* Module: sftrkfx1.dll
   Function: FUN_5cbf5f3d
   Address: 5cbf5f3d
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5cbf5f3d(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 8) != 0) {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 8) + 4);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
    *(undefined4 *)(param_1 + 8) = uVar1;
  }
  return;
}


