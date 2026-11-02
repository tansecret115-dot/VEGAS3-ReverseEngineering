/* Module: rmme3260.dll
   Function: FUN_66252320
   Address: 66252320
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66252320(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1[2];
  *param_1 = &PTR_FUN_6626c9b0;
  if ((puVar1 != (undefined4 *)0x0) && (puVar1 != param_1 + 6)) {
    if ((DAT_6627f0c4 != (int *)0x0) && (param_1[5] == 0)) {
      (**(code **)(*DAT_6627f0c4 + 0x14))(DAT_6627f0c4,puVar1);
      param_1[5] = 0;
      return;
    }
    operator_delete(puVar1);
    param_1[2] = 0;
  }
  return;
}


