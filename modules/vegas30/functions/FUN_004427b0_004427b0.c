/* Module: vegas30.exe
   Function: FUN_004427b0
   Address: 004427b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004427b0(undefined4 param_1,uint param_2,int param_3,uint param_4,uint param_5)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  undefined8 uVar8;
  int local_2c;
  uint local_28;
  int local_24;
  int local_20;
  undefined4 uStack_1c;
  uint local_18;
  undefined4 uStack_14;
  undefined8 local_10;
  int local_8;
  undefined4 local_4;
  
  iVar5 = param_2;
  uVar7 = 0;
  param_2 = *(uint *)(param_2 + 0xc);
  local_2c = 0;
  local_28 = 0;
  local_20 = 0;
  local_24 = 0;
  if (0xffe < param_2) {
    param_2 = 0xfff;
  }
  piVar6 = (int *)(iVar5 + 0x10);
  local_2c = FUN_0047c7d0(param_1,0);
  if (local_2c == 0) {
    local_20 = *piVar6 + param_3;
    uStack_1c = 0;
    local_10 = ftol();
    local_8 = *(int *)(iVar5 + 0x14);
    local_4 = FUN_00441eb0(*(undefined4 *)(iVar5 + 0x18));
    piVar6 = (int *)(iVar5 + 0x1c);
    local_20 = FUN_0047c4b0(&local_2c,0,0x40000000,0x3f800000,0,1,&local_10);
    if (local_20 < 0) {
      return local_20;
    }
    local_24 = 1;
    uVar3 = 1;
  }
  else {
    uVar4 = **(uint **)(local_2c + 0x30);
    uVar3 = local_28;
    if (uVar4 != 0) {
      uStack_14 = 0;
      local_18 = param_3;
      uVar8 = ftol();
      iVar5 = (int)((ulonglong)uVar8 >> 0x20);
      local_18 = (uint)uVar8;
      do {
        iVar1 = *(int *)(local_2c + 0x30);
        puVar2 = (uint *)(*(int *)(iVar1 + 4) * uVar7 + *(int *)(iVar1 + 8));
        uVar3 = puVar2[1];
        if ((iVar5 <= (int)uVar3) && ((iVar5 < (int)uVar3 || (local_18 < *puVar2)))) {
          _SfList_DeleteList_16(iVar1,uVar7,1,0);
          uVar4 = uVar4 - 1;
          uVar7 = uVar7 - 1;
        }
        uVar7 = uVar7 + 1;
        uVar3 = local_28;
      } while (uVar7 < uVar4);
    }
  }
  if (uVar3 < param_2) {
    iVar5 = param_2 - uVar3;
    do {
      uVar7 = *piVar6 + param_3;
      if ((param_4 <= uVar7) && (uVar7 <= param_5)) {
        uStack_14 = 0;
        local_18 = uVar7;
        uVar8 = ftol();
        local_8 = piVar6[1];
        local_10 = uVar8;
        local_4 = FUN_00441eb0(piVar6[2]);
        _SfList_InsertList_16(*(undefined4 *)(local_2c + 0x30),0xffffffff,&local_10,1);
      }
      piVar6 = piVar6 + 3;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  if (local_24 == 0) {
    return local_20;
  }
  iVar5 = FUN_0047c670(param_1,local_2c,0xffffffff);
  return iVar5;
}


