/* Module: rn5a3260.dll
   Function: FUN_628a3f50
   Address: 628a3f50
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_628a3f50(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1[2];
  *param_1 = &PTR_FUN_628a6ae0;
  if ((puVar1 != (undefined4 *)0x0) && (puVar1 != param_1 + 6)) {
    if ((DAT_628a7360 != (int *)0x0) && (param_1[5] == 0)) {
      (**(code **)(*DAT_628a7360 + 0x14))(DAT_628a7360,puVar1);
      param_1[5] = 0;
      return;
    }
    operator_delete(puVar1);
    param_1[2] = 0;
  }
  return;
}


