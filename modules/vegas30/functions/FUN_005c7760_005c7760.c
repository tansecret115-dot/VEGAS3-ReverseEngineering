/* Module: vegas30.exe
   Function: FUN_005c7760
   Address: 005c7760
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005c7760(undefined4 *param_1,uint *param_2,uint *param_3,uint param_4,undefined4 *param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  bool bVar10;
  int local_38;
  int local_34;
  uint local_30;
  int local_2c;
  uint local_28;
  int local_24;
  uint local_20;
  int local_1c;
  uint local_18;
  int local_14;
  uint local_10;
  int local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar3 = (int)param_1;
  local_38 = 0;
  if (*(int *)((int)param_1 + 8) == 0) {
    param_1 = (undefined4 *)0x0;
  }
  else {
    param_1 = *(undefined4 **)(*(int *)((int)param_1 + 8) + 8);
    if (param_1 != (undefined4 *)0x0) {
      FUN_005b83b0(param_1,1);
    }
  }
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_20 = 0;
  local_1c = 0;
  if (param_2 == (uint *)0x0) {
    if (param_5 != (undefined4 *)0x0) {
      *param_5 = 0xffffffff;
    }
  }
  else {
    uVar7 = *(uint *)(iVar3 + 0x18);
    iVar6 = *(int *)(iVar3 + 0x1c);
    local_38 = FUN_005c97b0(param_1,iVar3,*param_2,param_2[1],param_5);
    if ((-1 < local_38) && (local_38 != 1)) {
      uVar4 = *(uint *)(iVar3 + 0x18);
      uVar1 = *(uint *)(iVar3 + 0x1c);
      *param_2 = uVar4;
      local_30 = uVar4 - uVar7;
      param_2[1] = uVar1;
      iVar5 = *(int *)(iVar3 + 0x44);
      uVar2 = *(uint *)(iVar3 + 0x40);
      local_2c = (uVar1 - iVar6) - (uint)(uVar4 < uVar7);
      local_34 = 1;
      if ((-1 < iVar5) && ((0 < iVar5 || (uVar2 != 0)))) {
        *(uint *)(iVar3 + 0x40) = uVar2 - local_30;
        *(uint *)(iVar3 + 0x44) = (iVar5 - local_2c) - (uint)(uVar2 < local_30);
      }
    }
  }
  if (param_3 != (uint *)0x0) {
    uVar7 = param_3[1];
    uVar4 = *param_3;
    if (((int)uVar7 < 1) && (((int)uVar7 < 0 || (uVar4 == 0)))) {
      uVar4 = 1;
      uVar7 = 0;
    }
    uVar1 = *(uint *)(iVar3 + 0x20);
    if ((uVar1 != uVar4) || (*(uint *)(iVar3 + 0x24) != uVar7)) {
      *(uint *)(iVar3 + 0x20) = uVar4;
      local_20 = uVar4 - uVar1;
      *(uint *)(iVar3 + 0xa8) = uVar4;
      local_1c = (uVar7 - *(uint *)(iVar3 + 0x24)) - (uint)(uVar4 < uVar1);
      *(uint *)(iVar3 + 0x24) = uVar7;
      *(uint *)(iVar3 + 0xac) = uVar7;
      *param_3 = uVar4;
      local_34 = 2;
      param_3[1] = uVar7;
    }
  }
  puVar9 = (uint *)0x0;
  iVar6 = *(int *)(iVar3 + 0x44);
  uVar7 = *(uint *)(iVar3 + 0x40);
  if ((iVar6 < 1) && (iVar6 < 0)) {
    uVar7 = 0;
    iVar6 = 0;
  }
  else {
    iVar5 = *(int *)(iVar3 + 0x24);
    if ((iVar5 <= iVar6) && ((iVar5 < iVar6 || (*(uint *)(iVar3 + 0x20) < uVar7)))) {
      uVar7 = *(uint *)(iVar3 + 0x20);
      iVar6 = iVar5;
    }
  }
  *(uint *)(iVar3 + 0x40) = uVar7;
  iVar5 = *(int *)(iVar3 + 0x7c);
  *(int *)(iVar3 + 0x44) = iVar6;
  uVar7 = *(uint *)(iVar3 + 0x78);
  if ((iVar5 < 1) && (iVar5 < 0)) {
    iVar5 = 0;
    uVar7 = 0;
  }
  else {
    iVar6 = *(int *)(iVar3 + 0x24);
    if ((iVar6 <= iVar5) && ((iVar6 < iVar5 || (*(uint *)(iVar3 + 0x20) < uVar7)))) {
      iVar5 = iVar6;
      uVar7 = *(uint *)(iVar3 + 0x20);
    }
  }
  iVar6 = *(int *)(iVar3 + 0x84);
  *(uint *)(iVar3 + 0x78) = uVar7;
  *(int *)(iVar3 + 0x7c) = iVar5;
  if ((iVar6 < 1) && (iVar6 < 0)) {
    iVar5 = 0;
    uVar7 = 0;
  }
  else {
    uVar7 = *(uint *)(iVar3 + 0x20) - *(uint *)(iVar3 + 0x78);
    iVar5 = (*(int *)(iVar3 + 0x24) - *(int *)(iVar3 + 0x7c)) -
            (uint)(*(uint *)(iVar3 + 0x20) < *(uint *)(iVar3 + 0x78));
    if ((iVar6 < iVar5) || ((iVar6 <= iVar5 && (*(uint *)(iVar3 + 0x80) <= uVar7)))) {
      iVar5 = iVar6;
      uVar7 = *(uint *)(iVar3 + 0x80);
    }
  }
  *(uint *)(iVar3 + 0x80) = uVar7;
  *(int *)(iVar3 + 0x84) = iVar5;
  if ((param_4 != 0) && (iVar6 = *(int *)(iVar3 + 0x50), iVar6 != 0)) {
    local_18 = *(uint *)(iVar6 + 8);
    local_14 = *(int *)(iVar6 + 0xc);
    local_28 = *(uint *)(iVar6 + 0x10);
    local_24 = *(int *)(iVar6 + 0x14);
    puVar8 = (uint *)0x0;
    if ((param_4 & 1) != 0) {
      bVar10 = CARRY4(local_18,local_30);
      local_18 = local_18 + local_30;
      local_14 = local_14 + local_2c + (uint)bVar10;
      puVar9 = &local_18;
    }
    if ((param_4 & 2) != 0) {
      if ((local_24 < *(int *)(iVar3 + 0x24)) ||
         ((local_24 <= *(int *)(iVar3 + 0x24) && (local_28 < *(uint *)(iVar3 + 0x20))))) {
        local_8 = 0;
        local_4 = 0;
        local_10 = 0;
        local_c = 0;
        FUN_005c71f0(param_1,iVar3,0,&local_8,&local_10,1);
        local_24 = *(int *)(iVar3 + 0x24);
        local_28 = *(uint *)(iVar3 + 0x20);
        if ((local_c < local_24) || ((local_c <= local_24 && (local_10 <= local_28)))) {
          local_28 = local_10;
          local_24 = local_c;
        }
      }
      else {
        bVar10 = CARRY4(local_28,local_20);
        local_28 = local_28 + local_20;
        local_24 = local_24 + local_1c + (uint)bVar10;
      }
      puVar8 = &local_28;
    }
    FUN_005c7320(iVar3,0,puVar9,puVar8);
  }
  if ((param_1 != (undefined4 *)0x0) && (FUN_005b84d0(param_1,1), local_34 != 0)) {
    if ((local_30 == 0) && (local_2c == 0)) {
      iVar6 = 0;
    }
    else {
      iVar6 = 1;
    }
    uVar7 = *(uint *)(iVar3 + 0x58) | iVar6 << 5;
    *(uint *)(iVar3 + 0x58) = uVar7;
    if ((local_20 + local_30 == 0) && (local_1c + local_2c + (uint)CARRY4(local_20,local_30) == 0))
    {
      iVar6 = 0;
    }
    else {
      iVar6 = 1;
    }
    *(uint *)(iVar3 + 0x58) = iVar6 << 6 | uVar7;
    iVar6 = *(int *)(iVar3 + 0x3c) + 1;
    if (iVar6 < 2) {
      iVar6 = 1;
    }
    *(int *)(iVar3 + 0x3c) = iVar6;
    *(uint *)*param_1 = *(uint *)*param_1 | 0x40;
    iVar6 = *(int *)(iVar3 + 8);
    if (iVar6 != 0) {
      *(uint *)(iVar6 + 0x10) = *(uint *)(iVar6 + 0x10) | 0x200000;
      *(uint *)*param_1 = *(uint *)*param_1 | 0x2000;
    }
    if (((*(uint *)(iVar3 + 0x10) & 0x400) != 0) ||
       ((*(uint *)(*(int *)(iVar3 + 8) + 0x10) & 0x200) != 0)) {
      *(uint *)*param_1 = *(uint *)*param_1 | 0x400;
    }
  }
  return local_38;
}


