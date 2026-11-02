/* Module: qt4plug.dll
   Function: FUN_5f51a8a0
   Address: 5f51a8a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f51a8a0(int *param_1)

{
  LPCWSTR lpWideCharStr;
  int *piVar1;
  void *pvVar2;
  short sVar3;
  HANDLE hFile;
  int iVar4;
  int iVar5;
  DWORD DVar6;
  int iVar7;
  _FILETIME *p_Var8;
  DWORD *pDVar9;
  bool bVar10;
  undefined8 uVar11;
  int local_1a0;
  int local_168;
  int local_160 [2];
  int local_158;
  int local_150;
  int local_14c;
  int local_144;
  int local_140;
  _FILETIME local_13c;
  CHAR local_130 [259];
  undefined1 local_2d;
  int local_28;
  undefined4 local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_5f596740;
  puStack_10 = &DAT_5f594586;
  local_14 = ExceptionList;
  local_1c = &stack0xfffffe54;
  if (param_1[1] != 0) {
    return 0;
  }
  local_28 = 0;
  lpWideCharStr = (LPCWSTR)(param_1 + 0x50);
  if ((lpWideCharStr == (LPCWSTR)0x0) || (*lpWideCharStr != L'\0')) {
    ExceptionList = &local_14;
    WideCharToMultiByte(0,0,lpWideCharStr,-1,local_130,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
  }
  else {
    ExceptionList = &local_14;
    local_1c = &stack0xfffffe54;
    if (&stack0x00000000 != (undefined1 *)0x130) {
      local_130[0] = '\0';
      ExceptionList = &local_14;
      local_1c = &stack0xfffffe54;
    }
  }
  local_2d = 0;
  sVar3 = FUN_5f579290();
  if (sVar3 != 0) {
    ExceptionList = local_14;
    return -0x7ffb1ff9;
  }
  if (param_1[2] != 0) {
    hFile = CreateFileA(local_130,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
    if (hFile == (HANDLE)0xffffffff) {
      DVar6 = GetLastError();
      iVar7 = FUN_5f53dfd0(DVar6);
      ExceptionList = local_14;
      return iVar7;
    }
    local_13c.dwLowDateTime = 0;
    local_13c.dwHighDateTime = 0;
    GetFileTime(hFile,(LPFILETIME)0x0,(LPFILETIME)0x0,&local_13c);
    CloseHandle(hFile);
    iVar7 = 2;
    bVar10 = true;
    p_Var8 = &local_13c;
    pDVar9 = (DWORD *)(param_1 + 3);
    do {
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      bVar10 = p_Var8->dwLowDateTime == *pDVar9;
      p_Var8 = (_FILETIME *)&p_Var8->dwHighDateTime;
      pDVar9 = pDVar9 + 1;
    } while (bVar10);
    if (!bVar10) {
      local_8 = 0;
      local_20 = FUN_5f577ab0();
      if ((short)local_20 != 0) {
        ExceptionList = local_14;
        return -0x7ffb1ff5;
      }
      local_20 = FUN_5f576fb0();
      if ((short)local_20 != 0) {
        FUN_5f576e10();
        ExceptionList = local_14;
        return -0x7ffb1ff5;
      }
      FUN_5f576e10();
      iVar7 = param_1[0x48];
      iVar4 = FUN_5f576210();
      if (iVar7 != iVar4) {
        FUN_5f575f50();
        param_1[0x47] = 0;
        ExceptionList = local_14;
        return -0x7ffb1ff5;
      }
      local_8 = 0xffffffff;
      if ((param_1[0xd3] != 0) && (local_140 = 0, 0 < iVar7)) {
        do {
          iVar7 = local_140 * 0x30;
          if (*(int *)(iVar7 + 0x28 + param_1[0xd3]) != 0) {
            local_144 = FUN_5f5773f0();
            if ((local_144 == 0) || (iVar4 = FUN_5f576510(), iVar4 == 0)) {
LAB_5f51ac83:
              FUN_5f575f50();
              param_1[0x47] = 0;
              ExceptionList = local_14;
              return -0x7ffb1ff5;
            }
            local_14c = FUN_5f5765b0();
            local_150 = FUN_5f576570();
            if (local_150 == 0) {
              local_150 = 1;
            }
            FUN_5f5769b0();
            FUN_5f576650();
            iVar5 = FUN_5f576750();
            iVar4 = param_1[0xd3];
            *(int *)(iVar7 + 0x18 + iVar4) = iVar5;
            *(int *)(iVar7 + 0x1c + iVar4) = iVar5 >> 0x1f;
            piVar1 = (int *)(iVar7 + param_1[0xd3]);
            if (*piVar1 == 1) {
              if (local_158 != 0x736f756e) goto LAB_5f51ac83;
              *(double *)(piVar1 + 8) =
                   (double)*(longlong *)(piVar1 + 6) / ((double)local_14c / (double)local_150);
              iVar7 = iVar7 + param_1[0xd3];
              iVar4 = ftol();
              if (iVar4 != 0) goto LAB_5f51ac1e;
              uVar11 = 0;
            }
            else {
              if (*piVar1 != 2) goto LAB_5f51ac3b;
              if (local_158 != 0x76696465) goto LAB_5f51ac83;
              *(double *)(piVar1 + 8) =
                   (double)*(longlong *)(piVar1 + 6) / ((double)local_14c / (double)local_150);
              iVar7 = iVar7 + param_1[0xd3];
LAB_5f51ac1e:
              uVar11 = ftol();
            }
            *(undefined8 *)(iVar7 + 0x10) = uVar11;
          }
LAB_5f51ac3b:
          local_140 = local_140 + 1;
        } while (local_140 < param_1[0x48]);
      }
      param_1[2] = 0;
      FUN_5f575f50();
      param_1[0x47] = 0;
    }
    param_1[3] = local_13c.dwLowDateTime;
    param_1[4] = local_13c.dwHighDateTime;
  }
  local_8 = 1;
  local_20 = FUN_5f577ab0();
  if ((short)local_20 == 0) {
    local_20 = FUN_5f576fb0();
    if ((short)local_20 != 0) {
      local_28 = -0x7ffb1ff9;
    }
    FUN_5f576e10();
    local_8 = 0xffffffff;
    iVar7 = 0;
    if (-1 < local_28) {
      param_1[1] = 1;
      FUN_5f51aef0((int)param_1);
      if (param_1[0xd3] != 0) {
        (**(code **)(*param_1 + 0x3c))(param_1,local_160);
        local_168 = 0;
        iVar4 = 0;
        if (0 < local_160[0]) {
          local_1a0 = 0;
          do {
            pvVar2 = (void *)((int *)(local_1a0 + param_1[0xd3]))[10];
            if (pvVar2 != (void *)0x0) {
              iVar5 = *(int *)(local_1a0 + param_1[0xd3]);
              if (iVar5 == 1) {
                local_28 = FUN_5f51c4e0((int)pvVar2,param_1[0x47],iVar4,local_168);
                local_168 = local_168 + 1;
              }
              else if (iVar5 == 2) {
                local_28 = FUN_5f51e9f0(pvVar2,param_1[0x47],iVar4,iVar7);
                iVar7 = iVar7 + 1;
              }
            }
            iVar4 = iVar4 + 1;
            local_1a0 = local_1a0 + 0x30;
          } while (iVar4 < local_160[0]);
        }
      }
    }
    ExceptionList = local_14;
    return local_28;
  }
  ExceptionList = local_14;
  return -0x7ffb1ff5;
}


