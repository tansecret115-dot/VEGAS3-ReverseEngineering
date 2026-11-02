/* Module: encn3260.dll
   Function: FUN_664c1430
   Address: 664c1430
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_664c1430(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  *param_1 = &PTR_LAB_664df7c0;
  param_1[1] = &PTR_LAB_664ddfd0;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_664c0ed0(param_1 + 6);
  param_1[6] = &PTR_FUN_664df7bc;
  FUN_664c10c0(param_1 + 10);
  param_1[10] = &PTR_FUN_664df7b8;
  *param_1 = &PTR_FUN_664df790;
  param_1[1] = &PTR_LAB_664df750;
  puVar1 = operator_new(8);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = FUN_664cf1f0(puVar1);
    param_1[3] = iVar2;
    FUN_664c1ad0(iVar2);
    return param_1;
  }
  param_1[3] = 0;
  FUN_664c1ad0(0);
  return param_1;
}


