/* Module: sftrans1.dll
   Function: FUN_0045ca10
   Address: 0045ca10
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0045ca10(int *param_1,int *param_2,int *param_3,int *param_4)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  int **ppiVar5;
  uint uVar6;
  int iVar7;
  int **ppiVar8;
  int **ppiStack_114;
  int *piStack_10c;
  int local_e4 [8];
  int *local_c4 [4];
  int local_b4 [16];
  undefined4 local_74;
  int local_6c [16];
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 *local_24;
  int local_20;
  undefined1 *local_1c;
  undefined1 *local_18;
  uint local_14;
  LPCRITICAL_SECTION local_10;
  int *local_c;
  uint local_8;
  
  if (param_1 == (int *)0x8) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = param_1 + 3;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(piVar2 + 1);
  local_10 = lpCriticalSection;
  EnterCriticalSection(lpCriticalSection);
  if (param_1[0x28] == 0) {
    LeaveCriticalSection(lpCriticalSection);
    return -0x7785ffff;
  }
  if ((param_1[0x24] == 0) || ((*(byte *)(param_1 + 0x20) & 3) != 0)) {
    if (((param_3 == (int *)0x0) || ((param_1[0x11] & 0x2000000U) != 0)) &&
       ((param_4 == (int *)0x0 || ((param_1[0x11] & 0x4000000U) != 0)))) {
      iVar7 = (**(code **)(param_1[-2] + 0x24))();
      piStack_10c = (int *)0x45ce2f;
      LeaveCriticalSection(lpCriticalSection);
      return iVar7;
    }
    LeaveCriticalSection(lpCriticalSection);
    return -0x7ff8ffa9;
  }
  local_c4[2] = (int *)0x0;
  piVar2 = local_b4;
  for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
    *piVar2 = 0;
    piVar2 = piVar2 + 1;
  }
  local_74 = 0;
  piVar2 = local_6c;
  for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
    *piVar2 = 0;
    piVar2 = piVar2 + 1;
  }
  local_c4[0] = (int *)0x0;
  local_2c = 0;
  local_28 = 0;
  if (((param_3 != (int *)0x0) && (*param_3 != 0)) || ((param_4 != (int *)0x0 && (*param_4 != 0))))
  {
    LeaveCriticalSection(local_10);
    return -0x7ff8ffa9;
  }
  piStack_10c = param_1;
  iVar7 = (**(code **)(*param_1 + 0x20))();
  if (iVar7 != 0) goto LAB_0045cc44;
  ppiStack_114 = (int **)param_1[0x28];
  iVar7 = (*(code *)(*ppiStack_114)[7])();
  if (iVar7 != 0) goto LAB_0045cc44;
  if (param_3 == (int *)0x0) {
LAB_0045cb34:
    piVar2 = local_e4;
    piVar3 = local_b4;
    iVar7 = 4;
    do {
      iVar1 = *piVar3;
      piVar3 = piVar3 + 2;
      *piVar2 = iVar1;
      piVar2 = piVar2 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    if (param_4 != (int *)0x0) {
      ppiStack_114 = (int **)0x45cb6b;
      FUN_0045def0();
    }
    ppiStack_114 = (int **)0x45cb7a;
    FUN_0045df50();
    ppiStack_114 = local_c4 + 2;
    iVar7 = FUN_0045e090();
    if (iVar7 != 0) {
      ppiStack_114 = (int **)0x45cba7;
      FUN_0045df30();
      ppiStack_114 = (int **)0x45cbb6;
      FUN_0045dfc0();
      uVar6 = param_1[0x16];
      local_8 = uVar6;
      if (1 < uVar6) {
        local_8 = ((uint)((local_6c[1] - local_6c[0]) * (local_6c[3] - local_6c[2])) >> 0xc) + 1;
        if ((uint)param_1[0x24] < local_8) {
          local_8 = param_1[0x24];
        }
        if (uVar6 < local_8) {
          local_8 = uVar6;
        }
      }
      piVar2 = param_1 + -2;
      ppiStack_114 = local_c4;
      local_c = piVar2;
      iVar7 = (**(code **)(param_1[-2] + 0x14))();
      uVar6 = local_8;
      if (-1 < iVar7) {
        if ((local_8 == 1) && (param_2 == (int *)0x0)) {
          iVar7 = (**(code **)(*piVar2 + 0x30))(local_c4,&DAT_005744f0);
        }
        else {
          uVar4 = local_b4[3] - local_b4[2];
          FUN_00551640();
          local_18 = (undefined1 *)&ppiStack_114;
          FUN_00551640();
          local_24 = (undefined1 *)&ppiStack_114;
          FUN_00551640();
          local_c4[0] = local_c;
          param_4 = (int *)(uVar4 / uVar6);
          local_1c = (undefined1 *)&ppiStack_114;
          local_28 = 0;
          local_14 = 0;
          local_20 = local_6c[2] - local_b4[2];
          if (uVar6 != 0) {
            ppiVar5 = &piStack_10c;
            piVar2 = (int *)(local_18 + 0x60);
            do {
              ppiVar8 = local_c4;
              piVar3 = piVar2 + -0x18;
              for (iVar7 = 0x28; iVar7 != 0; iVar7 = iVar7 + -1) {
                *piVar3 = (int)*ppiVar8;
                ppiVar8 = ppiVar8 + 1;
                piVar3 = piVar3 + 1;
              }
              piVar2[-0x12] = local_b4[2];
              *piVar2 = local_20 + local_b4[2];
              iVar7 = (int)param_4 + local_b4[2];
              piVar2[-0x11] = iVar7;
              piVar2[1] = local_20 + (int)param_4 + local_b4[2];
              ppiVar5[-2] = (int *)&LAB_0045ddf0;
              ppiVar5[-1] = piVar2 + -0x18;
              *ppiVar5 = (int *)0x0;
              ppiVar5[1] = (int *)0x0;
              ppiVar5[2] = param_2;
              if ((uVar4 - (int)param_4) - iVar7 < param_4) {
                param_4 = (int *)(uVar4 - iVar7);
              }
              local_14 = local_14 + 1;
              piVar2 = piVar2 + 0x28;
              ppiVar5 = ppiVar5 + 5;
              local_b4[2] = iVar7;
              uVar6 = local_8;
            } while (local_14 < local_8);
          }
          param_1[0x1f] = 1;
          iVar7 = (**(code **)(*(int *)param_1[0xe] + 0x20))
                            ((int *)param_1[0xe],local_1c,param_1 + 0x12,local_24,uVar6,
                             param_1[0x21]);
          uVar6 = 0;
          param_1[0x1f] = 0;
          piVar2 = local_c;
          if (-1 < iVar7) {
            for (piVar3 = (int *)(local_18 + 0x9c);
                (uVar6 < local_8 && (iVar7 = *piVar3, iVar7 == 0)); piVar3 = piVar3 + 0x28) {
              uVar6 = uVar6 + 1;
            }
          }
        }
        (**(code **)(*piVar2 + 0x18))(local_c4);
      }
      LeaveCriticalSection(local_10);
      return iVar7;
    }
  }
  else {
    ppiStack_114 = local_c4 + 2;
    iVar7 = FUN_0045e090();
    if (iVar7 != 0) goto LAB_0045cb34;
  }
  iVar7 = 1;
LAB_0045cc44:
  ppiStack_114 = (int **)0x45cc4e;
  LeaveCriticalSection(local_10);
  return iVar7;
}


