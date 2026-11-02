/* Module: rmbe3260.dll
   Function: FUN_66027920
   Address: 66027920
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_66027920(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  BOOL BVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  undefined4 local_54;
  undefined4 local_50;
  int *local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  ushort uStack_1c;
  undefined2 uStack_1a;
  uint local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  uint local_8;
  
  piVar6 = param_2;
  piVar2 = param_1;
  if (param_1[9] == 0) {
    return -0x7ffbfda8;
  }
  if (param_2 == (int *)0x0) {
    return -0x7fffbffd;
  }
  iVar4 = param_1[0x11];
  if (((iVar4 != 0) && (*(int *)(iVar4 + 0x10) != 0)) && (*(int *)(iVar4 + 0x14) == 0)) {
    return 0x40267;
  }
  if ((DAT_66075194 != 0) &&
     ((DAT_660751b0 != 0 ||
      (DAT_660751b0 = FUN_6604f070(&DAT_66075190,s_VideoEncodeCall_6606de68), DAT_660751b0 != 0))))
  {
    FUN_6604eef0(DAT_660751b0);
  }
  if ((DAT_660751a0 == 0) && (DAT_660751a4 == 0)) {
    BVar3 = QueryPerformanceFrequency((LARGE_INTEGER *)&DAT_660751a0);
    if ((BVar3 == 0) ||
       (BVar3 = QueryPerformanceCounter((LARGE_INTEGER *)&DAT_660751a8), BVar3 == 0))
    goto LAB_66027a6b;
LAB_66027a4e:
    uStack_1a = 0;
    uStack_1c = 0;
    local_20 = DAT_660751a0;
    param_2 = (int *)ftol();
  }
  else {
    BVar3 = QueryPerformanceCounter((LARGE_INTEGER *)&DAT_660751a8);
    if (BVar3 != 0) goto LAB_66027a4e;
LAB_66027a6b:
    param_2 = (int *)GetTickCount();
  }
  local_14 = 0;
  param_1 = (int *)0x0;
  local_10 = 0;
  local_18 = 0;
  local_54 = 0x34;
  local_50 = 0;
  local_4c = (int *)0x0;
  local_48 = 0;
  local_44 = 0;
  local_3c = 0;
  local_38 = 0;
  local_28 = 0;
  local_24 = 0;
  local_2c = 0;
  iVar4 = (**(code **)(*piVar6 + 0x10))(piVar6,&local_10,&local_14,&param_1,&local_18);
  if (-1 < iVar4) {
    local_48 = local_10;
    local_4c = param_1;
    local_44 = local_14;
    if ((local_18 & 1) != 0) {
      local_28 = 1;
    }
    if ((local_18 & 2) != 0) {
      local_2c = 1;
    }
  }
  if (-1 < iVar4) {
    if (piVar2[10] == 0) {
      iVar5 = piVar2[0x11];
      if ((iVar5 == 0) || (*(int *)(iVar5 + 0x10) == 0)) goto LAB_66027b3c;
      piVar6 = *(int **)(iVar5 + 0x18);
      if (param_1 < piVar6) {
        uVar7 = (int)param_1 + (-1 - (int)piVar6);
      }
      else {
        uVar7 = (int)param_1 - (int)piVar6;
      }
    }
    else {
      piVar6 = (int *)piVar2[0xb];
      if (param_1 < piVar6) {
        iVar5 = -1 - (int)piVar6;
      }
      else {
        iVar5 = -(int)piVar6;
      }
      uVar7 = (int)param_1 + iVar5;
      if (uVar7 == 0) {
        return 0x40267;
      }
    }
    if (86400000 < uVar7) {
      return 0x40267;
    }
  }
LAB_66027b3c:
  local_c = 1;
  if (((-1 < iVar4) &&
      (iVar4 = (**(code **)(piVar2[0x27] + 0xc))(piVar2 + 0x27,param_1,&local_c), -1 < iVar4)) &&
     (local_c != 0)) {
    iVar4 = (**(code **)(*piVar2 + 100))(&local_54);
    if (-1 < iVar4) {
      local_8 = 0;
      uStack_1c = (ushort)piVar2[0x16];
      uStack_1a = (undefined2)((uint)piVar2[0x16] >> 0x10);
      if (uStack_1c != 0) {
        while( true ) {
          puVar1 = *(undefined4 **)(piVar2[0x15] + (local_8 & 0xffff) * 4);
          iVar4 = (**(code **)(*piVar2 + 0x68))(&local_54,puVar1);
          if (iVar4 < 0) break;
          if ((DAT_66075194 != 0) &&
             ((DAT_660751b4 != 0 ||
              (DAT_660751b4 = FUN_6604f070(&DAT_66075190,s_VideoEngineEncode_6606de54),
              DAT_660751b4 != 0)))) {
            FUN_6604eef0(DAT_660751b4);
          }
          iVar4 = FUN_6603c030(piVar2[0x13],(int *)*puVar1,&local_54);
          iVar4 = FUN_660157a0(iVar4);
          if ((DAT_66075194 != 0) && (DAT_660751b4 != 0)) {
            FUN_6604ef20(DAT_660751b4);
          }
          if (((iVar4 < 0) || (iVar4 = (**(code **)(*piVar2 + 0x6c))(&local_54,puVar1), iVar4 < 0))
             || (local_8 = local_8 + 1, uStack_1c <= (ushort)local_8)) break;
        }
      }
    }
    if (-1 < iVar4) {
      iVar4 = (**(code **)(*piVar2 + 0x70))(&local_54);
    }
  }
  if (((piVar2[10] == 0) && (local_c != 0)) && (-1 < iVar4)) {
    piVar2[10] = 1;
  }
  piVar6 = (int *)piVar2[0x21];
  if (param_1 < piVar6) {
    iVar5 = -1 - (int)piVar6;
  }
  else {
    iVar5 = -(int)piVar6;
  }
  if (((-1 < iVar4) && ((uint)piVar2[0x20] < (uint)((int)param_1 + iVar5))) &&
     (iVar4 = (**(code **)(piVar2[0x12] + 0x24))(piVar2 + 0x12,0), -1 < iVar4)) {
    piVar2[0x21] = (int)param_1;
  }
  if ((DAT_66075194 != 0) && (DAT_660751b0 != 0)) {
    FUN_6604ef20(DAT_660751b0);
  }
  if ((DAT_660751a0 == 0) && (DAT_660751a4 == 0)) {
    BVar3 = QueryPerformanceFrequency((LARGE_INTEGER *)&DAT_660751a0);
    if (BVar3 != 0) {
      iVar5 = QueryPerformanceCounter((LARGE_INTEGER *)&DAT_660751a8);
      goto joined_r0x66027d3f;
    }
  }
  else {
    iVar5 = QueryPerformanceCounter((LARGE_INTEGER *)&DAT_660751a8);
joined_r0x66027d3f:
    if (iVar5 != 0) {
      uStack_1a = 0;
      uStack_1c = 0;
      local_20 = DAT_660751a0;
      piVar6 = (int *)ftol();
      goto LAB_66027d95;
    }
  }
  piVar6 = (int *)GetTickCount();
LAB_66027d95:
  if (piVar6 < param_2) {
    iVar5 = -1 - (int)param_2;
  }
  else {
    iVar5 = -(int)param_2;
  }
  *(double *)(piVar2 + 0xf) = (double)(uint)((int)piVar6 + iVar5) + *(double *)(piVar2 + 0xf);
  return iVar4;
}


