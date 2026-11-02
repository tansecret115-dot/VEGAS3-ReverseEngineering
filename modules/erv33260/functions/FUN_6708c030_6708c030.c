/* Module: erv33260.dll
   Function: FUN_6708c030
   Address: 6708c030
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_6708c030(void *this,undefined4 param_1,undefined4 param_2,int param_3,int param_4,char *param_5,
            undefined4 param_6,undefined4 param_7,int param_8,undefined4 param_9)

{
  byte bVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  uint uVar11;
  int iVar12;
  undefined4 local_40;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  int local_20;
  int local_18;
  char local_14;
  int local_10;
  int local_c;
  int local_8;
  
  iVar2 = param_4;
  local_38 = param_7;
  local_34 = param_6;
  bVar1 = *(byte *)(*(int *)((int)this + 0x88) + 6 + param_3 * 0xc);
  local_30 = 0x10;
  local_40 = 0;
  if (bVar1 < 2) {
    local_38 = param_1;
    local_34 = param_2;
    local_30 = param_4;
  }
  else if (bVar1 == 2) {
    cVar4 = *param_5;
    if ((cVar4 == '\0') && (param_5[1] == '\0')) {
      local_38 = param_1;
      local_30 = param_4;
      local_34 = param_2;
      if (*(char *)(*(int *)((int)this + 0x88) + param_3 * 0xc + 7) == '\0') {
        local_40 = 1;
      }
    }
    else {
      pcVar10 = param_5 + 1;
      cVar3 = (char)(param_8 * cVar4 + 0x2000 >> 0xe);
      param_5._0_1_ = cVar3 - cVar4;
      cVar4 = (char)(param_8 * *pcVar10 + 0x2000 >> 0xe);
      cVar6 = cVar4 - *pcVar10;
      uVar11 = *(uint *)((int)this + 0xd4) >> 1;
      uVar7 = *(uint *)((int)this + 0xd0) >> 1;
      iVar8 = (*(int *)((int)this + 0xa0) * 8 - uVar7) * 3 + -4;
      if (iVar8 < (char)param_5) {
        param_5._0_1_ = (char)iVar8;
      }
      iVar8 = uVar7 * -3 + -0x14;
      if ((char)param_5 < iVar8) {
        param_5._0_1_ = (char)iVar8;
      }
      iVar8 = (*(int *)((int)this + 0xa4) * 8 - uVar11) * 3 + -4;
      if (iVar8 < cVar6) {
        cVar6 = (char)iVar8;
      }
      iVar8 = uVar11 * -3 + -0x14;
      if (cVar6 < iVar8) {
        cVar6 = (char)iVar8;
      }
      local_c = 0;
      local_8 = 0;
      if ((cVar3 != '\0') && (local_c = (int)cVar3 % 3, local_c < 0)) {
        local_c = local_c + 3;
      }
      if ((cVar4 != '\0') && (local_8 = (int)cVar4 % 3, local_8 < 0)) {
        local_8 = local_8 + 3;
      }
      param_4 = 0;
      local_10 = 0;
      if (((char)param_5 != '\0') && (param_4 = (int)(char)param_5 % 3, param_4 < 0)) {
        param_4 = param_4 + 3;
      }
      if ((cVar6 != '\0') && (local_10 = (int)cVar6 % 3, local_10 < 0)) {
        local_10 = local_10 + 3;
      }
      iVar8 = (local_c + local_8 * 4) * 4;
      (**(code **)(iVar8 + *(int *)((int)this + 0x268)))(iVar2);
      iVar5 = (param_4 + local_10 * 4) * 4;
      (**(code **)(iVar5 + *(int *)((int)this + 0x268)))(iVar2);
      (**(code **)(iVar8 + *(int *)((int)this + 0x268)))(iVar2);
      (**(code **)(iVar5 + *(int *)((int)this + 0x268)))(iVar2);
      (**(code **)(iVar8 + *(int *)((int)this + 0x268)))(iVar2);
      (**(code **)(iVar5 + *(int *)((int)this + 0x268)))(iVar2);
      (**(code **)(iVar8 + *(int *)((int)this + 0x268)))(iVar2);
      (**(code **)(iVar5 + *(int *)((int)this + 0x268)))(iVar2);
    }
  }
  else {
    iVar2 = *(int *)((int)this + 0xa0);
    iVar8 = *(int *)((int)this + 0xa4);
    local_18 = 0;
    do {
      local_20 = 0;
      pcVar10 = param_5 + local_18;
      do {
        cVar4 = (char)(param_8 * *pcVar10 + 0x2000 >> 0xe);
        local_8._0_1_ = cVar4 - *pcVar10;
        cVar3 = (char)(param_8 * pcVar10[1] + 0x2000 >> 0xe);
        iVar12 = (*(uint *)((int)this + 0xd0) >> 1) + local_20;
        iVar9 = (*(uint *)((int)this + 0xd4) >> 1) + local_18;
        iVar5 = (iVar2 * 8 - iVar12) * 3 + -10;
        if (iVar5 < (char)local_8) {
          local_8._0_1_ = (char)iVar5;
        }
        iVar5 = iVar12 * -3 + -0x14;
        local_14 = (char)local_8;
        if ((char)local_8 < iVar5) {
          local_14 = (char)iVar5;
        }
        iVar5 = (iVar8 * 8 - iVar9) * 3 + -10;
        local_8._0_1_ = cVar3 - pcVar10[1];
        if (iVar5 < (char)(cVar3 - pcVar10[1])) {
          local_8._0_1_ = (char)iVar5;
        }
        iVar5 = iVar9 * -3 + -0x14;
        cVar6 = (char)local_8;
        if ((char)local_8 < iVar5) {
          cVar6 = (char)iVar5;
        }
        iVar9 = 0;
        iVar5 = 0;
        if ((cVar4 != '\0') && (iVar9 = (int)cVar4 % 3, iVar9 < 0)) {
          iVar9 = iVar9 + 3;
        }
        if ((cVar3 != '\0') && (iVar5 = (int)cVar3 % 3, iVar5 < 0)) {
          iVar5 = iVar5 + 3;
        }
        local_10 = 0;
        local_8 = 0;
        if ((local_14 != '\0') && (local_10 = (int)local_14 % 3, local_10 < 0)) {
          local_10 = local_10 + 3;
        }
        if ((cVar6 != '\0') && (local_8 = (int)cVar6 % 3, local_8 < 0)) {
          local_8 = local_8 + 3;
        }
        (**(code **)(*(int *)((int)this + 0x268) + (iVar9 + iVar5 * 4) * 4))(param_4);
        (**(code **)(*(int *)((int)this + 0x268) + (local_10 + local_8 * 4) * 4))(param_4);
        local_20 = local_20 + 4;
        pcVar10 = pcVar10 + 2;
      } while (local_20 < 8);
      local_18 = local_18 + 4;
    } while (local_18 < 8);
  }
  (**(code **)((int)this + 0xfc))(param_6,local_38,local_34,local_30,local_40,param_8,param_9);
  return;
}


