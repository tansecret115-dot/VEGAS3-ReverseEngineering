/* Module: erv23260.dll
   Function: FUN_637f8600
   Address: 637f8600
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_637f8600(void *this,int param_1,int *param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  uint *puVar3;
  int iVar4;
  int *piVar5;
  uint *puVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  uint local_44;
  uint local_40;
  uint local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  uint local_28;
  uint *local_24;
  uint *local_20;
  int local_1c;
  int local_18;
  uint *local_14;
  int local_10;
  int local_c;
  uint *local_8;
  
  iVar9 = -1;
  local_c = 0;
  local_18 = 0;
  local_8 = (uint *)0x0;
  local_28 = **(uint **)((int)this + 0x338);
  local_14 = (uint *)0x0;
  local_1c = 0;
  local_30 = 0;
  local_34 = 0;
  local_10 = 0;
  local_38 = 0;
  local_3c = 0xffffffff;
  if (*(int **)((int)this + 0x33c) != (int *)0x0) {
    iVar9 = **(int **)((int)this + 0x33c);
  }
  local_2c = FUN_637f8470(this,(int)param_2,local_28,&local_44,&local_40);
  if (local_2c != 0) {
    return local_2c;
  }
  switch(param_1) {
  case 1:
    iVar9 = *(int *)((int)this + iVar9 * 4 + 0x2f8);
    if (*(int **)(iVar9 + 0x1c) != (int *)0x0) {
      if (**(int **)(iVar9 + 0x1c) == *param_2) {
        iVar9 = *(int *)(iVar9 + 0x28);
        iVar4 = *(int *)(iVar9 + 0x1c);
        goto joined_r0x637f870c;
      }
LAB_637f870e:
      local_c = iVar9;
    }
    break;
  case 3:
    iVar9 = *(int *)((int)this + iVar9 * 4 + 0x2f8);
    if (*(int *)(iVar9 + 0x1c) != 0) {
      local_18 = iVar9;
    }
    if (local_18 != 0) {
      iVar9 = *(int *)(local_18 + 0x28);
      iVar4 = *(int *)(iVar9 + 0x1c);
joined_r0x637f870c:
      if (iVar4 != 0) goto LAB_637f870e;
    }
    break;
  case 4:
  case 5:
    if (param_1 == 5) {
      iVar4 = *(int *)((int)this + local_28 * 4 + 0x2f8);
      if ((*(int **)(iVar4 + 0x1c) != (int *)0x0) &&
         ((**(int **)(iVar4 + 0x1c) != *param_2 ||
          (iVar4 = *(int *)(iVar4 + 0x28), *(int *)(iVar4 + 0x1c) != 0)))) {
        local_c = iVar4;
      }
    }
    iVar9 = *(int *)((int)this + iVar9 * 4 + 0x2f8);
    piVar8 = *(int **)(iVar9 + 0x1c);
    if ((piVar8 != (int *)0x0) && (*piVar8 == *param_2)) {
      local_18 = iVar9;
    }
  }
  if (local_c == 0) {
    local_20 = (uint *)0x0;
  }
  else {
    local_20 = *(uint **)(local_c + 0x1c);
  }
  if (local_18 == 0) {
    local_24 = (uint *)0x0;
  }
  else {
    local_24 = *(uint **)(local_18 + 0x1c);
  }
  puVar6 = *(uint **)((int)this + 0x2e4);
  piVar8 = param_2;
  if (puVar6 == (uint *)0x0) {
    local_1c = 1;
    puVar6 = local_8;
  }
  else if (param_1 == 3) {
    if ((local_20 == (uint *)0x0) || (local_24 == (uint *)0x0)) {
      local_10 = 1;
      puVar6 = local_8;
    }
    else {
      if (*(int *)((int)this + 0x34c) == 0) {
        piVar8 = (int *)*param_2;
      }
      else {
        piVar8 = (int *)(((uint)*(byte *)((int)param_2 + 0x92) + *local_20) %
                        *(uint *)(*(int *)((int)this + 4) + 0x468));
      }
      piVar2 = (int *)*local_20;
      puVar6 = local_20;
      do {
        puVar3 = puVar6;
        local_8 = puVar3;
        if (puVar3 == local_24) goto LAB_637f8800;
        local_8 = (uint *)puVar3[5];
        piVar1 = (int *)*local_8;
        piVar5 = piVar8;
        if (piVar8 < piVar2) {
          piVar5 = (int *)(*(int *)(*(int *)((int)this + 4) + 0x468) + (int)piVar8);
        }
        piVar7 = piVar1;
        if (piVar1 < piVar2) {
          piVar7 = (int *)((int)piVar1 + *(int *)(*(int *)((int)this + 4) + 0x468));
        }
        if (piVar5 == piVar7) {
          local_30 = 1;
          local_14 = (uint *)0x0;
          goto LAB_637f8800;
        }
        piVar2 = piVar1;
        puVar6 = local_8;
        local_14 = local_8;
      } while (piVar7 <= piVar5);
      local_34 = 1;
      local_8 = puVar3;
LAB_637f8800:
      if (local_30 == 0) {
        if (local_34 == 0) goto LAB_637f881a;
        local_1c = 1;
        for (puVar6 = local_14; puVar6 != (uint *)0x0; puVar6 = (uint *)puVar6[5]) {
          if ((puVar6[2] != 0) || ((puVar6[1] != 0 && (*(int *)(puVar6[1] + 8) == 3)))) {
            local_10 = 1;
            local_1c = 0;
            break;
          }
        }
      }
      else if (local_8[2] != 0) {
LAB_637f881a:
        local_10 = 1;
      }
      puVar6 = local_8;
      if (((local_10 == 0) && (local_18 != *(int *)(*(int *)(local_18 + 0x1c) + 0xc))) &&
         (local_c != *(int *)(*(int *)(local_c + 0x1c) + 0xc))) {
        local_10 = 1;
      }
    }
  }
  else if (*puVar6 != *param_2) {
    local_1c = 1;
    puVar6 = local_8;
  }
  local_8 = puVar6;
  uVar10 = -(uint)(param_1 != 3) & local_28;
  local_2c = FUN_637f82a0(this,uVar10,local_44,local_40);
  if (param_1 == 3) {
    *(undefined4 *)(*(int *)((int)this + 0x338) + 0xf0) =
         *(undefined4 *)(*(int *)((int)this + 0x340) + 0xf0);
    *(undefined4 *)(*(int *)((int)this + 0x338) + 0xf4) =
         *(undefined4 *)(*(int *)((int)this + 0x340) + 0xf4);
    *(undefined4 *)(*(int *)((int)this + 0x338) + 0xf8) =
         *(undefined4 *)(*(int *)((int)this + 0x340) + 0xf8);
    *(undefined4 *)(*(int *)((int)this + 0x338) + 0xfc) =
         *(undefined4 *)(*(int *)((int)this + 0x340) + 0xfc);
    *(undefined4 *)(*(int *)((int)this + 0x338) + 0x100) =
         *(undefined4 *)(*(int *)((int)this + 0x340) + 0x100);
  }
  if (local_2c != 0) {
    return local_2c;
  }
  if (local_10 != 0) {
    *(undefined4 *)(*(int *)((int)this + 4) + 0x3a4) = 1;
    return 0;
  }
  if (local_1c == 0) {
    *(uint **)((int)this + 0x2ec) = local_8;
  }
  else {
    puVar6 = (uint *)FUN_637fa0f0((int)this);
    *(uint **)((int)this + 0x2ec) = puVar6;
    if ((*(int *)((int)this + 0x34c) == 0) || (param_1 != 3)) {
      *puVar6 = *param_2;
      *(undefined4 *)(*(int *)((int)this + 0x2ec) + 4) = 0;
    }
    else {
      *puVar6 = (uint)piVar8;
      *(undefined4 *)(*(int *)((int)this + 0x2ec) + 4) = 0;
    }
  }
  if (local_14 == (uint *)0x0) {
    if (local_8 == (uint *)0x0) {
      if (*(int *)((int)this + 0x2e4) != 0) {
        *(undefined4 *)(*(int *)((int)this + 0x2e4) + 0x14) = *(undefined4 *)((int)this + 0x2ec);
        *(undefined4 *)(*(int *)((int)this + 0x2ec) + 0x10) = *(undefined4 *)((int)this + 0x2e4);
      }
      *(undefined4 *)((int)this + 0x2e4) = *(undefined4 *)((int)this + 0x2ec);
      *(undefined4 *)((int)this + 0x360) = param_3;
    }
  }
  else {
    *(uint **)(*(int *)((int)this + 0x2ec) + 0x14) = local_14;
    local_14[4] = *(uint *)((int)this + 0x2ec);
    local_8[5] = *(uint *)((int)this + 0x2ec);
    *(uint **)(*(int *)((int)this + 0x2ec) + 0x10) = local_8;
  }
  *(uint **)((int)this + 0x2f0) = local_20;
  *(uint **)((int)this + 0x2f4) = local_24;
  for (puVar6 = *(uint **)(*(int *)((int)this + 0x2ec) + 4); puVar6 != (uint *)0x0;
      puVar6 = (uint *)puVar6[8]) {
    if (*puVar6 == uVar10) {
      local_38 = 1;
      break;
    }
  }
  if (local_38 == 0) {
    *(int *)((int)this + uVar10 * 4 + 0x308) =
         (*(int *)((int)this + uVar10 * 4 + 0x308) + 1) % *(int *)((int)this + uVar10 * 4 + 0x300);
    iVar9 = *(int *)(*(int *)((int)this + uVar10 * 4 + 0x2f8) + 0x2c);
    *(int *)((int)this + uVar10 * 4 + 0x2f8) = iVar9;
    *(int *)((int)this + 0x310) = iVar9;
    *(undefined4 *)(iVar9 + 0xc) = *(undefined4 *)(*(int *)((int)this + 0x338) + 0xf0);
    *(undefined4 *)(*(int *)((int)this + 0x310) + 0x10) =
         *(undefined4 *)(*(int *)((int)this + 0x338) + 0xf4);
    if (param_1 == 3) {
      *(undefined4 *)(*(int *)((int)this + 0x310) + 0x20) =
           *(undefined4 *)(*(int *)((int)this + 0x2ec) + 4);
      *(undefined4 *)(*(int *)((int)this + 0x310) + 0x24) = 0;
      iVar9 = *(int *)((int)this + 0x2ec);
    }
    else {
      *(undefined4 *)(*(int *)((int)this + 0x310) + 0x20) = 0;
      iVar9 = *(int *)(*(int *)((int)this + 0x2ec) + 0xc);
      if (iVar9 != 0) {
        *(undefined4 *)(iVar9 + 0x20) = *(undefined4 *)((int)this + 0x310);
      }
      *(undefined4 *)(*(int *)((int)this + 0x310) + 0x24) =
           *(undefined4 *)(*(int *)((int)this + 0x2ec) + 0xc);
      *(undefined4 *)(*(int *)((int)this + 0x2ec) + 0xc) = *(undefined4 *)((int)this + 0x310);
      iVar9 = *(int *)((int)this + 0x2ec);
      if (*(int *)(iVar9 + 4) != 0) goto LAB_637f8b1a;
    }
    *(undefined4 *)(iVar9 + 4) = *(undefined4 *)((int)this + 0x310);
  }
  else {
    *(uint **)((int)this + 0x310) = puVar6;
    *(undefined4 *)((int)this + 0x35c) = 1;
  }
LAB_637f8b1a:
  **(uint **)((int)this + 0x310) = local_28;
  *(int *)(*(int *)((int)this + 0x310) + 8) = param_1;
  *(undefined4 *)(*(int *)((int)this + 0x310) + 0x18) = 0;
  *(undefined4 *)(*(int *)((int)this + 0x310) + 0x14) = 0;
  *(undefined4 *)(*(int *)((int)this + 0x310) + 0x1c) = *(undefined4 *)((int)this + 0x2ec);
  switch(param_1) {
  case 0:
  case 1:
    local_28 = **(uint **)((int)this + 0x33c);
    break;
  default:
    local_28 = 0xffffffff;
    break;
  case 3:
    local_28 = **(uint **)((int)this + 0x33c);
    local_3c = local_28;
    break;
  case 4:
    local_3c = **(uint **)((int)this + 0x33c);
    break;
  case 5:
    local_3c = **(uint **)((int)this + 0x33c);
  }
  *(undefined4 *)((int)this + 0x314) = 0;
  *(undefined4 *)((int)this + 0x318) = 0;
  if (*(int *)((int)this + 0x2f0) != 0) {
    uVar10 = *(uint *)(*(int *)((int)this + 0x2f0) + 4);
    *(uint *)((int)this + 0x314) = uVar10;
    while ((uVar10 != 0 && (**(uint **)((int)this + 0x314) != local_28))) {
      uVar10 = (*(uint **)((int)this + 0x314))[8];
      *(uint *)((int)this + 0x314) = uVar10;
    }
  }
  if (*(int *)((int)this + 0x2f4) != 0) {
    uVar10 = *(uint *)(*(int *)((int)this + 0x2f4) + 4);
    *(uint *)((int)this + 0x318) = uVar10;
    while ((uVar10 != 0 && (**(uint **)((int)this + 0x318) != local_3c))) {
      uVar10 = (*(uint **)((int)this + 0x318))[8];
      *(uint *)((int)this + 0x318) = uVar10;
    }
  }
  return local_2c;
}


