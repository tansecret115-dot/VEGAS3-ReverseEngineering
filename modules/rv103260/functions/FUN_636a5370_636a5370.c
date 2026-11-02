/* Module: rv103260.dll
   Function: FUN_636a5370
   Address: 636a5370
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_636a5370(int *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_636a41a0((int)param_1);
  puVar1 = (undefined4 *)param_1[8];
  if (puVar1 != (undefined4 *)0x0) {
    FUN_636a5830(puVar1);
    operator_delete(puVar1);
    param_1[8] = 0;
  }
  (**(code **)(*param_1 + 8))();
  return uVar2;
}


