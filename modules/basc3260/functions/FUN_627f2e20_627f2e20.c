/* Module: basc3260.dll
   Function: FUN_627f2e20
   Address: 627f2e20
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_627f2e20(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1[2];
  *param_1 = &PTR_FUN_627f5ac8;
  if ((puVar1 != (undefined4 *)0x0) && (puVar1 != param_1 + 6)) {
    if ((DAT_627f63d0 != (int *)0x0) && (param_1[5] == 0)) {
      (**(code **)(*DAT_627f63d0 + 0x14))(DAT_627f63d0,puVar1);
      param_1[5] = 0;
      return;
    }
    operator_delete(puVar1);
    param_1[2] = 0;
  }
  return;
}


