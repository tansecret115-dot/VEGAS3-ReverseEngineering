/* Module: rmto3260.dll
   Function: FUN_662ddf70
   Address: 662ddf70
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_662ddf70(int param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int local_14;
  int local_10;
  undefined4 uStack_c;
  int local_8;
  
  uVar1 = *(uint *)(param_1 + 0x24);
  local_10 = (*(int *)(param_1 + 0x28) - uVar1) * param_2;
  local_8 = 0;
  uStack_c = 0;
  uVar3 = ftol();
  if (uVar3 < uVar1) {
    uVar3 = uVar1;
  }
  if (*(uint *)(param_1 + 0x28) < uVar3) {
    uVar3 = *(uint *)(param_1 + 0x28);
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_662eefd0(&local_14);
    FUN_662ef850(&local_14,&DAT_6630a674);
    FUN_662ef0f0(&local_14);
  }
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x18)) {
    do {
      if (local_8 < 0) {
        return local_8;
      }
      piVar2 = *(int **)(*(int *)(param_1 + 0x14) + iVar4 * 4);
      local_8 = (**(code **)(*piVar2 + 0xc))(piVar2,uVar3);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 0x18));
  }
  return local_8;
}


