/* Module: rmto3260.dll
   Function: FUN_662eebc0
   Address: 662eebc0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_662eebc0(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1[2];
  *param_1 = &PTR_FUN_66307b90;
  if ((puVar1 != (undefined4 *)0x0) && (puVar1 != param_1 + 6)) {
    if ((DAT_66311cf8 != (int *)0x0) && (param_1[5] == 0)) {
      (**(code **)(*DAT_66311cf8 + 0x14))(DAT_66311cf8,puVar1);
      param_1[5] = 0;
      return;
    }
    operator_delete(puVar1);
    param_1[2] = 0;
  }
  return;
}


