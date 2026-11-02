/* Module: vegas30.exe
   Function: FUN_005c6f40
   Address: 005c6f40
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005c6f40(undefined4 *param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int local_c;
  int local_8;
  int local_4;
  
  local_c = 0;
  FUN_005b83b0(param_1,1);
  iVar3 = param_3;
  iVar2 = param_2;
  *(int *)(param_3 + 4) = param_2;
  iVar4 = FUN_005c68e0(param_2);
  if ((iVar4 < 1) && (param_5 != 0)) {
    iVar4 = *(int *)(iVar2 + 8);
    *(int *)(iVar2 + 0x50) = iVar3;
    if (iVar4 != 0) {
      *(uint *)(iVar4 + 0x10) = *(uint *)(iVar4 + 0x10) | 0x200000;
      *(uint *)*param_1 = *(uint *)*param_1 | 0x2000;
    }
    if ((*(int *)(iVar2 + 0x24) < 1) &&
       ((*(int *)(iVar2 + 0x24) < 0 || (*(int *)(iVar2 + 0x20) == 0)))) {
      local_8 = *(int *)(iVar3 + 0x10);
      local_4 = *(int *)(iVar3 + 0x14);
      if ((local_4 < 1) && ((local_4 < 0 || (local_8 == 0)))) {
        local_8 = 1;
        local_4 = 0;
      }
      FUN_005c7760(iVar2,0,&local_8,0,0);
      FUN_005c6cd0(iVar2,3);
    }
  }
  else {
    puVar1 = (undefined4 *)(iVar2 + 0x54);
    if (*(int *)(iVar2 + 0x54) == 0) {
      local_c = _SfList_CreateExZ_32(puVar1,4,0xffffffff,0xffffffff,0x40000000,0,0,0);
      if (local_c < 0) goto LAB_005c70a6;
      param_2 = *(int *)(iVar2 + 0x50);
      if (param_2 != 0) {
        _SfList_InsertList_16(*puVar1,0xffffffff,&param_2,1);
      }
    }
    if (param_4 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined4 *)*puVar1;
    }
    param_2 = iVar3;
    local_c = _SfList_InsertList_16(*puVar1,uVar5,&param_2,1);
    if (local_c < 0) goto LAB_005c70a6;
    if (param_5 != 0) {
      FUN_005c86c0(param_1,iVar2,uVar5);
    }
  }
  *(uint *)*param_1 = *(uint *)*param_1 | 0x100;
  if (((*(uint *)(iVar2 + 0x10) & 0x400) != 0) ||
     ((*(int *)(iVar2 + 8) != 0 && ((*(uint *)(*(int *)(iVar2 + 8) + 0x10) & 0x200) != 0)))) {
    *(uint *)*param_1 = *(uint *)*param_1 | 0x400;
  }
LAB_005c70a6:
  FUN_005b84d0(param_1,1);
  return local_c;
}


