/* Module: aviplug.dll
   Function: FUN_5f957860
   Address: 5f957860
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_5f957860(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_5f958860(param_1);
  param_1[8] = &PTR_LAB_5f9d8eb8;
  param_1[9] = 0;
  *param_1 = &PTR_LAB_5f9d8e38;
  param_1[8] = &PTR_LAB_5f9d8e18;
  puVar2 = param_1 + 10;
  for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = param_1 + 0x20;
  for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return param_1;
}


