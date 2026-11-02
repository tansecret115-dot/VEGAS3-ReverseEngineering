/* Module: sfpublish.dll
   Function: FUN_00402e80
   Address: 00402e80
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00402e80(int param_1,HWND param_2,SIZE_T *param_3,undefined4 *param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  HMODULE pHVar4;
  HGLOBAL hMem;
  undefined4 *puVar5;
  uchar *puVar6;
  BYTE *pBVar7;
  INT_PTR IVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined *puVar11;
  uint uVar12;
  WORD unaff_BX;
  uint uVar13;
  WORD unaff_SI;
  WORD unaff_DI;
  undefined1 *puVar14;
  char *pcVar15;
  undefined4 uVar16;
  char *pcVar17;
  WCHAR WVar18;
  HANDLE in_stack_fffffc44;
  ushort in_stack_fffffc48;
  undefined2 in_stack_fffffc4c;
  ushort in_stack_fffffc50;
  ushort in_stack_fffffc54;
  uint in_stack_fffffc58;
  uint in_stack_fffffc5c;
  uint in_stack_fffffc60;
  undefined4 *in_stack_fffffc64;
  uint in_stack_fffffc68;
  undefined4 *in_stack_fffffc6c;
  int in_stack_fffffc70;
  undefined4 in_stack_fffffc74;
  undefined4 in_stack_fffffc78;
  uint uVar19;
  int in_stack_fffffc7c;
  undefined4 *this;
  int local_380;
  undefined4 local_37c [2];
  undefined4 *local_374;
  DWORD local_370;
  undefined4 **local_36c;
  uchar local_358 [516];
  undefined4 *local_154;
  uint local_150;
  undefined4 *local_14c;
  UINT local_148;
  uchar local_144 [264];
  LPCSTR local_3c;
  int local_38;
  int *local_34;
  undefined1 *local_30;
  undefined4 local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_00435610;
  puStack_10 = &DAT_00432970;
  local_14 = ExceptionList;
  local_1c = &stack0xfffffc38;
  if (*(int *)(param_1 + 0xc) == 0) {
    return 0x8004e01b;
  }
  if ((param_3 == (SIZE_T *)0x0) || (param_4 == (undefined4 *)0x0)) {
    return 0x80070057;
  }
  ExceptionList = &local_14;
  *param_3 = 0;
  *param_4 = 0;
  WVar18 = L'\0';
  iVar1 = InternetAttemptConnect();
  if (iVar1 != 0) {
    ExceptionList = local_14;
    return 0x8004e0ec;
  }
  FUN_00404430((DWORD)param_2,WVar18,unaff_DI,unaff_SI,unaff_BX,in_stack_fffffc44,in_stack_fffffc48,
               in_stack_fffffc4c,in_stack_fffffc50,in_stack_fffffc54,in_stack_fffffc58,
               in_stack_fffffc5c,in_stack_fffffc60,in_stack_fffffc64,in_stack_fffffc68,
               in_stack_fffffc6c,in_stack_fffffc70,in_stack_fffffc74,in_stack_fffffc78,
               in_stack_fffffc7c);
  uVar13 = 0;
  iVar1 = 0;
  piVar2 = *(int **)(param_1 + 0x10);
  if (0 < *piVar2) {
    do {
      uVar13 = FUN_00411b00(*(undefined4 **)(piVar2[2] + iVar1 * 4));
      if ((int)uVar13 < 0) {
        pcVar17 = "LoadAccounts failed for provider %s hr=%d";
        uVar16 = 0x191;
        pcVar15 = "sfpub.cpp";
        uVar19 = 1;
        puVar11 = FUN_004012b0();
        FUN_00415b60((int)puVar11,uVar19,pcVar15,uVar16,pcVar17);
        puVar6 = (uchar *)FUN_0041b9f0(DAT_0044164c,0x84);
        FUN_00419230(param_2,0x10,puVar6);
        break;
      }
      iVar1 = iVar1 + 1;
      piVar2 = *(int **)(param_1 + 0x10);
    } while (iVar1 < *piVar2);
  }
  if ((int)uVar13 < 0) {
    ExceptionList = local_14;
    return uVar13;
  }
  if (*(int *)(param_1 + 0x14) < 0) {
    ExceptionList = local_14;
    return 0x8004e0ae;
  }
  local_38 = *(int *)(*(int *)(*(int *)(param_1 + 0x10) + 8) + *(int *)(param_1 + 0x14) * 4);
  local_3c = (LPCSTR)FUN_004116b0(local_38);
  local_30 = (undefined1 *)0x0;
  puVar14 = (undefined1 *)0x0;
  if (local_3c != (LPCSTR)0x0) {
    iVar3 = lstrlenA(local_3c);
    iVar1 = (iVar3 + 1) * 2;
    FUN_004328f0();
    local_30 = &stack0xfffffc34;
    local_1c = &stack0xfffffc34;
    MultiByteToWideChar(0,1,local_3c,-1,(LPWSTR)&stack0xfffffc34,iVar3 + 1);
    *(undefined2 *)(&stack0xfffffc32 + iVar1) = 0;
    puVar14 = &stack0xfffffc34;
  }
  local_34 = (int *)0x0;
  if (*(int *)(param_1 + 300) == 0) {
    FUN_00416d30((HMODULE)0x0,local_144,0x104);
    _mbscat(local_144,(uchar *)"sfconfigmgr.dll");
    local_8 = 0;
    local_148 = SetErrorMode(0x8000);
    pHVar4 = LoadLibraryA((LPCSTR)local_144);
    *(HMODULE *)(param_1 + 300) = pHVar4;
    SetErrorMode(local_148);
    if (*(int *)(param_1 + 300) == 0) {
      uVar13 = 0x8004e007;
      local_20 = 0x8004e007;
    }
    local_8 = 0xffffffff;
  }
  if ((int)uVar13 < 0) {
    ExceptionList = local_14;
    return uVar13;
  }
  uVar13 = FUN_00423690(*(HMODULE *)(param_1 + 300),&DAT_00435600);
  if ((int)uVar13 < 0) {
    ExceptionList = local_14;
    return uVar13;
  }
  local_150 = 0;
  local_14c = (undefined4 *)0x0;
  uVar13 = (**(code **)(*local_34 + 0xc))
                     (local_34,puVar14,*(undefined4 *)(param_1 + 0x24),1,&local_150,&local_14c);
  if ((int)uVar13 < 0) goto LAB_0040336a;
  hMem = GlobalAlloc(0x40,0x98);
  puVar5 = GlobalLock(hMem);
  if (puVar5 == (undefined4 *)0x0) {
    local_154 = (undefined4 *)0x0;
  }
  else {
    local_154 = FUN_004218b0(puVar5);
  }
  puVar5 = local_154;
  if (local_154 == (undefined4 *)0x0) {
    uVar13 = 0x8007000e;
    goto LAB_00403353;
  }
  puVar6 = (uchar *)FUN_004012f0();
  uVar13 = FUN_00421930(puVar5,puVar6);
  if ((int)uVar13 < 0) {
LAB_00403345:
    FUN_00420490(puVar5);
  }
  else {
    uVar13 = FUN_00422380(puVar5,*(uchar **)(local_38 + 0xc),(uchar *)"text/xml",
                          (uchar *)"Content-Type: text/xml\r\n",local_14c,local_150,(uchar *)0x0);
    if (uVar13 != 0x4e011) {
      if (-1 < (int)uVar13) {
        uVar13 = 0x8004e0ec;
      }
      goto LAB_00403345;
    }
    uVar13 = FUN_00420660(puVar5,0x9c4);
    if (uVar13 == 0x8004e02c) {
      pBVar7 = (BYTE *)FUN_0041b9f0(DAT_0044164c,0xd5);
      FUN_00418d60(local_358,pBVar7);
      FUN_00415450(local_37c,local_358,(int)puVar5);
      local_374 = local_37c;
      local_370 = GetCurrentThreadId();
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_0044178c);
      local_36c = DAT_004417c0;
      DAT_004417c0 = &local_374;
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_0044178c);
      IVar8 = DialogBoxParamA(DAT_00441760,(LPCSTR)0xd4,param_2,FUN_00404d90,0);
      uVar13 = -(uint)(IVar8 != 1) & 0x8004e00c;
      FUN_00415480(local_37c);
    }
    if ((int)uVar13 < 0) goto LAB_00403345;
    this = (undefined4 *)0x0;
    uVar13 = FUN_00421a20(puVar5,&local_380,(undefined4 *)&stack0xfffffc7c);
    if ((int)uVar13 < 0) {
      pcVar17 = "Could not get http request result hr=0x%x";
      uVar16 = 0x226;
      pcVar15 = "sfpub.cpp";
      uVar13 = 1;
      puVar11 = FUN_004012b0();
      FUN_00415b60((int)puVar11,uVar13,pcVar15,uVar16,pcVar17);
      uVar13 = 0x8004e0f5;
      FUN_00420490(puVar5);
    }
    else {
      if (((local_380 < 0) || ((int)this[2] < 200)) || (299 < (int)this[2])) {
        uVar13 = 0x8004e0ec;
      }
      else {
        uVar19 = 0;
        puVar9 = (undefined4 *)FUN_00420fe0(this,(undefined4 *)&stack0xfffffc78);
        *param_3 = uVar19;
        puVar10 = CoTaskMemAlloc(uVar19);
        *param_4 = puVar10;
        if (puVar10 == (undefined4 *)0x0) {
          uVar13 = 0x8007000e;
        }
        else {
          for (uVar12 = uVar19 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
            *puVar10 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar10 = puVar10 + 1;
          }
          for (uVar19 = uVar19 & 3; puVar5 = local_154, uVar19 != 0; uVar19 = uVar19 - 1) {
            *(undefined1 *)puVar10 = *(undefined1 *)puVar9;
            puVar9 = (undefined4 *)((int)puVar9 + 1);
            puVar10 = (undefined4 *)((int)puVar10 + 1);
          }
        }
      }
      if (this == (undefined4 *)0x0) goto LAB_00403345;
      FUN_00420fc0(this);
      FUN_00420490(puVar5);
    }
  }
LAB_00403353:
  CoTaskMemFree(local_14c);
  local_14c = (undefined4 *)0x0;
LAB_0040336a:
  (**(code **)(*local_34 + 8))(local_34);
  ExceptionList = local_14;
  return uVar13;
}


