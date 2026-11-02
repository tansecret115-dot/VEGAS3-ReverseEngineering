/* Module: vegas30.exe
   Function: FUN_0057ef90
   Address: 0057ef90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_0057ef90(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0x80070057;
  if (*(int **)(param_1 + 0x38) != (int *)0x0) {
    uVar1 = (**(code **)(**(int **)(param_1 + 0x38) + 8))();
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  return uVar1;
}


