/* Module: sfpublish.dll
   Function: FUN_00412de0
   Address: 00412de0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00412de0(int *param_1,int *param_2)

{
  uchar *lpString1;
  HANDLE hHandle;
  HCURSOR hCursor;
  DWORD DVar1;
  BOOL BVar2;
  HGLOBAL pvVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uchar local_11c [260];
  HCURSOR local_18;
  undefined4 *local_14;
  LPCSTR local_10;
  int local_c;
  HANDLE local_8;
  
  iVar6 = 0;
  uVar7 = 0x80004005;
  hHandle = CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,0,"Sonic Foundry Publishing Provider Guard");
  if (hHandle == (HANDLE)0x0) {
    return 0x80004005;
  }
  local_8 = hHandle;
  hCursor = (HCURSOR)FUN_00423b10(0x7f02);
  local_18 = SetCursor(hCursor);
  DVar1 = WaitForSingleObject(hHandle,3000);
  if (DVar1 == 0x102) goto LAB_0041306c;
  uVar7 = FUN_0041f050(param_1,4,-1,-1,0x40000000);
  if (-1 < (int)uVar7) {
    uVar7 = FUN_004130a0(param_2);
    if (-1 < (int)uVar7) {
      SHGetSpecialFolderPathA((HWND)0x0,&DAT_004417dc,0x1a,1);
      FUN_004168d0(&DAT_004417dc,0x104);
      _mbscat(&DAT_004417dc,(uchar *)"Publish Providers");
      FUN_004168d0(&DAT_004417dc,0x104);
      BVar2 = FUN_00417590(&DAT_004417dc,(LPSECURITY_ATTRIBUTES)0x0);
      if (BVar2 != 0) {
        uVar7 = FUN_004121e0();
        if ((int)uVar7 < 0) goto LAB_00413051;
        local_c = 1;
        local_10 = (LPCSTR)0x0;
        param_2 = (int *)0x0;
        uVar7 = FUN_00412a30((uchar *)0x0,(uint *)&param_2);
        if (uVar7 == 0x8004e03c) {
          FUN_004328f0();
          local_10 = &stack0xfffffed8;
          uVar7 = FUN_00412a30(&stack0xfffffed8,(uint *)&param_2);
        }
        if (*DAT_004419e8 < 1) {
LAB_0041302c:
          if ((int)uVar7 < 0) goto LAB_00413051;
        }
        else {
          do {
            if ((int)uVar7 < 0) goto LAB_00413051;
            pvVar3 = GlobalAlloc(0x40,0x40);
            puVar4 = GlobalLock(pvVar3);
            if ((puVar4 == (undefined4 *)0x0) ||
               (puVar4 = (undefined4 *)FUN_00410d10(puVar4), puVar4 == (undefined4 *)0x0)) {
              uVar7 = 0x8007000e;
              goto LAB_00413051;
            }
            uVar7 = FUN_00410f60((int)puVar4);
            if ((int)uVar7 < 0) {
              if (puVar4 != (undefined4 *)0x0) {
                FUN_00410d50(puVar4);
                pvVar3 = GlobalHandle(puVar4);
                GlobalUnlock(pvVar3);
                pvVar3 = GlobalHandle(puVar4);
                GlobalFree(pvVar3);
              }
              goto LAB_0041302c;
            }
            lpString1 = *(uchar **)(DAT_004419e8[2] + iVar6 * 4);
            FUN_00418d60(local_11c,(BYTE *)"%s%s\\SfPublish.ini");
            iVar5 = FUN_004122c0(puVar4,lpString1,(LPCSTR)local_11c);
            if (((iVar5 < 0) || (iVar5 = FUN_00413290((int)puVar4), iVar5 != 0)) ||
               (local_14 = puVar4, iVar5 = FUN_0041da20((int *)*param_1,-1,(int *)&local_14,1),
               iVar5 < 0)) {
              FUN_00410d50(puVar4);
              pvVar3 = GlobalHandle(puVar4);
              GlobalUnlock(pvVar3);
              pvVar3 = GlobalHandle(puVar4);
              GlobalFree(pvVar3);
            }
            else if ((local_10 != (LPCSTR)0x0) &&
                    (iVar5 = lstrcmpiA((LPCSTR)lpString1,local_10), iVar5 == 0)) {
              local_c = 0;
            }
            uVar7 = 0;
            iVar6 = iVar6 + 1;
          } while (iVar6 < *DAT_004419e8);
        }
        if ((local_c != 0) && (0 < *(int *)*param_1)) {
          uVar7 = FUN_00410f80(*(undefined4 **)((int *)*param_1)[2]);
        }
      }
      hHandle = local_8;
      if (-1 < (int)uVar7) goto LAB_00413065;
    }
LAB_00413051:
    FUN_0041ef80((int *)*param_1);
    *param_1 = 0;
    hHandle = local_8;
  }
LAB_00413065:
  ReleaseMutex(hHandle);
LAB_0041306c:
  SetCursor(local_18);
  CloseHandle(hHandle);
  return uVar7;
}


