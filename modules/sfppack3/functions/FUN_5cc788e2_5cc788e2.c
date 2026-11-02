/* Module: sfppack3.dll
   Function: FUN_5cc788e2
   Address: 5cc788e2
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5cc788e2(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 8) != 0) {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 8) + 4);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
    *(undefined4 *)(param_1 + 8) = uVar1;
  }
  return;
}


