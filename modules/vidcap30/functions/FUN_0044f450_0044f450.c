/* Module: vidcap30.exe
   Function: FUN_0044f450
   Address: 0044f450
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0044f450(undefined4 *param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 local_440;
  undefined1 local_43c [4];
  undefined4 local_438 [264];
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_4;
  
  puVar4 = local_438;
  for (iVar2 = 0x10e; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  local_14 = 4;
  local_10 = 2;
  local_4 = 1;
  local_18 = param_3;
  iVar2 = FUN_0044eee0(&local_440,param_2,local_438);
  uVar3 = 0;
  uVar1 = **(uint **)(param_3 + 0x10);
  if (uVar1 != 0) {
    do {
      if (iVar2 < 0) break;
      iVar2 = FUN_0044f500(local_43c,local_440,
                           *(undefined4 *)(*(int *)(*(int *)(param_3 + 0x10) + 8) + uVar3 * 4));
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  *param_1 = local_440;
  return;
}


