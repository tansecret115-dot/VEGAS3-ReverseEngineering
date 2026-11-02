/* Module: aifplug.dll
   Function: FUN_5fbe97a0
   Address: 5fbe97a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5fbe97a0(undefined4 param_1,int *param_2)

{
  char cVar1;
  SIZE_T SVar2;
  int iVar3;
  BOOL BVar4;
  DWORD DVar5;
  HGLOBAL pvVar6;
  LPCWSTR lpWideCharStr;
  LPSTR lpMultiByteStr;
  int unaff_ESI;
  int iVar7;
  code *pcVar8;
  int unaff_EDI;
  DWORD DStack_b8;
  undefined4 *puStack_b4;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uStack_94;
  LPCWSTR pWStack_90;
  int *piStack_8c;
  int iStack_88;
  DWORD aDStack_84 [3];
  int local_64 [2];
  SIZE_T SStack_5c;
  int iStack_58;
  HANDLE pvStack_54;
  int *piStack_50;
  SIZE_T aSStack_4c [2];
  HANDLE pvStack_44;
  int iStack_2c;
  int iStack_28;
  HANDLE pvStack_20;
  
  local_64[0] = 4;
  if (param_2 != (int *)0x0) {
    aDStack_84[2] = 0;
    aDStack_84[1] = 0;
    aDStack_84[0] = 0;
    iStack_88 = 0;
    piStack_8c = param_2;
    pWStack_90 = L"ᎋ䒍ᰤ赐⑌橀儌ｓ౒삅蔏Н";
    (**(code **)(*param_2 + 0x14))();
    pWStack_90 = (LPCWSTR)&stack0xffffff90;
    uStack_94 = 0xc;
    iVar3 = (**(code **)(*param_2 + 0xc))();
    if ((iVar3 == 0) && (iStack_58 != 0)) {
      SetFilePointer(pvStack_20,4,(PLONG)0x0,0);
      puStack_b4 = (undefined4 *)0x5fbe9812;
      BVar4 = ReadFile(pvStack_20,&stack0xffffff8c,4,(LPDWORD)&stack0xffffff88,(LPOVERLAPPED)0x0);
      if (BVar4 == 0) {
        return -0x7ffb1ff8;
      }
      if (unaff_EDI != 4) {
        return -0x7ffb1ff8;
      }
      SetFilePointer(pvStack_20,unaff_ESI + 8,(PLONG)0x0,0);
      aDStack_84[2] = 0x5453494c;
      iVar3 = FUN_5fbe0100(pvStack_20);
      if (iVar3 < 0) {
        return iVar3;
      }
      DVar5 = SetFilePointer(pvStack_20,0,(PLONG)0x0,1);
      local_64[0] = DVar5 - 4;
      aDStack_84[2] = 0x6c746461;
      puStack_b4 = (undefined4 *)0x5fbe989a;
      BVar4 = WriteFile(pvStack_20,aDStack_84 + 2,4,aDStack_84,(LPOVERLAPPED)0x0);
      if (BVar4 == 0) {
        return -0x7ffb1ff7;
      }
      piStack_8c = (int *)0x0;
      if (0 < iStack_58) {
        do {
          if (iVar3 < 0) break;
          iVar3 = (**(code **)(*param_2 + 0xc))();
          if (iVar3 == 0) {
            if (iStack_2c != 0) {
              pvStack_54 = (HANDLE)((int)piStack_8c + 1);
              piStack_50 = (int *)0x0;
              aSStack_4c[0] = 0;
              aSStack_4c[1] = 0;
              pvStack_44 = (HANDLE)0x0;
              piStack_50 = (int *)ftol();
              aSStack_4c[0] = 0x206e6772;
              aSStack_4c[1] = 0;
              pvStack_44 = (HANDLE)0x0;
              aDStack_84[2] = 0x7478746c;
              iVar3 = FUN_5fbe0100(pvStack_20);
              if (iVar3 < 0) {
                return iVar3;
              }
              puStack_b4 = (undefined4 *)0x5fbe9987;
              BVar4 = WriteFile(pvStack_20,&pvStack_54,0x14,aDStack_84,(LPOVERLAPPED)0x0);
              if (BVar4 == 0) {
                return -0x7ffb1ff7;
              }
              iStack_88 = iStack_88 + 0x1c;
            }
            if (iStack_28 != 0) {
              puStack_b4 = (undefined4 *)0x5fbe99a7;
              (**(code **)(*param_2 + 0x14))();
            }
          }
          piStack_8c = (int *)((int)piStack_8c + 1);
        } while ((int)piStack_8c < iStack_58);
      }
      uVar11 = 0;
      iVar10 = 0;
      puStack_b4 = (undefined4 *)0x5fbe99c8;
      (**(code **)(*param_2 + 0x14))();
      puStack_b4 = &uStack_94;
      DStack_b8 = 0xc;
      iVar3 = (**(code **)(*param_2 + 0xc))(param_2,&stack0xffffff8c);
      iVar9 = 0;
      if (0 < (int)aDStack_84[2]) {
        do {
          if (iVar3 < 0) break;
          iVar3 = (**(code **)(*param_2 + 0xc))(param_2,local_64,0x1c,&stack0xffffff5c);
          if ((iVar3 == 0) && (aSStack_4c[0] != 0)) {
            pvVar6 = GlobalAlloc(0x42,aSStack_4c[0]);
            lpWideCharStr = GlobalLock(pvVar6);
            pWStack_90 = lpWideCharStr;
            if (lpWideCharStr == (LPCWSTR)0x0) {
              iVar3 = -0x7ff8fff2;
              pvStack_20 = pvStack_44;
            }
            else {
              iVar3 = (**(code **)(*param_2 + 0xc))
                                (param_2,lpWideCharStr,aSStack_4c[0],&stack0xffffff5c);
              pcVar8 = GlobalHandle_exref;
              if (iVar3 == 0) {
                pvVar6 = GlobalAlloc(0x42,SStack_5c);
                lpMultiByteStr = GlobalLock(pvVar6);
                SVar2 = SStack_5c;
                if (lpMultiByteStr == (LPSTR)0x0) {
                  iVar3 = -0x7ff8fff2;
                  pcVar8 = GlobalHandle_exref;
                }
                else {
                  if (*lpWideCharStr == L'\0') {
                    *lpMultiByteStr = '\0';
                  }
                  else {
                    WideCharToMultiByte(0,0,lpWideCharStr,-1,lpMultiByteStr,SStack_5c,(LPCSTR)0x0,
                                        (LPBOOL)0x0);
                  }
                  lpMultiByteStr[SVar2 - 1] = '\0';
                  iVar7 = 0;
                  cVar1 = *lpMultiByteStr;
                  while (cVar1 != '\0') {
                    iVar3 = iVar7 + 1;
                    iVar7 = iVar7 + 1;
                    cVar1 = lpMultiByteStr[iVar3];
                  }
                  iVar9 = 0x6c62616c;
                  iVar3 = FUN_5fbe0100(pvStack_54);
                  if (((iVar3 < 0) ||
                      (BVar4 = WriteFile(pvStack_54,&stack0xffffff5c,4,&DStack_b8,(LPOVERLAPPED)0x0)
                      , BVar4 == 0)) ||
                     (BVar4 = WriteFile(pvStack_54,lpMultiByteStr,iVar7 + 1,&DStack_b8,
                                        (LPOVERLAPPED)0x0), BVar4 == 0)) {
                    iVar3 = -0x7ffb1ff7;
                  }
                  else if ((iVar7 + 0xdU & 1) != 0) {
                    aSStack_4c[0] = aSStack_4c[0] & 0xffffff00;
                    WriteFile(pvStack_54,aSStack_4c,1,&DStack_b8,(LPOVERLAPPED)0x0);
                  }
                  pcVar8 = GlobalHandle_exref;
                  pvVar6 = GlobalHandle(lpMultiByteStr);
                  GlobalUnlock(pvVar6);
                  pvVar6 = GlobalHandle(lpMultiByteStr);
                  GlobalFree(pvVar6);
                  param_2 = piStack_50;
                }
              }
              uVar12 = uVar11;
              pvVar6 = (HGLOBAL)(*pcVar8)(uVar11);
              GlobalUnlock(pvVar6);
              pvVar6 = (HGLOBAL)(*pcVar8)(uVar11);
              GlobalFree(pvVar6);
              pvStack_20 = pvStack_44;
              uVar11 = uVar12;
            }
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)aDStack_84[2]);
      }
      SetFilePointer(pvStack_20,iStack_88,(PLONG)0x0,0);
      BVar4 = WriteFile(pvStack_20,&stack0xffffff54,4,(LPDWORD)&stack0xffffff58,(LPOVERLAPPED)0x0);
      if (BVar4 != 0) {
        FUN_5fbe0020(pvStack_20,iVar10 + 8);
        return iVar3;
      }
      return -0x7ffb1ff7;
    }
  }
  return 0;
}


