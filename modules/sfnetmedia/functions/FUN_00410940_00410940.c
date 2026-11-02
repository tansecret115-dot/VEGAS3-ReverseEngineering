/* Module: sfnetmedia.dll
   Function: FUN_00410940
   Address: 00410940
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00410940(int *param_1,int *param_2)

{
  uchar *lpString1;
  HANDLE hHandle;
  HCURSOR hCursor;
  DWORD DVar1;
  BOOL BVar2;
  HGLOBAL hMem;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uchar local_11c [260];
  HANDLE local_18;
  HCURSOR local_14;
  undefined4 *local_10;
  int local_c;
  LPCSTR local_8;
  
  iVar5 = 0;
  uVar6 = 0x80004005;
  hHandle = CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,0,"Sonic Foundry NetMedia Provider Guard");
  if (hHandle == (HANDLE)0x0) {
    return 0x80004005;
  }
  local_18 = hHandle;
  hCursor = (HCURSOR)FUN_0041b280(0x7f02);
  local_14 = SetCursor(hCursor);
  DVar1 = WaitForSingleObject(hHandle,3000);
  if (DVar1 == 0x102) goto LAB_00410b87;
  uVar6 = FUN_00425310(param_1,4,-1,-1,0x40000000);
  if (-1 < (int)uVar6) {
    uVar6 = FUN_00410bb0(param_2);
    if (-1 < (int)uVar6) {
      SHGetSpecialFolderPathA((HWND)0x0,&DAT_004418c4,0x1a,1);
      FUN_00413260(&DAT_004418c4,0x104);
      _mbscat(&DAT_004418c4,"NetMedia Providers");
      FUN_00413260(&DAT_004418c4,0x104);
      BVar2 = FUN_00413f20(&DAT_004418c4,(LPSECURITY_ATTRIBUTES)0x0);
      if (BVar2 != 0) {
        uVar6 = FUN_004103a0();
        if ((int)uVar6 < 0) goto LAB_00410b6c;
        local_c = 1;
        local_8 = (LPCSTR)0x0;
        param_2 = (int *)0x0;
        uVar6 = FUN_00410760((uchar *)0x0,(uint *)&param_2);
        if (uVar6 == 0x8004e03c) {
          FUN_004323c0();
          local_8 = &stack0xfffffed8;
          uVar6 = FUN_00410760(&stack0xfffffed8,(uint *)&param_2);
        }
        if (*DAT_00441ad0 < 1) {
          if ((int)uVar6 < 0) goto LAB_00410b6c;
        }
        else {
          do {
            if ((int)uVar6 < 0) goto LAB_00410b6c;
            hMem = GlobalAlloc(0x40,0x20);
            puVar3 = GlobalLock(hMem);
            if ((puVar3 == (undefined4 *)0x0) ||
               (puVar3 = (undefined4 *)FUN_0040fe30(puVar3), puVar3 == (undefined4 *)0x0)) {
              uVar6 = 0x8007000e;
              goto LAB_00410b6c;
            }
            lpString1 = *(uchar **)(DAT_00441ad0[2] + iVar5 * 4);
            FUN_004156f0(local_11c,(BYTE *)"%s%s\\SfMedia.ini");
            iVar4 = FUN_00410480(puVar3,lpString1,(LPCSTR)local_11c);
            if (((iVar4 < 0) || (iVar4 = FUN_00410170((int)puVar3), iVar4 != 0)) ||
               (local_10 = puVar3, iVar4 = FUN_00423ce0((int *)*param_1,-1,(int *)&local_10,1),
               iVar4 < 0)) {
              (**(code **)*puVar3)(1);
            }
            else if ((local_8 != (LPCSTR)0x0) &&
                    (iVar4 = lstrcmpA((LPCSTR)lpString1,local_8), iVar4 == 0)) {
              local_c = 0;
            }
            uVar6 = 0;
            iVar5 = iVar5 + 1;
          } while (iVar5 < *DAT_00441ad0);
          if (local_c == 0) goto LAB_00410b7d;
        }
        if (0 < *(int *)*param_1) {
          uVar6 = FUN_004100d0(*(int *)((int *)*param_1)[2]);
        }
      }
      if (-1 < (int)uVar6) goto LAB_00410b7d;
    }
LAB_00410b6c:
    FUN_00425240((int *)*param_1);
    *param_1 = 0;
  }
LAB_00410b7d:
  hHandle = local_18;
  ReleaseMutex(local_18);
LAB_00410b87:
  SetCursor(local_14);
  CloseHandle(hHandle);
  return uVar6;
}


