/* Module: erv13260.dll
   Function: FUN_635f1f30
   Address: 635f1f30
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_635f1f30(int param_1)

{
  undefined4 *puVar1;
  
  if (*(undefined4 **)(param_1 + 4) != (undefined4 *)0x0) {
    FUN_63602d70(*(undefined4 **)(param_1 + 4));
    puVar1 = *(undefined4 **)(param_1 + 4);
    if (puVar1 != (undefined4 *)0x0) {
      FUN_63602bb0(puVar1);
      operator_delete(puVar1);
    }
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}


