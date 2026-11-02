/* Module: rmbe3260.dll
   Function: FUN_66011290
   Address: 66011290
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_66011290(int *param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  BOOL BVar7;
  uint uVar8;
  int iVar9;
  undefined4 local_c;
  undefined4 local_8;
  
  piVar4 = param_2;
  piVar3 = param_1;
  if (param_1[9] == 0) {
    return -0x7ffbfda8;
  }
  if (param_2 == (int *)0x0) {
    return -0x7fffbffd;
  }
  iVar5 = param_1[0x11];
  if (((iVar5 != 0) && (*(int *)(iVar5 + 0x10) != 0)) && (*(int *)(iVar5 + 0x14) == 0)) {
    return 0x40267;
  }
  iVar5 = *param_2;
  local_8 = 0;
  param_1 = (int *)0x0;
  local_c = 0;
  param_2 = (int *)0x0;
  iVar5 = (**(code **)(iVar5 + 0x10))(piVar4,&local_c,&local_8,&param_1,&param_2);
  if (-1 < iVar5) {
    if (piVar3[10] == 0) {
      iVar5 = piVar3[0x11];
      if ((iVar5 == 0) || (*(int *)(iVar5 + 0x10) == 0)) goto LAB_66011359;
      piVar1 = *(int **)(iVar5 + 0x18);
      if (param_1 < piVar1) {
        uVar6 = (int)param_1 + (-1 - (int)piVar1);
      }
      else {
        uVar6 = (int)param_1 - (int)piVar1;
      }
    }
    else {
      piVar1 = (int *)piVar3[0xb];
      if (param_1 < piVar1) {
        iVar5 = -1 - (int)piVar1;
      }
      else {
        iVar5 = -(int)piVar1;
      }
      uVar6 = (int)param_1 + iVar5;
      if (uVar6 == 0) {
        return 0x40267;
      }
    }
    if (86400000 < uVar6) {
      return 0x40267;
    }
  }
LAB_66011359:
  if (piVar3[0xe] == 1) {
    return 0;
  }
  if ((DAT_66075084 != 0) &&
     ((DAT_660750a0 != 0 ||
      (DAT_660750a0 = FUN_6604f070(&DAT_66075080,s_AudioEncodeCall_6606cca0), DAT_660750a0 != 0))))
  {
    FUN_6604eef0(DAT_660750a0);
  }
  if ((DAT_66075090 == 0) && (DAT_66075094 == 0)) {
    BVar7 = QueryPerformanceFrequency((LARGE_INTEGER *)&DAT_66075090);
    if ((BVar7 == 0) ||
       (BVar7 = QueryPerformanceCounter((LARGE_INTEGER *)&DAT_66075098), BVar7 == 0))
    goto LAB_66011460;
LAB_66011443:
    uVar6 = ftol();
  }
  else {
    BVar7 = QueryPerformanceCounter((LARGE_INTEGER *)&DAT_66075098);
    if (BVar7 != 0) goto LAB_66011443;
LAB_66011460:
    uVar6 = GetTickCount();
  }
  iVar5 = (**(code **)(*piVar3 + 0x84))(piVar3,piVar4);
  if (-1 < iVar5) {
    iVar5 = (**(code **)(*piVar3 + 0x74))(piVar3);
  }
  if (((piVar3[10] == 0) && (-1 < iVar5)) && (iVar5 != 0x40267)) {
    piVar3[10] = 1;
  }
  uVar8 = piVar3[0xb];
  uVar2 = piVar3[0x21];
  if (uVar8 < uVar2) {
    uVar8 = (uVar8 - uVar2) - 1;
  }
  else {
    uVar8 = uVar8 - uVar2;
  }
  if (((-1 < iVar5) && ((uint)piVar3[0x20] < uVar8)) &&
     (iVar5 = (**(code **)(piVar3[0x12] + 0x24))(piVar3 + 0x12,0), -1 < iVar5)) {
    piVar3[0x21] = piVar3[0xb];
  }
  if ((DAT_66075084 != 0) && (DAT_660750a0 != 0)) {
    FUN_6604ef20(DAT_660750a0);
  }
  if ((DAT_66075090 == 0) && (DAT_66075094 == 0)) {
    BVar7 = QueryPerformanceFrequency((LARGE_INTEGER *)&DAT_66075090);
    if (BVar7 != 0) {
      iVar9 = QueryPerformanceCounter((LARGE_INTEGER *)&DAT_66075098);
      goto joined_r0x66011567;
    }
  }
  else {
    iVar9 = QueryPerformanceCounter((LARGE_INTEGER *)&DAT_66075098);
joined_r0x66011567:
    if (iVar9 != 0) {
      uVar8 = ftol();
      goto LAB_660115c0;
    }
  }
  uVar8 = GetTickCount();
LAB_660115c0:
  if (uVar8 < uVar6) {
    uVar8 = (uVar8 - uVar6) - 1;
  }
  else {
    uVar8 = uVar8 - uVar6;
  }
  *(double *)(piVar3 + 0xf) = (double)uVar8 + *(double *)(piVar3 + 0xf);
  return iVar5;
}


