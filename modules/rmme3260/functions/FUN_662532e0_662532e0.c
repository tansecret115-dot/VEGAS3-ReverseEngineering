/* Module: rmme3260.dll
   Function: FUN_662532e0
   Address: 662532e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_662532e0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  *param_1 = &PTR_LAB_6626ca50;
  param_1[1] = &PTR_LAB_6626b730;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_66252c30(param_1 + 6);
  param_1[6] = &PTR_FUN_6626ca4c;
  FUN_66252eb0(param_1 + 10);
  param_1[10] = &PTR_FUN_6626ca48;
  *param_1 = &PTR_FUN_6626ca20;
  param_1[1] = &PTR_LAB_6626c9e0;
  puVar1 = operator_new(8);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = FUN_662539b0(puVar1);
    param_1[3] = iVar2;
    FUN_66263ea0(iVar2);
    return param_1;
  }
  param_1[3] = 0;
  FUN_66263ea0(0);
  return param_1;
}


