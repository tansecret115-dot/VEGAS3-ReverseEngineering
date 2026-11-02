/* Module: aviplug.dll
   Function: FUN_5f95ae20
   Address: 5f95ae20
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f95ae20(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_94 [32];
  undefined4 uStack_14;
  undefined4 local_10;
  undefined4 local_8;
  undefined4 local_4;
  
  puVar2 = local_94;
  for (iVar1 = 0x25; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_8 = *param_2;
  local_10 = 0;
  local_4 = param_1;
  iVar1 = acmDriverEnum(FUN_5f95ad00,local_94,0x80000000);
  if (iVar1 == 0) {
    *param_2 = uStack_14;
  }
  return;
}


