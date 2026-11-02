/* Module: encn3260.dll
   Function: FUN_664badd0
   Address: 664badd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_664badd0(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1[2];
  *param_1 = &PTR_FUN_664df4f0;
  if ((puVar1 != (undefined4 *)0x0) && (puVar1 != param_1 + 6)) {
    if ((DAT_664f28b0 != (int *)0x0) && (param_1[5] == 0)) {
      (**(code **)(*DAT_664f28b0 + 0x14))(DAT_664f28b0,puVar1);
      param_1[5] = 0;
      return;
    }
    operator_delete(puVar1);
    param_1[2] = 0;
  }
  return;
}


