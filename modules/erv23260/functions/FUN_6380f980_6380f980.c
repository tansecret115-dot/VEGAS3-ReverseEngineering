/* Module: erv23260.dll
   Function: FUN_6380f980
   Address: 6380f980
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_6380f980(void *this,int param_1,byte **param_2,byte *param_3,int param_4,int param_5)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  undefined1 *puVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  byte **ppbVar11;
  byte *pbVar12;
  int *piVar13;
  byte *pbVar14;
  byte *local_40;
  byte *local_3c;
  byte *local_38;
  byte *local_34;
  byte *local_30;
  byte *local_2c;
  byte *local_28;
  byte *local_24;
  undefined1 *local_20;
  byte *local_1c;
  undefined1 *local_18;
  byte *local_14;
  undefined1 *local_10;
  byte *local_c;
  void *local_8;
  
  bVar4 = *(byte *)(param_2 + 0x19);
  local_8 = this;
  if (((bVar4 & 4) != 0) ||
     (bVar7 = false, *(char *)(((int)param_2[1] >> 4) + *(int *)((int)this + 0xc4)) != '\0')) {
    bVar7 = true;
  }
  if (((uint)param_3 & 1) == 0) {
    if ((bVar4 & 1) == 0) {
      if (param_2[-9] == (byte *)0x0) {
        local_40 = param_2[(int)param_3 * 2 + 3];
      }
      else {
        local_40 = param_2[(int)param_3 * 2 + -0x1a];
      }
    }
    else {
      local_40 = param_2[(int)param_3 * 2 + 3];
    }
    local_3c = param_2[(int)param_3 * 2 + 4];
    local_38 = param_2[(int)param_3 * 2 + 5];
  }
  else {
    if ((bVar4 >> 1 & 1) == 0) {
      if (param_2[0x35] == (byte *)0x0) {
        local_3c = param_2[(int)param_3 * 2 + 2];
        local_38 = param_2[(int)param_3 * 2 + 3];
      }
      else {
        local_3c = param_2[(int)param_3 * 2 + 0x1f];
        local_38 = param_2[(int)param_3 * 2 + 0x20];
      }
    }
    else {
      local_3c = param_2[(int)param_3 * 2 + 2];
      local_38 = param_2[(int)param_3 * 2 + 3];
    }
    local_40 = param_2[(int)param_3 * 2 + 1];
  }
  if (param_3 < (byte *)0x2) {
    if (bVar7) {
      local_34 = param_2[(int)param_3 * 2 + 2];
      local_30 = param_2[(int)param_3 * 2 + 3];
    }
    else if (param_2[*(int *)((int)this + 0x124) * -0x1f + 0x16] == (byte *)0x0) {
      local_34 = param_2[(int)param_3 * 2 + 2];
      local_30 = param_2[(int)param_3 * 2 + 3];
    }
    else {
      local_34 = param_2[(int)param_3 * 2 + *(int *)((int)this + 0x124) * -0x1f + 6];
      local_30 = (param_2 + (int)param_3 * 2 + *(int *)((int)this + 0x124) * -0x1f + 6)[1];
    }
    local_2c = param_2[(int)param_3 * 2 + 6];
    local_28 = param_2[(int)param_3 * 2 + 7];
  }
  else {
    local_2c = param_2[(int)param_3 * 2 + 2];
    local_28 = param_2[(int)param_3 * 2 + 3];
    local_34 = param_2[(int)param_3 * 2 + -2];
    local_30 = param_2[(int)param_3 * 2 + -1];
  }
  iVar5 = *(int *)(param_4 + 0x10);
  iVar3 = (int)(param_2[1] + ((uint)param_3 & 2) * 4) * iVar5 + ((uint)param_3 & 1) * 8;
  local_14 = *param_2 + iVar3 + *(int *)(param_4 + 4);
  iVar8 = (int)param_3 * 2;
  iVar9 = (int)param_3 * 2;
  pbVar14 = *param_2 + iVar3 + *(int *)(param_5 + 4);
  param_3 = pbVar14 + ((int)param_2[iVar8 + 2] >> 1) + ((int)param_2[iVar9 + 3] >> 1) * iVar5;
  puVar6 = *(undefined1 **)((int)this + 0x244);
  local_10 = puVar6;
  local_c = pbVar14;
  local_24 = puVar6 + 0x10;
  local_20 = puVar6 + 0x18;
  uVar10 = ((uint)param_2[iVar9 + 3] & 1) << 1 | (uint)param_2[iVar8 + 2] & 1;
  local_1c = puVar6 + 0x20;
  local_18 = puVar6 + 0x28;
  if (uVar10 != 0) {
    (**(code **)((int)this + uVar10 * 4 + 0x234))(iVar5);
    param_3 = puVar6 + 8;
  }
  param_2 = &local_24;
  param_5 = 4;
  ppbVar11 = &local_40;
  do {
    uVar10 = ((uint)*ppbVar11 & 1) << 1 | (uint)ppbVar11[-1] & 1;
    if (uVar10 == 0) {
      *param_2 = pbVar14 + ((int)ppbVar11[-1] >> 1) + ((int)*ppbVar11 >> 1) * iVar5;
    }
    else {
      (**(code **)((int)local_8 + uVar10 * 4 + 0x234))(iVar5);
    }
    puVar6 = local_10;
    ppbVar11 = ppbVar11 + 2;
    param_2 = param_2 + 1;
    param_5 = param_5 + -1;
    pbVar14 = local_c;
  } while (param_5 != 0);
  FUN_63800580(param_3,local_24,(int)local_20,local_1c,(int)local_18,local_10,iVar5);
  pbVar14 = puVar6 + 3;
  pbVar12 = local_14 + 2;
  param_2 = (byte **)0x8;
  piVar13 = (int *)(param_1 + 8);
  do {
    piVar13[-2] = (uint)pbVar12[-2] - (uint)pbVar14[-3];
    piVar13[-1] = (uint)pbVar12[-1] - (uint)pbVar14[-2];
    *piVar13 = (uint)*pbVar12 - (uint)pbVar12[(int)puVar6 - (int)local_14];
    piVar13[1] = (uint)pbVar12[1] - (uint)*pbVar14;
    piVar13[2] = (uint)pbVar12[2] - (uint)pbVar14[1];
    piVar13[3] = (uint)pbVar12[3] - (uint)pbVar14[2];
    piVar13[4] = (uint)pbVar12[4] - (uint)pbVar14[3];
    pbVar1 = pbVar14 + 4;
    pbVar14 = pbVar14 + iVar5;
    pbVar2 = pbVar12 + 5;
    pbVar12 = pbVar12 + iVar5;
    piVar13[5] = (uint)*pbVar2 - (uint)*pbVar1;
    param_2 = (byte **)((int)param_2 + -1);
    piVar13 = piVar13 + 8;
  } while (param_2 != (byte **)0x0);
  return;
}


