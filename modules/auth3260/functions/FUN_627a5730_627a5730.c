/* Module: auth3260.dll
   Function: FUN_627a5730
   Address: 627a5730
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_627a5730(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1[2];
  *param_1 = &PTR_FUN_627a7c50;
  if ((puVar1 != (undefined4 *)0x0) && (puVar1 != param_1 + 6)) {
    if ((DAT_627a8100 != (int *)0x0) && (param_1[5] == 0)) {
      (**(code **)(*DAT_627a8100 + 0x14))(DAT_627a8100,puVar1);
      param_1[5] = 0;
      return;
    }
    operator_delete(puVar1);
    param_1[2] = 0;
  }
  return;
}


