/* Module: rmme3260.dll
   Function: FUN_6625f200
   Address: 6625f200
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6625f200(int param_1)

{
  undefined4 *puVar1;
  
  if (param_1 != 0) {
    puVar1 = *(undefined4 **)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_66250ed0(puVar1);
      operator_delete(puVar1);
      *(undefined4 *)(param_1 + 0x14) = 0;
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
    puVar1 = *(undefined4 **)(param_1 + 0x1c);
    if (puVar1 != (undefined4 *)0x0) {
      FUN_66250ed0(puVar1);
      operator_delete(puVar1);
      *(undefined4 *)(param_1 + 0x1c) = 0;
      *(undefined4 *)(param_1 + 0x20) = 0;
    }
  }
  return;
}


