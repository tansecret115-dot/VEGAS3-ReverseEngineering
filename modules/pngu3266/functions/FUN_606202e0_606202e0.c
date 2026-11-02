/* Module: pngu3266.dll
   Function: FUN_606202e0
   Address: 606202e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_606202e0(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1[2];
  *param_1 = &PTR_FUN_6062d2c8;
  if ((puVar1 != (undefined4 *)0x0) && (puVar1 != param_1 + 6)) {
    if ((DAT_6064b4a4 != (int *)0x0) && (param_1[5] == 0)) {
      (**(code **)(*DAT_6064b4a4 + 0x14))(DAT_6064b4a4,puVar1);
      param_1[5] = 0;
      return;
    }
    operator_delete(puVar1);
    param_1[2] = 0;
  }
  return;
}


