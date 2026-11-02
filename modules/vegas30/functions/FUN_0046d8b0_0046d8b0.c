/* Module: vegas30.exe
   Function: FUN_0046d8b0
   Address: 0046d8b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0046d8b0(int param_1,uint param_2,int param_3,uint param_4,int param_5,int param_6)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;
  int local_4;
  
  local_14 = 0;
  piVar3 = *(int **)(param_1 + 0xcd0);
  uVar1 = *(undefined4 *)(param_1 + 0xbc8);
  iVar6 = *piVar3;
  if (iVar6 < 1) {
    return 0;
  }
  if (DAT_00649e0c == 0) {
    piVar3 = (int *)FUN_00469040(param_1,piVar3);
    if (piVar3 == (int *)0x0) {
      return 0;
    }
    iVar6 = *piVar3;
  }
  FUN_005b83b0(uVar1,1);
  if (param_6 == 0) {
    local_8 = param_4;
    local_4 = param_5;
  }
  else {
    local_8 = 0;
    local_4 = 0;
  }
  local_10 = 0;
  if (0 < iVar6) {
    do {
      iVar2 = *(int *)(piVar3[2] + local_10 * 4);
      uVar4 = *(uint *)(iVar2 + 0x10);
      if (((uVar4 & 8) == 0) && ((uVar4 & 0x100000) == 0)) {
        iVar5 = *(int *)(iVar2 + 0x24) + *(int *)(iVar2 + 0x1c) +
                (uint)CARRY4(*(uint *)(iVar2 + 0x20),*(uint *)(iVar2 + 0x18));
        if ((iVar5 < param_3) ||
           ((iVar5 <= param_3 && (*(uint *)(iVar2 + 0x20) + *(uint *)(iVar2 + 0x18) <= param_2))))
        goto LAB_0046dad5;
        FUN_004ea250(uVar1,*(undefined4 *)(iVar2 + 8),1,0);
        uVar4 = *(uint *)(iVar2 + 0x18);
        local_14 = local_14 + 1;
        iVar5 = *(int *)(iVar2 + 0x1c);
        if ((iVar5 < param_3) || ((iVar5 <= param_3 && (uVar4 < param_2)))) {
          FUN_004ea880(uVar1);
          iVar5 = FUN_005ca440(uVar1,iVar2,param_2,param_3,local_8,local_4,0,&local_c,0,1);
          if ((-1 < iVar5) && (local_c != 0)) {
            *(uint *)(local_c + 0x10) = *(uint *)(local_c + 0x10) | 0x10;
            uVar4 = *(uint *)(iVar2 + 0x10);
            goto LAB_0046dad5;
          }
        }
        else if (local_8 != 0 || local_4 != 0) {
          FUN_005c97b0(uVar1,iVar2,uVar4 + local_8,iVar5 + local_4 + (uint)CARRY4(uVar4,local_8),0);
        }
      }
      else {
LAB_0046dad5:
        *(uint *)(iVar2 + 0x10) = uVar4 & 0xffffffef;
      }
      local_10 = local_10 + 1;
    } while (local_10 < iVar6);
  }
  FUN_005b84d0(uVar1,1);
  FUN_00469280(param_1);
  if (piVar3 != *(int **)(param_1 + 0xcd0)) {
    _SfList_Destroy_4(piVar3);
    piVar3 = (int *)FUN_00469040(param_1,*(undefined4 *)(param_1 + 0xcd0));
    iVar6 = *piVar3;
    while (iVar6 = iVar6 + -1, -1 < iVar6) {
      iVar2 = *(int *)(piVar3[2] + iVar6 * 4);
      iVar5 = *(int *)(iVar2 + 0x1c);
      if ((iVar5 <= param_3) && ((iVar5 < param_3 || (*(uint *)(iVar2 + 0x18) < param_2)))) {
        _SfList_DeleteList_16(piVar3,iVar6,1,0);
      }
    }
  }
  if ((param_6 != 0) && (param_4 != 0 || param_5 != 0)) {
    FUN_0046ca50(param_1,param_4,param_5,piVar3);
  }
  if (piVar3 != *(int **)(param_1 + 0xcd0)) {
    _SfList_Destroy_4(piVar3);
  }
  return local_14;
}


