/* Module: pnrs3260.dll
   Function: FUN_606f1ce0
   Address: 606f1ce0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_606f1ce0(int *param_1)

{
  undefined4 *puVar1;
  int *local_8;
  
  if (*(int *)(*param_1 + 4) != 0) {
    local_8 = param_1;
    local_8 = FUN_606f20b0(*param_1);
    while (local_8 != (int *)0x0) {
      puVar1 = (undefined4 *)FUN_606f2110((void *)*param_1,(int *)&local_8);
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
    }
    FUN_606f1e20((void *)*param_1);
  }
  return;
}


