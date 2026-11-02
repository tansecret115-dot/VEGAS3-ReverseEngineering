/* Module: rmme3260.dll
   Function: FUN_66245e10
   Address: 66245e10
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66245e10(int param_1)

{
  undefined4 *puVar1;
  
  if (*(undefined4 **)(param_1 + 4) != (undefined4 *)0x0) {
    FUN_66265dd0(*(undefined4 **)(param_1 + 4));
    puVar1 = *(undefined4 **)(param_1 + 4);
    if (puVar1 != (undefined4 *)0x0) {
      FUN_66265c10(puVar1);
      operator_delete(puVar1);
    }
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}


