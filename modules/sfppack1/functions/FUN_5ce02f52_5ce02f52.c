/* Module: sfppack1.dll
   Function: FUN_5ce02f52
   Address: 5ce02f52
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5ce02f52(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 8) != 0) {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 8) + 4);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
    *(undefined4 *)(param_1 + 8) = uVar1;
  }
  return;
}


