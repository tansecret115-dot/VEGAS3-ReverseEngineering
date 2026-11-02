/* Module: encn3260.dll
   Function: FUN_6648f130
   Address: 6648f130
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6648f130(int param_1)

{
  undefined4 *puVar1;
  
  FUN_6648f270(param_1);
  if (*(void **)(param_1 + 0x88) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x88));
    *(undefined4 *)(param_1 + 0x88) = 0;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x8c);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_664d93c0(puVar1);
    operator_delete(puVar1);
    *(undefined4 *)(param_1 + 0x8c) = 0;
  }
  return;
}


