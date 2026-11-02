/* Module: encn3260.dll
   Function: FUN_664b09b0
   Address: 664b09b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_664b09b0(int param_1)

{
  undefined4 *puVar1;
  
  if (*(undefined4 **)(param_1 + 4) != (undefined4 *)0x0) {
    FUN_664d5910(*(undefined4 **)(param_1 + 4));
    puVar1 = *(undefined4 **)(param_1 + 4);
    if (puVar1 != (undefined4 *)0x0) {
      FUN_664d5750(puVar1);
      operator_delete(puVar1);
    }
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}


