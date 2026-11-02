/* Module: rmme3260.dll
   Function: FUN_6620dbb0
   Address: 6620dbb0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x6620dd6c) */

int __thiscall FUN_6620dbb0(void *this,uint *param_1,undefined4 *param_2,uint *param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  uint *puVar6;
  undefined1 *puVar7;
  int *piVar8;
  uint uVar9;
  uint *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  uint *puVar13;
  undefined1 local_22;
  undefined1 uStack_21;
  undefined1 local_20;
  undefined1 uStack_1f;
  undefined1 local_1e;
  undefined1 local_1a;
  undefined1 uStack_19;
  int local_18;
  int local_14;
  int local_10;
  uint uStack_8;
  
  puVar13 = param_1;
  uStack_8 = *param_1;
  local_18 = 0;
  local_14 = -1;
  local_10 = 0;
  if ((*(int *)((int)this + 0xce) != 0) && ((short)param_1[1] == *(short *)((int)this + 0xcc))) {
    if (*(uint *)((int)this + 200) != uStack_8) {
      *(undefined4 *)((int)this + 0xc4) = 0;
      *(uint *)((int)this + 200) = *param_1;
    }
    *(int *)((int)this + 0xc4) = *(int *)((int)this + 0xc4) + (int)param_3;
    iVar4 = ftol();
    uStack_8 = uStack_8 + iVar4;
  }
  if (((*(int *)((int)this + 0xd4) != 0) && ((short)puVar13[1] == *(short *)((int)this + 0xd2))) &&
     (param_2 != (undefined4 *)0x0)) {
    uStack_8 = FUN_662647b0(param_2[2]);
  }
  iVar4 = 0;
  *(undefined4 *)((int)this + 0x94) = 2;
  puVar10 = puVar13;
  if (*(ushort *)((int)this + 0x6e) != 0) {
    piVar8 = (int *)**(undefined4 **)((int)this + 0x6a);
    do {
      local_10 = *piVar8;
      puVar10 = param_1;
      if ((short)puVar13[1] == *(short *)(local_10 + 0x1a)) {
        local_14 = iVar4;
        if (*(int *)(local_10 + 0x28) != 0) {
          *(byte *)(param_1 + 2) = (byte)param_1[2] | 2;
          *(undefined4 *)(local_10 + 0x28) = 0;
        }
        break;
      }
      iVar4 = iVar4 + 1;
      piVar8 = piVar8 + 1;
    } while (iVar4 < (int)(uint)*(ushort *)((int)this + 0x6e));
  }
  if (local_14 < 0) {
    return -0x7ffbff7e;
  }
  if (*(int *)(local_10 + 0x2c) != 0) {
    return 0;
  }
  if (((puVar10[2] & 4) == 4) &&
     ((*(undefined4 *)(local_10 + 0x2c) = 1, param_2 == (undefined4 *)0x0 ||
      (param_3 == (uint *)0x0)))) {
    if (param_4 == 0) {
      if (*(uint *)(local_10 + 8) < uStack_8) {
        *(uint *)(local_10 + 8) = uStack_8;
      }
      if (*(uint *)((int)this + 0x3e) < uStack_8) {
        *(uint *)((int)this + 0x3e) = uStack_8;
      }
    }
    return 0;
  }
  if (((puVar10[2] & 2) == 2) && (*(int *)((int)this + 0xa8) == 1)) {
    iVar4 = *(int *)this;
    uVar5 = (**(code **)(iVar4 + 0x3c))(*(undefined4 *)((int)this + 0x2e),0);
    local_18 = (**(code **)(iVar4 + 0x68))(puVar10,uVar5);
  }
  if (local_18 != 0) {
    *(int *)((int)this + 0x24) = local_18;
    return local_18;
  }
  puVar6 = param_3 + 3;
  puVar7 = operator_new((uint)puVar6);
  puVar13 = param_3;
  if (puVar7 == (undefined1 *)0x0) {
    *(undefined4 *)((int)this + 0x24) = 0x8007000e;
    return -0x7ff8fff2;
  }
  uVar1 = puVar10[1];
  uVar9 = *puVar10;
  sVar3 = (short)param_3 + 0xc;
  uVar2 = puVar10[2];
  *puVar7 = 0;
  puVar7[1] = 0;
  uStack_21 = (undefined1)((ushort)sVar3 >> 8);
  puVar7[2] = uStack_21;
  local_22 = (undefined1)sVar3;
  puVar7[3] = local_22;
  uStack_1f = (undefined1)((ushort)(short)uVar1 >> 8);
  puVar7[4] = uStack_1f;
  local_20 = (undefined1)(short)uVar1;
  puVar7[5] = local_20;
  puVar7[6] = (char)(uVar9 >> 0x18);
  puVar7[7] = (char)(uVar9 >> 0x10);
  puVar7[8] = (char)(uVar9 >> 8);
  local_1e = (undefined1)uVar9;
  puVar7[9] = local_1e;
  uStack_19 = (undefined1)((ushort)(short)uVar2 >> 8);
  puVar7[10] = uStack_19;
  local_1a = (undefined1)(short)uVar2;
  puVar7[0xb] = local_1a;
  puVar11 = param_2;
  puVar12 = (undefined4 *)(puVar7 + 0xc);
  for (uVar9 = (uint)param_3 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *puVar12 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar12 = puVar12 + 1;
  }
  for (uVar9 = (uint)param_3 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined1 *)puVar12 = *(undefined1 *)puVar11;
    puVar11 = (undefined4 *)((int)puVar11 + 1);
    puVar12 = (undefined4 *)((int)puVar12 + 1);
  }
  if ((*(int *)((int)this + 0xbc) == 0) || (param_3 == (uint *)0x0)) {
    iVar4 = (**(code **)(*(int *)this + 0x38))(puVar7,puVar6);
  }
  else {
    param_2 = (undefined4 *)0x0;
    FUN_6620e4a0(this,puVar7,puVar6,(byte)param_1[2] & 2,&param_2,&param_1);
    param_3 = param_1 + -3;
    iVar4 = (**(code **)(*(int *)this + 0x38))(param_2,param_1);
    puVar13 = param_3;
    if (param_2 != (undefined4 *)0x0) {
      operator_delete(param_2);
      puVar13 = param_3;
    }
  }
  operator_delete(puVar7);
  *(int *)((int)this + 0x2e) = *(int *)((int)this + 0x2e) + 1;
  *(int *)((int)this + 0x3a) = *(int *)((int)this + 0x3a) + (int)puVar13;
  if (*(uint **)((int)this + 0x36) < puVar13) {
    *(uint **)((int)this + 0x36) = puVar13;
  }
  if (iVar4 == 0) {
    if (param_4 == 0) {
      if (*(uint *)((int)this + 0x3e) < uStack_8) {
        *(uint *)((int)this + 0x3e) = uStack_8;
      }
      if (*(uint *)(local_10 + 8) < uStack_8) {
        *(uint *)(local_10 + 8) = uStack_8;
      }
    }
    if (*(uint **)(local_10 + 0xc) < puVar13) {
      *(uint **)(local_10 + 0xc) = puVar13;
    }
    *(int *)(local_10 + 4) = *(int *)(local_10 + 4) + (int)puVar13;
    *(int *)(local_10 + 0x14) = *(int *)(local_10 + 0x14) + 1;
  }
  return iVar4;
}


