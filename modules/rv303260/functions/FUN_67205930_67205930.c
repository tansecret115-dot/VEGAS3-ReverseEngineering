/* Module: rv303260.dll
   Function: FUN_67205930
   Address: 67205930
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_67205930(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0xe4);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_6720e700(puVar1);
    operator_delete(puVar1);
    *(undefined4 *)(param_1 + 0xe4) = 0;
  }
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0xec) = 0;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  return 0;
}


