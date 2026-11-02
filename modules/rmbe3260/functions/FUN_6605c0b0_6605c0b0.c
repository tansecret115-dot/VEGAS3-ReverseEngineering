/* Module: rmbe3260.dll
   Function: FUN_6605c0b0
   Address: 6605c0b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6605c0b0(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1[2];
  *param_1 = &PTR_FUN_66068c98;
  if ((puVar1 != (undefined4 *)0x0) && (puVar1 != param_1 + 6)) {
    if ((DAT_660756d4 != (int *)0x0) && (param_1[5] == 0)) {
      (**(code **)(*DAT_660756d4 + 0x14))(DAT_660756d4,puVar1);
      param_1[5] = 0;
      return;
    }
    operator_delete(puVar1);
    param_1[2] = 0;
  }
  return;
}


