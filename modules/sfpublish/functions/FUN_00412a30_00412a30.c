/* Module: sfpublish.dll
   Function: FUN_00412a30
   Address: 00412a30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00412a30(uchar *param_1,uint *param_2)

{
  undefined4 uVar1;
  HANDLE hHandle;
  HCURSOR pHVar2;
  DWORD DVar3;
  int iVar4;
  HGLOBAL pvVar5;
  uchar *_Source;
  uint uVar6;
  uint uVar7;
  LPBYTE pBVar8;
  uchar *puVar9;
  uint uVar10;
  LPCSTR pCVar11;
  int iVar12;
  
  uVar1 = 0x80070057;
  if (param_2 != (uint *)0x0) {
    if ((param_1 != (uchar *)0x0) && (*param_2 != 0)) {
      *param_1 = '\0';
    }
    uVar1 = 0x80004005;
    hHandle = CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,0,"Sonic Foundry Publishing Provider Guard");
    if (hHandle != (HANDLE)0x0) {
      pHVar2 = (HCURSOR)FUN_00423b10(0x7f02);
      pHVar2 = SetCursor(pHVar2);
      DVar3 = WaitForSingleObject(hHandle,0xffffffff);
      if (DVar3 != 0x102) {
        iVar12 = 1;
        pCVar11 = (LPCSTR)0x0;
        uVar10 = 0;
        pBVar8 = (LPBYTE)0x0;
        uVar6 = 1;
        iVar4 = FUN_00401310();
        iVar4 = FUN_0041f830(iVar4,uVar6,pBVar8,uVar10,pCVar11,iVar12);
        if (iVar4 == 0) {
          uVar1 = 1;
        }
        else {
          uVar6 = iVar4 + 1;
          pvVar5 = GlobalAlloc(0x42,uVar6);
          _Source = GlobalLock(pvVar5);
          if (_Source == (uchar *)0x0) {
            uVar1 = 0x8007000e;
          }
          else {
            iVar12 = 1;
            pCVar11 = (LPCSTR)0x0;
            uVar7 = 1;
            puVar9 = _Source;
            uVar10 = uVar6;
            iVar4 = FUN_00401310();
            FUN_0041f830(iVar4,uVar7,puVar9,uVar10,pCVar11,iVar12);
            if (*param_2 < uVar6) {
              uVar1 = 0x8004e03c;
            }
            else {
              _mbscpy(param_1,_Source);
              uVar1 = 0;
            }
            *param_2 = uVar6;
            pvVar5 = GlobalHandle(_Source);
            GlobalUnlock(pvVar5);
            pvVar5 = GlobalHandle(_Source);
            GlobalFree(pvVar5);
          }
        }
      }
      SetCursor(pHVar2);
      CloseHandle(hHandle);
      return uVar1;
    }
    uVar1 = 0x80004005;
  }
  return uVar1;
}


