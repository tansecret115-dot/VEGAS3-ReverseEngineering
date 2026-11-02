/* Module: mp3plug.dll
   Function: FUN_5f6da1d0
   Address: 5f6da1d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl
FUN_5f6da1d0(int *param_1,int param_2,int param_3,int *param_4,int *param_5,undefined1 *param_6)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 *puVar9;
  int iVar10;
  int iVar11;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  if (*(int *)(param_2 + 0x36a0) == 0) {
    *param_5 = 0;
    return 1;
  }
  iVar7 = 0;
  iVar4 = param_1[9] + param_1[0x28];
  if (0 < param_1[0xb]) {
    do {
      if (0 < param_1[10]) {
        iVar1 = 0;
        uVar2 = param_1[10] * 4;
        uVar3 = uVar2 & 0xfffffff8;
        if (0 < (int)uVar3) {
          do {
            iVar11 = iVar1 + iVar7 * 8;
            iVar10 = iVar1 + 0x44;
            iVar1 = iVar1 + 8;
            iVar4 = iVar4 + *(int *)(param_2 + 0x40 + iVar11) +
                    *(int *)(param_2 + iVar10 + iVar7 * 8);
          } while (iVar1 < (int)uVar3);
        }
        for (; iVar1 < (int)uVar2; iVar1 = iVar1 + 4) {
          iVar4 = iVar4 + *(int *)(param_2 + 0x40 + iVar1 + iVar7 * 8);
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < param_1[0xb]);
  }
  param_1[0x29] = iVar4;
  iVar4 = FUN_5f6e68a0((int)(param_1 + 0x2f),param_1[0x26] - iVar4);
  param_1[0x2a] = iVar4;
  FUN_5f6e6500(param_1[0x44]);
  iVar4 = param_1[0x30];
  uVar2 = param_1[0x20];
  iVar7 = param_1[0xc];
  iVar1 = param_1[0xd];
  iVar11 = param_1[0xe];
  FUN_5f6e79a0(*param_1);
  FUN_5f6e7b50(*param_1,param_1[3],param_1[0x32],(int *)param_1[0x44]);
  if ((*param_1 == 0) && (iVar10 = 0, 0 < param_1[10])) {
    iVar6 = param_2 + 0x2ec8;
    do {
      FUN_5f6e7c00(iVar6,(int *)param_1[0x44]);
      iVar10 = iVar10 + 1;
      iVar6 = iVar6 + 0x494;
    } while (iVar10 < param_1[10]);
  }
  iVar10 = param_1[0xb];
  local_30 = 0;
  if (0 < iVar10) {
    iVar6 = param_1[10];
    iVar5 = 0;
    do {
      local_2c = 0;
      if (0 < iVar6) {
        iVar8 = 0;
        iVar10 = iVar5 + 0x2450;
        do {
          iVar6 = iVar8 + local_30 * 8;
          FUN_5f6e7c50(*param_1,*(uint *)((int)param_1 + iVar6 + 0x40),iVar10 + param_2,
                       *(uint *)(param_2 + 0x40 + iVar6),(int *)param_1[0x44],iVar4,uVar2,iVar7,
                       iVar1,iVar11);
          iVar10 = iVar10 + 0x494;
          local_2c = local_2c + 1;
          iVar8 = iVar8 + 4;
          iVar6 = param_1[10];
        } while (local_2c < iVar6);
        iVar10 = param_1[0xb];
      }
      iVar5 = iVar5 + 0x928;
      local_30 = local_30 + 1;
    } while (local_30 < iVar10);
  }
  iVar4 = FUN_5f6e5e80(param_1[0x44],0);
  iVar7 = FUN_5f6e5ec0(param_1[0x44],0);
  FUN_5f6e5e80(param_1[0x44],iVar7 - (param_1[6] + param_1[8] + param_1[5] + iVar4));
  if (param_1[4] != 0) {
    FUN_5f6e7f90(param_1[5],param_1[6],param_1[8],(int *)param_1[0x44]);
  }
  FUN_5f6e5e80(param_1[0x44],(param_1[6] + param_1[8] + param_1[5] + iVar4) - iVar7);
  FUN_5f6e6500(param_1[0x44]);
  FUN_5f6e6500(param_1[0x45]);
  iVar7 = 0;
  iVar4 = param_1[0xb];
  if (0 < iVar4) {
    local_30 = 0;
    local_2c = 0;
    iVar1 = param_1[10];
    do {
      local_28 = 0;
      if (0 < iVar1) {
        iVar11 = local_2c + 0x2450;
        iVar4 = local_30 + 0x50;
        do {
          FUN_5f6e8070(iVar11 + param_2,iVar4 + param_2,(int *)param_1[0x45]);
          iVar4 = iVar4 + 0x900;
          local_28 = local_28 + 1;
          iVar11 = iVar11 + 0x494;
          iVar1 = param_1[10];
        } while (local_28 < iVar1);
        iVar4 = param_1[0xb];
      }
      local_2c = local_2c + 0x928;
      local_30 = local_30 + 0x1200;
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar4);
  }
  iVar4 = param_1[0x2a];
  local_2c = 0;
  if (7 < iVar4) {
    iVar7 = *param_4;
    iVar1 = (int)(((uint)(iVar4 >> 2) >> 0x1d) + iVar4) >> 3;
    if ((_DAT_5f75cb18 < ABS((double)(iVar7 - iVar1))) && (0 < iVar7)) {
      local_24 = iVar7;
      if (iVar1 < iVar7) {
        local_24 = iVar1;
      }
      iVar7 = iVar4 + iVar7 * -8;
      iVar4 = iVar4 + iVar1 * -8;
      if (iVar7 < iVar4) {
        iVar7 = iVar4;
      }
      iVar4 = 0;
      while( true ) {
        iVar1 = iVar7;
        if (7 < iVar7) {
          iVar1 = iVar7 - (((uint)(iVar7 >> 2) >> 0x1d) + iVar7 & 0xfffffff8);
        }
        if (iVar1 <= iVar4) break;
        FUN_5f6e62d0((int *)param_1[0x45],0,1);
        iVar4 = iVar4 + 1;
      }
      iVar4 = 0;
      if (0 < local_24) {
        do {
          FUN_5f6e62d0((int *)param_1[0x45],(uint)*(byte *)(param_3 + iVar4),8);
          iVar1 = *param_4;
          *param_4 = iVar1 + -1;
          if (iVar1 + -1 == 0) {
            iVar4 = 0;
            if (0 < param_1[0x28]) {
              do {
                FUN_5f6e62d0((int *)param_1[0x45],0,1);
                iVar4 = iVar4 + 1;
              } while (iVar4 < param_1[0x28]);
            }
            break;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < local_24);
      }
      if (0 < iVar4) {
        local_2c = iVar4;
      }
      if ((7 < iVar7) && (uVar2 = ((uint)(iVar7 >> 2) >> 0x1d) + iVar7 & 0xfffffff8, 0 < (int)uVar2)
         ) {
        iVar4 = 0;
        do {
          FUN_5f6e62d0((int *)param_1[0x45],0,1);
          iVar4 = iVar4 + 1;
        } while (iVar4 < (int)uVar2);
      }
      goto LAB_5f6da6a0;
    }
  }
  iVar7 = 0;
  if (0 < iVar4) {
    do {
      FUN_5f6e62d0((int *)param_1[0x45],0,1);
      iVar7 = iVar7 + 1;
    } while (iVar7 < param_1[0x2a]);
  }
LAB_5f6da6a0:
  iVar4 = 0;
  if (*param_4 != 0) {
    iVar4 = (int)(param_1[0x28] + ((uint)(param_1[0x28] >> 2) >> 0x1d)) >> 3;
    if (0 < iVar4) {
      iVar7 = 0;
      do {
        FUN_5f6e62d0((int *)param_1[0x45],(uint)*(byte *)(local_2c + param_3),8);
        iVar7 = iVar7 + 1;
        local_2c = local_2c + 1;
        iVar4 = (int)(param_1[0x28] + ((uint)(param_1[0x28] >> 2) >> 0x1d)) >> 3;
      } while (iVar7 < iVar4);
    }
    iVar4 = *param_4 - iVar4;
    *param_4 = iVar4;
  }
  if (iVar4 < 1) {
    *param_4 = 0;
  }
  iVar4 = 0;
  if (0 < param_1[9]) {
    do {
      FUN_5f6e62d0((int *)param_1[0x45],0,1);
      iVar4 = iVar4 + 1;
    } while (iVar4 < param_1[9]);
  }
  FUN_5f6e6500(param_1[0x45]);
  FUN_5f6e6d80((int)(param_1 + 0x47),param_1[7],param_1[0x25] - param_1[7]);
  iVar4 = FUN_5f6e6dd0((int)(param_1 + 0x47),param_1[0x46]);
  iVar4 = (int)(iVar4 + ((uint)(iVar4 >> 2) >> 0x1d)) >> 3;
  if (0 < iVar4) {
    puVar9 = param_6 + iVar4;
    do {
      uVar2 = FUN_5f6e5f50((int *)param_1[0x46],8);
      *param_6 = (char)uVar2;
      param_6 = param_6 + 1;
    } while ((int)param_6 < (int)puVar9);
  }
  *param_5 = iVar4;
  return 1;
}


