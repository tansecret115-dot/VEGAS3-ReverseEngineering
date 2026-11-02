/* Module: sfpublish.dll
   Function: FUN_0040c5d0
   Address: 0040c5d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_0040c5d0(int param_1)

{
  HWND hWndParent;
  HGLOBAL pvVar1;
  undefined4 *puVar2;
  uchar *puVar3;
  int iVar4;
  undefined *puVar5;
  HMODULE pHVar6;
  int iMaxLength;
  char *pcVar7;
  undefined4 uVar8;
  char *pcVar9;
  uint uVar10;
  uchar local_2c4 [360];
  uchar local_15c [260];
  undefined4 local_58 [2];
  undefined4 *local_50;
  DWORD local_4c;
  undefined4 **local_48;
  int local_1c;
  LPCSTR local_18;
  int local_14;
  int local_10;
  undefined4 *local_c;
  undefined4 *local_8;
  
  pvVar1 = GlobalAlloc(0x40,0x98);
  puVar2 = GlobalLock(pvVar1);
  if (puVar2 == (undefined4 *)0x0) goto LAB_0040c870;
  puVar2 = FUN_004218b0(puVar2);
  local_c = puVar2;
  if (puVar2 == (undefined4 *)0x0) goto LAB_0040c870;
  *(undefined4 **)(param_1 + 0x6c) = puVar2;
  puVar3 = (uchar *)FUN_004012f0();
  iVar4 = FUN_00421930(puVar2,puVar3);
  if (-1 < iVar4) {
    FUN_004205f0(puVar2,*(undefined4 *)(param_1 + 4));
    FUN_004138a0(local_58);
    *(undefined4 **)(param_1 + 0x70) = local_58;
    if (param_1 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = param_1 + 0x48;
    }
    puVar3 = (uchar *)FUN_004166c0(*(LPCSTR *)(param_1 + 0x5c));
    iVar4 = FUN_00413920(local_58,*(uchar **)(param_1 + 0x5c),puVar3,iVar4);
    if (-1 < iVar4) {
      iVar4 = FUN_004227a0(puVar2,*(uchar **)(param_1 + 0x8c),(uchar *)"text/*",
                           *(uchar **)(param_1 + 0x90),*(undefined4 **)(param_1 + 0x94),
                           *(uint *)(param_1 + 0x98),*(uchar **)(param_1 + 0x5c),"FILE1",
                           (uchar *)0x0);
      if (-1 < iVar4) {
        hWndParent = *(HWND *)(param_1 + 4);
        local_50 = local_58;
        local_4c = GetCurrentThreadId();
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_0044178c);
        local_48 = DAT_004417c0;
        DAT_004417c0 = &local_50;
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_0044178c);
        DialogBoxParamA(DAT_00441760,(LPCSTR)0xca,hWndParent,FUN_00404d90,0);
      }
      local_8 = (undefined4 *)0x0;
      iVar4 = FUN_00421a20(puVar2,&local_1c,&local_8);
      if ((-1 < iVar4) && (local_14 = -0x7ffb1f14, -1 < local_1c)) {
        if (((int)local_8[2] < 200) || (299 < (int)local_8[2])) {
          pcVar7 = "Server response was status code %d";
          uVar8 = 0x3a3;
LAB_0040c7e9:
          pcVar9 = "sfpublishdlg.cpp";
          uVar10 = 1;
          puVar5 = FUN_004012b0();
          FUN_00415b60((int)puVar5,uVar10,pcVar9,uVar8,pcVar7);
        }
        else {
          puVar3 = _mbsstr((uchar *)local_8[4],(uchar *)"text/");
          if (puVar3 == (uchar *)0x0) {
            pcVar7 = "Server response to post is not text/* type, but rather %s";
            uVar8 = 0x39e;
            goto LAB_0040c7e9;
          }
          local_10 = 0;
          local_18 = (LPCSTR)FUN_00420fe0(local_8,&local_10);
          iVar4 = local_10;
          if ((local_18 == (LPCSTR)0x0) || (local_10 == 0)) {
            pcVar9 = "Could not get response buffer cb = %d";
            uVar8 = 0x399;
            pcVar7 = "sfpublishdlg.cpp";
            uVar10 = 1;
            puVar5 = FUN_004012b0();
            FUN_00415b60((int)puVar5,uVar10,pcVar7,uVar8,pcVar9);
          }
          else {
            iMaxLength = local_10 + 1;
            FUN_004328f0();
            lstrcpynA(&stack0xfffffd30,local_18,iMaxLength);
            local_2c4[iVar4 + -0xc] = '\0';
            local_14 = FUN_0040bd00(*(int **)(param_1 + 0x54),&stack0xfffffd30);
            puVar2 = local_c;
          }
        }
        FUN_00420fc0(local_8);
        local_8 = (undefined4 *)0x0;
        if (-1 < local_14) goto LAB_0040c85b;
      }
      puVar3 = local_15c;
      uVar10 = 0x104;
      local_15c[0] = '\0';
      pHVar6 = (HMODULE)FUN_004012c0();
      FUN_00416d30(pHVar6,puVar3,uVar10);
      FUN_00418d60(local_2c4,(BYTE *)"file:///%spageloaderror.htm");
      FUN_0040bd00(*(int **)(param_1 + 0x54),(LPCSTR)local_2c4);
    }
LAB_0040c85b:
    *(undefined4 *)(param_1 + 0x70) = 0;
    FUN_004138d0(local_58);
  }
  *(undefined4 *)(param_1 + 0x6c) = 0;
  FUN_00420490(puVar2);
LAB_0040c870:
  pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x94));
  GlobalUnlock(pvVar1);
  pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x94));
  GlobalFree(pvVar1);
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  local_c = *(undefined4 **)(param_1 + 0x8c);
  pvVar1 = GlobalHandle(local_c);
  GlobalUnlock(pvVar1);
  pvVar1 = GlobalHandle(local_c);
  GlobalFree(pvVar1);
  local_c = *(undefined4 **)(param_1 + 0x90);
  *(undefined4 *)(param_1 + 0x8c) = 0;
  pvVar1 = GlobalHandle(local_c);
  GlobalUnlock(pvVar1);
  pvVar1 = GlobalHandle(local_c);
  GlobalFree(pvVar1);
  *(undefined4 *)(param_1 + 0x90) = 0;
  return 0;
}


