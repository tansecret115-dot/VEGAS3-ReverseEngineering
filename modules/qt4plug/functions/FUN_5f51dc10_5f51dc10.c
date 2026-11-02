/* Module: qt4plug.dll
   Function: FUN_5f51dc10
   Address: 5f51dc10
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x5f51e089) */
/* WARNING: Removing unreachable block (ram,0x5f51e099) */
/* WARNING: Removing unreachable block (ram,0x5f51e0bf) */
/* WARNING: Removing unreachable block (ram,0x5f51e0ea) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_5f51dc10(int *param_1,uint param_2,uint param_3,int *param_4,int *param_5,int *param_6,
                int *param_7,uint *param_8,uint param_9,int *param_10)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  bool bVar7;
  bool bVar8;
  HANDLE hMutex;
  int local_30;
  int local_2c;
  void *local_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_5f5967a0;
  puStack_10 = &DAT_5f594586;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  WaitForSingleObject((HANDLE)param_1[5],0xffffffff);
  if (param_1[0xd] == 0) {
    ReleaseMutex((HANDLE)param_1[5]);
    ExceptionList = local_14;
    return -0x7ffb1ff9;
  }
  if (param_8 != (uint *)0x0) {
    *param_8 = 0;
    param_8[1] = 0;
  }
  if ((param_1[0x71] == 0) && ((param_6 != (int *)0x0 || (param_7 != (int *)0x0)))) {
    (**(code **)(*param_1 + 0x38))(param_1,0,0,0,0,0,0);
  }
  if (param_6 != (int *)0x0) {
    *param_6 = param_1[0x71];
  }
  if (param_7 != (int *)0x0) {
    *param_7 = param_1[0x72];
  }
  iVar3 = param_1[0x6d];
  if ((iVar3 <= (int)param_3) && ((iVar3 < (int)param_3 || ((uint)param_1[0x6c] <= param_2)))) {
    ReleaseMutex((HANDLE)param_1[5]);
    ExceptionList = local_14;
    return 1;
  }
  if ((((param_1[100] == param_2) && (param_1[0x65] == param_3)) && (param_1[0x19] == 0)) &&
     ((param_9 & 2) == 0)) {
    *param_4 = param_1[0x12];
    if (param_5 != (int *)0x0) {
      *param_5 = param_1[0x15];
    }
    if (param_8 != (uint *)0x0) {
      *param_8 = param_2;
      param_8[1] = param_3;
    }
    ExceptionList = local_14;
    return 0;
  }
  if (((*(double *)(param_1 + 0x6e) == _DAT_5f596570) || (iVar3 < 0)) ||
     ((iVar3 < 1 && ((uint)param_1[0x6c] < 2)))) {
    param_1[0x62] = 0;
  }
  else {
    ftol();
    iVar3 = ftol();
    param_1[0x62] = iVar3;
  }
  local_30 = 0;
  if ((param_9 & 2) == 0) {
    if (param_1[0x1c] == 0) {
      iVar3 = FUN_5f57aed0();
      param_1[0x1c] = iVar3;
    }
    if (param_1[0xc] == 1) {
      iVar4 = FUN_5f51da40(param_1,param_1[0x62]);
      iVar3 = 0;
      if (-1 < iVar4) {
LAB_5f51dfbd:
        sVar2 = FUN_5f5767f0();
        iVar3 = local_30;
        if (sVar2 == 0) {
          if ((local_30 == 0) || (iVar4 = FUN_5f51d930((int)param_1), -1 < iVar4)) {
            FUN_5f57b0b0();
            if (*(int *)param_1[0x1c] == 0) {
              FUN_5f57b0d0();
              iVar4 = -0x7fffbffd;
            }
            else {
              if (param_1[0x74] == 0) {
                local_8 = 2;
                sVar2 = FUN_5f580b80();
              }
              else {
                FUN_5f580c60();
                local_8 = 1;
                sVar2 = FUN_5f580b80();
              }
              local_8 = 0xffffffff;
              FUN_5f57b0d0();
              if (sVar2 == 0) {
                param_1[0x66] = param_1[0x62];
                param_1[0x67] = local_2c;
                param_1[100] = param_2;
                param_1[0x65] = param_3;
                *param_4 = param_1[0x12];
                if (param_5 != (int *)0x0) {
                  *param_5 = param_1[0x15];
                }
                iVar4 = 0;
                if (param_8 != (uint *)0x0) {
                  *param_8 = param_2;
                  param_8[1] = param_3;
                }
              }
              else {
                iVar4 = -0x7ffb1fe1;
              }
            }
          }
        }
        else {
          iVar4 = (-(uint)(sVar2 != -0x7df) & 0x8004e037) + 1;
        }
      }
    }
    else {
      iVar3 = FUN_5f57af10();
      local_30 = iVar3;
      if (iVar3 != 0) goto LAB_5f51dfbd;
      iVar4 = -0x7ff8fff2;
    }
    if (iVar3 != 0) {
      FUN_5f57b390();
    }
    if (iVar4 == 0) {
      ExceptionList = local_14;
      return 0;
    }
    *param_4 = 0;
    hMutex = (HANDLE)param_1[5];
    goto LAB_5f51e1ee;
  }
  if (param_1[0xc] != 0) {
    ExceptionList = local_14;
    return 1;
  }
  piVar1 = (int *)param_1[0x75];
  if ((*piVar1 == 0) || (*piVar1 != *param_10)) {
LAB_5f51de8f:
    bVar7 = false;
  }
  else {
    iVar3 = 0x10;
    bVar7 = false;
    iVar4 = 0;
    bVar8 = true;
    pbVar5 = (byte *)(piVar1 + 1);
    pbVar6 = (byte *)(param_10 + 1);
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar7 = *pbVar5 < *pbVar6;
      bVar8 = *pbVar5 == *pbVar6;
      pbVar5 = pbVar5 + 1;
      pbVar6 = pbVar6 + 1;
    } while (bVar8);
    if (!bVar8) {
      iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
    }
    if ((((iVar4 != 0) || (piVar1[5] != param_10[5])) || (piVar1[6] != param_10[6])) ||
       ((piVar1[7] != param_10[7] || (piVar1[8] != param_10[8])))) goto LAB_5f51de8f;
    if ((piVar1[0xc] != -1) || (piVar1[0xd] != -1)) {
      if (((param_10[0xc] != -1) || (param_10[0xd] != -1)) &&
         ((piVar1[0xc] != param_10[0xc] || (piVar1[0xd] != param_10[0xd])))) goto LAB_5f51de8f;
    }
    if (((piVar1[0xe] != 0) && (param_10[0xe] != 0)) && (piVar1[0xe] != param_10[0xe]))
    goto LAB_5f51de8f;
    bVar7 = true;
  }
  if (!bVar7) {
    ExceptionList = local_14;
    return 1;
  }
  iVar3 = FUN_5f57af10();
  if (iVar3 == 0) {
    ExceptionList = local_14;
    return -0x7ff8fff2;
  }
  sVar2 = FUN_5f5767f0();
  FUN_5f57b390();
  if (sVar2 == 0) {
    FUN_5f57b0b0();
    if (*(int *)param_1[0x1c] != 0) {
      *param_4 = *(int *)param_1[0x1c];
      param_1[0x19] = 1;
      ExceptionList = local_14;
      return 0;
    }
    FUN_5f57b0d0();
    ReleaseMutex((HANDLE)param_1[5]);
    ExceptionList = local_14;
    return -0x7fffbffd;
  }
  iVar4 = (-(uint)(sVar2 != -0x7df) & 0x8004e037) + 1;
  hMutex = (HANDLE)param_1[5];
LAB_5f51e1ee:
  ReleaseMutex(hMutex);
  ExceptionList = local_14;
  return iVar4;
}


