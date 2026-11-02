/* Module: rmbe3260.dll
   Function: FUN_6605ac70
   Address: 6605ac70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6605ac70(int param_1)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint local_c;
  uint local_8;
  
  iVar3 = param_1;
  if (*(int *)(param_1 + 0x54) == 0) {
    return 0;
  }
  local_c = 0xffffffff;
  local_8 = 0xffffffff;
  param_1 = *(int *)(param_1 + 0x34);
  while (param_1 != 0) {
    piVar5 = (int *)FUN_6605c5e0(&param_1);
    uVar7 = *(uint *)(*piVar5 + 4);
    uVar1 = *(uint *)(*piVar5 + 8);
    if ((uVar1 <= local_8) && ((uVar1 < local_8 || (uVar7 < local_c)))) {
      local_c = uVar7;
      local_8 = uVar1;
    }
  }
  param_1 = *(int *)(iVar3 + 0x48);
  if (param_1 != 0) {
    do {
      iVar4 = param_1;
      puVar6 = (undefined4 *)FUN_6605c5e0(&param_1);
      puVar2 = (uint *)*puVar6;
      uVar7 = puVar2[2] + (uint)CARRY4(puVar2[1],*puVar2);
      if (local_8 < uVar7) {
        return 0;
      }
      if ((local_8 <= uVar7) && (local_c < puVar2[1] + *puVar2)) {
        return 0;
      }
      param_1 = (**(code **)(*(int *)(iVar3 + 0x44) + 0xc))(iVar4);
      if (puVar2 != (uint *)0x0) {
        FUN_6605b280((int)puVar2);
        operator_delete(puVar2);
      }
    } while (param_1 != 0);
  }
  return 0;
}


