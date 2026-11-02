/* Module: sdpp3260.dll
   Function: FUN_10005cf0
   Address: 10005cf0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_10005cf0(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1[2];
  *param_1 = &PTR_FUN_10008a80;
  if ((puVar1 != (undefined4 *)0x0) && (puVar1 != param_1 + 6)) {
    if ((DAT_10009748 != (int *)0x0) && (param_1[5] == 0)) {
      (**(code **)(*DAT_10009748 + 0x14))(DAT_10009748,puVar1);
      param_1[5] = 0;
      return;
    }
    operator_delete(puVar1);
    param_1[2] = 0;
  }
  return;
}


