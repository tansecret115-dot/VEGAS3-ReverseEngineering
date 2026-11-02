/* Module: erv23260.dll
   Function: FUN_6380df40
   Address: 6380df40
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_6380df40(void *this,int *param_1,byte *param_2,int *param_3)

{
  uint *puVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  uint *puVar7;
  int iVar8;
  byte *pbVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined4 local_a4 [6];
  undefined4 local_8c;
  int local_78;
  int local_74;
  byte *local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  int local_44;
  byte *local_40;
  int *local_3c;
  int local_38;
  int *local_34;
  int local_30;
  byte *local_2c;
  int *local_28;
  byte *local_24;
  int *local_20;
  byte *local_1c;
  int *local_18;
  int local_14;
  int local_10;
  undefined4 *local_c;
  uint *local_8;
  
  *param_3 = 0;
  puVar1 = (uint *)(*(int *)((int)this + 8) +
                   (*param_1 * *(int *)((int)this + 0x124) + param_1[1]) * 0x7c);
  uVar4 = 0;
  if (param_1[2] != 1) {
    puVar7 = puVar1 + 0x1e;
    do {
      uVar4 = uVar4 + 1;
      *puVar7 = (uint)(puVar7 + 1);
      puVar7 = puVar7 + 0x1f;
    } while (uVar4 < param_1[2] - 1U);
  }
  puVar1[uVar4 * 0x1f + 0x1e] = 0;
  iVar5 = *param_1 * *(int *)((int)this + 0x124) + param_1[1];
  *(int *)((int)this + 0x120) = iVar5;
  local_28 = (int *)(*(int *)(*(int *)((int)this + 0x18) + 0x14) + iVar5 * 0x30);
  if ((*(int *)((int)this + 0x3c) == 1) ||
     ((uint)(*(int *)((int)this + 300) * 0x1a) < *(uint *)((int)this + 0x40))) {
    *(undefined4 *)((int)this + 0x30) = 0;
    *(undefined4 *)((int)this + 0x34) = 0x7fffffff;
    *(undefined4 *)((int)this + 0x38) = 0;
    *(undefined4 *)((int)this + 0x40) = 0;
  }
  local_10 = 0;
  iVar5 = local_10;
  do {
    if (puVar1 == (uint *)0x0) {
      return;
    }
    local_3c = (int *)0x7fffffff;
    local_18 = (int *)0x7fffffff;
    local_20 = (int *)0x7fffffff;
    local_34 = (int *)0x7fffffff;
    param_1 = (int *)0x7fffffff;
    if (*(int *)((int)this + 0x25c) == 0) {
      bVar3 = *param_2;
    }
    else {
      bVar3 = *(byte *)(*(int *)((int)this + 600) + iVar5 + *(int *)((int)this + 0x120));
    }
    *(byte *)(puVar1 + 0x1b) = bVar3;
    local_10 = iVar5;
    local_8 = puVar1;
    FUN_6380e950(this,(int)puVar1,&local_78,0);
    *(undefined4 *)(*(int *)((int)this + 0x248) + iVar5 * 4) = 0;
    local_38 = 0;
    if (*(int *)((int)this + 0x158) == 0) {
      piVar6 = (int *)FUN_6380f110((int *)puVar1,*(int *)((int)this + 200));
      local_34 = piVar6;
    }
    else {
      FUN_638157c0(*(undefined4 **)((int)this + 0xe0),*(int *)(*(int *)((int)this + 200) + 4),
                   *puVar1,puVar1[1],0x10,0x10,0x10,*(int *)(*(int *)((int)this + 200) + 0x10));
      if (*(int *)((int)this + 0x158) == 3) {
        FUN_63816260(this,(int *)puVar1,*(undefined4 *)(*(int *)((int)this + 200) + 4),
                     *(int *)(*(int *)((int)this + 0xcc) + 4),
                     *(int *)(*(int *)((int)this + 0xd0) + 4),
                     *(int *)(*(int *)((int)this + 200) + 0x10),(int)param_2,local_28,
                     (uint *)&local_3c);
        param_1 = local_3c;
        if ((int)local_3c < *(int *)((int)this + 0x30)) {
          *(undefined4 *)(*(int *)((int)this + 0x248) + iVar5 * 4) = 1;
        }
      }
      if (((*(int *)((int)this + 0x158) == 4) || (*(int *)(param_2 + 0xc) == 0)) ||
         (*(int *)(*(int *)((int)this + 0x248) + iVar5 * 4) != 0)) {
        local_54 = 0;
        local_50 = 0;
      }
      else {
        FUN_63814600(this,(byte *)puVar1,*(undefined4 *)(*(int *)((int)this + 200) + 4),
                     *(byte **)(*(int *)((int)this + 0xcc) + 4),
                     *(byte **)(*(int *)((int)this + 200) + 0x10),&local_78,(int)param_2,&local_54,
                     &local_20,&local_38,(int *)(*(int *)((int)this + 0x248) + iVar5 * 4));
      }
      if ((int)local_20 < (int)param_1) {
        param_1 = local_20;
      }
      if ((int)param_1 < *(int *)((int)this + 0x30)) {
        *(undefined4 *)(*(int *)((int)this + 0x248) + iVar5 * 4) = 1;
      }
      iVar12 = *(int *)((int)this + 0x158);
      if ((((iVar12 == 3) || (iVar12 == 4)) || (iVar12 == 5)) &&
         ((*(int *)(param_2 + 0x10) != 0 &&
          (iVar10 = *(int *)((int)this + 0x248), *(int *)(iVar10 + iVar5 * 4) == 0)))) {
        pbVar9 = param_2;
        puVar11 = local_a4;
        for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar11 = *(undefined4 *)pbVar9;
          pbVar9 = pbVar9 + 4;
          puVar11 = puVar11 + 1;
        }
        if (iVar12 != 3) {
          local_8c = 4;
        }
        FUN_63814600(this,(byte *)local_8,*(undefined4 *)(*(int *)((int)this + 200) + 4),
                     *(byte **)(*(int *)((int)this + 0xd0) + 4),
                     *(byte **)(*(int *)((int)this + 200) + 0x10),&local_78,(int)local_a4,&local_4c,
                     &local_18,&local_38,(int *)(iVar10 + iVar5 * 4));
        if ((int)local_18 < (int)local_20) {
          param_1 = local_18;
        }
      }
      else {
        local_4c = 0;
        local_48 = 0;
      }
      if ((int)param_1 < *(int *)((int)this + 0x30)) {
        *(undefined4 *)(*(int *)((int)this + 0x248) + local_10 * 4) = 1;
      }
      local_c = (undefined4 *)(*(int *)((int)this + 0x248) + local_10 * 4);
      if (*(int *)(*(int *)((int)this + 0x248) + local_10 * 4) == 0) goto LAB_6380e40d;
      iVar5 = (int)*local_8 >> 1;
      iVar12 = (int)local_8[1] >> 1;
      if (param_1 == local_18) {
        iVar10 = *(int *)((int)this + 0xd0);
      }
      else {
        iVar10 = *(int *)((int)this + 0xcc);
      }
      local_24 = *(byte **)(iVar10 + 0x10);
      local_14 = *(int *)(iVar10 + 8);
      local_44 = iVar12 * (int)local_24;
      local_1c = (byte *)(local_14 + iVar5 + local_44);
      local_30 = *(int *)(*(int *)((int)this + 200) + 0x10);
      local_2c = *(byte **)(*(int *)((int)this + 200) + 8);
      local_40 = (byte *)(iVar12 * local_30);
      local_58 = local_2c + iVar5 + (int)local_40;
      iVar10 = (uint)*local_58 - (uint)*local_1c;
      if (iVar10 < 0) {
        iVar10 = -iVar10;
      }
      if (iVar10 < 0x19) {
        iVar10 = (int)local_24 * (iVar12 + 7);
        local_30 = (iVar12 + 7) * local_30;
        local_24 = (byte *)(local_14 + iVar5 + iVar10);
        local_2c = local_2c + iVar5 + local_30;
        iVar12 = (uint)local_2c[7] - (uint)local_24[7];
        if (iVar12 < 0) {
          iVar12 = -iVar12;
        }
        if (0x18 < iVar12) goto LAB_6380e404;
        iVar12 = (uint)local_58[7] - (uint)local_1c[7];
        if (iVar12 < 0) {
          iVar12 = -iVar12;
        }
        if (0x18 < iVar12) goto LAB_6380e404;
        iVar12 = (uint)*local_2c - (uint)*local_24;
        if (iVar12 < 0) {
          iVar12 = -iVar12;
        }
        if (0x18 < iVar12) goto LAB_6380e404;
        if (param_1 == local_18) {
          iVar12 = *(int *)((int)this + 0xd0);
        }
        else {
          iVar12 = *(int *)((int)this + 0xcc);
        }
        local_14 = *(int *)(iVar12 + 0xc);
        local_1c = (byte *)(local_14 + iVar5 + local_44);
        local_44 = *(int *)(*(int *)((int)this + 200) + 0xc);
        local_40 = local_40 + local_44 + iVar5;
        iVar12 = (uint)*local_40 - (uint)*local_1c;
        if (iVar12 < 0) {
          iVar12 = -iVar12;
        }
        if (0x18 < iVar12) goto LAB_6380e404;
        pbVar9 = (byte *)(local_14 + iVar5 + iVar10);
        pbVar2 = (byte *)(iVar5 + local_44 + local_30);
        iVar5 = (uint)pbVar2[7] - (uint)pbVar9[7];
        if (iVar5 < 0) {
          iVar5 = -iVar5;
        }
        if (iVar5 < 0x19) {
          iVar5 = (uint)local_40[7] - (uint)local_1c[7];
          if (iVar5 < 0) {
            iVar5 = -iVar5;
          }
          if (iVar5 < 0x19) {
            iVar5 = (uint)*pbVar2 - (uint)*pbVar9;
            if (iVar5 < 0) {
              iVar5 = -iVar5;
            }
            if (iVar5 < 0x19) goto LAB_6380e40d;
          }
          goto LAB_6380e404;
        }
        *local_c = 0;
      }
      else {
LAB_6380e404:
        *local_c = 0;
      }
LAB_6380e40d:
      piVar6 = local_34;
      if (*(int *)(*(int *)((int)this + 0x248) + local_10 * 4) == 0) {
        piVar6 = (int *)FUN_6380f110((int *)local_8,*(int *)((int)this + 200));
      }
    }
    puVar1 = local_8;
    if (*(int *)((int)this + 0x158) == 0) {
      local_8[0x16] = 0;
      param_1 = piVar6;
    }
    else {
      piVar6 = FUN_6380f1a0(this,(int)local_8,(int)piVar6,(int)local_18,(int)local_20,(int)local_3c,
                            local_38,(int *)&param_1);
      puVar1[0x16] = (uint)piVar6;
    }
    switch(puVar1[0x16]) {
    case 0:
      iVar5 = 6;
      *(int *)((int)this + 0x250) = *(int *)((int)this + 0x250) + 1;
      puVar7 = puVar1 + 3;
      do {
        puVar7[-1] = 0;
        *puVar7 = 0;
        puVar7 = puVar7 + 2;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      break;
    case 2:
    case 6:
      iVar5 = 4;
      *(int *)((int)this + 0x40) = *(int *)((int)this + 0x40) + 1;
      puVar7 = puVar1;
      do {
        puVar7[2] = local_54;
        puVar7[3] = local_50;
        iVar5 = iVar5 + -1;
        puVar7 = puVar7 + 2;
      } while (iVar5 != 0);
      break;
    case 4:
      *(int *)((int)this + 0x40) = *(int *)((int)this + 0x40) + 1;
      break;
    case 7:
    case 10:
      iVar5 = 4;
      *(int *)((int)this + 0x40) = *(int *)((int)this + 0x40) + 1;
      puVar7 = puVar1;
      do {
        puVar7[2] = local_4c;
        puVar7[3] = local_48;
        iVar5 = iVar5 + -1;
        puVar7 = puVar7 + 2;
      } while (iVar5 != 0);
      break;
    case 9:
      puVar7 = puVar1 + 3;
      iVar5 = 6;
      do {
        puVar7[-1] = 0;
        *puVar7 = 0;
        puVar7 = puVar7 + 2;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    puVar1[0xe] = puVar1[2] - local_78;
    puVar1[0xf] = puVar1[3] - local_74;
    *(int **)(*(int *)((int)this + 0x24c) + local_10 * 4) = param_1;
    puVar1 = (uint *)puVar1[0x1e];
    iVar5 = local_10 + 1;
    local_28 = local_28 + 0xc;
    *param_3 = *param_3 + (int)param_1;
  } while( true );
}


