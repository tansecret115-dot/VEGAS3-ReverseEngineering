/* Module: encn3260.dll
   Function: FUN_664cb3c0
   Address: 664cb3c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_664cb3c0(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_664c3d50(puVar1);
    operator_delete(puVar1);
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined2 *)(param_1 + 0x18) = 0;
  }
  return;
}


