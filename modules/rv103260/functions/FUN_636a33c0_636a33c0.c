/* Module: rv103260.dll
   Function: FUN_636a33c0
   Address: 636a33c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_636a33c0(int *param_1)

{
  undefined4 *puVar1;
  
  FUN_636a35c0((int)param_1);
  puVar1 = (undefined4 *)param_1[8];
  if (puVar1 != (undefined4 *)0x0) {
    FUN_636a5830(puVar1);
    operator_delete(puVar1);
    param_1[8] = 0;
  }
  (**(code **)(*param_1 + 8))();
  return 0;
}


