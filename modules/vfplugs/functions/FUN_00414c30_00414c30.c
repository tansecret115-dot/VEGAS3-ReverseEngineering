/* Module: vfplugs.dll
   Function: FUN_00414c30
   Address: 00414c30
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00414c30(int *param_1,int *param_2,int *param_3,int *param_4)

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
  int *piStack_10c;
  undefined4 local_ec [2];
  int local_e4 [8];
  int *local_c4 [4];
  int local_b4 [16];
  int local_74 [2];
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
      piStack_10c = (int *)0x41504f;
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
  local_74[0] = 0;
  piVar2 = local_6c;
  for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
    *piVar2 = 0;
    piVar2 = piVar2 + 1;
  }
  local_c4[0] = (int *)0x0;
  local_2c = 0;
  local_28 = 0;
  if (((param_3 == (int *)0x0) || (*param_3 == 0)) && ((param_4 == (int *)0x0 || (*param_4 == 0))))
  {
    piStack_10c = param_1;
    iVar7 = (**(code **)(*param_1 + 0x20))();
    if ((iVar7 == 0) && (iVar7 = (**(code **)(*(int *)param_1[0x28] + 0x1c))(), iVar7 == 0)) {
      if ((param_3 == (int *)0x0) ||
         (iVar7 = FUN_004162b0(local_c4 + 2,(int)(local_c4 + 2),param_3), iVar7 != 0)) {
        local_ec[0] = 0;
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
          FUN_00416110(local_ec,(int)param_4);
        }
        FUN_00416170(local_74,(int)local_ec);
        iVar7 = FUN_004162b0(local_c4 + 2,(int)(local_c4 + 2),local_74);
        if (iVar7 != 0) {
          FUN_00416150(local_74,(int)(local_c4 + 2));
          FUN_004161e0(local_74,(int)local_ec);
          uVar6 = param_1[0x16];
          local_8 = uVar6;
          if (1 < uVar6) {
            local_8 = ((uint)((local_6c[1] - local_6c[0]) * (local_6c[3] - local_6c[2])) >> 0xc) + 1
            ;
            if ((uint)param_1[0x24] < local_8) {
              local_8 = param_1[0x24];
            }
            if (uVar6 < local_8) {
              local_8 = uVar6;
            }
          }
          piVar2 = param_1 + -2;
          local_c = piVar2;
          iVar7 = (**(code **)(param_1[-2] + 0x14))();
          uVar6 = local_8;
          if (-1 < iVar7) {
            if ((local_8 == 1) && (param_2 == (int *)0x0)) {
              iVar7 = (**(code **)(*piVar2 + 0x30))(local_c4,&DAT_00493344);
            }
            else {
              uVar4 = local_b4[3] - local_b4[2];
              FUN_00481790();
              local_18 = &stack0xfffffeec;
              FUN_00481790();
              local_24 = &stack0xfffffeec;
              FUN_00481790();
              local_c4[0] = local_c;
              param_4 = (int *)(uVar4 / uVar6);
              local_1c = &stack0xfffffeec;
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
                  piVar2[1] = (int)param_4 + local_b4[2] + local_20;
                  ppiVar5[-2] = (int *)&LAB_00416010;
                  ppiVar5[-1] = piVar2 + -0x18;
                  *ppiVar5 = (int *)0x0;
                  ppiVar5[1] = (int *)0x0;
                  ppiVar5[2] = param_2;
                  if ((int *)((uVar4 - (int)param_4) - iVar7) < param_4) {
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
      iVar7 = 1;
    }
    LeaveCriticalSection(local_10);
    return iVar7;
  }
  LeaveCriticalSection(local_10);
  return -0x7ff8ffa9;
}


