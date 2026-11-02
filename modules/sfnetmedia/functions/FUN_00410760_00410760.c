/* Module: sfnetmedia.dll
   Function: FUN_00410760
   Address: 00410760
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00410760(uchar *param_1,uint *param_2)

{
  HANDLE hHandle;
  HCURSOR pHVar1;
  DWORD DVar2;
  int iVar3;
  HGLOBAL pvVar4;
  uchar *_Source;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  LPBYTE pBVar8;
  uchar *puVar9;
  uint uVar10;
  LPCSTR pCVar11;
  int iVar12;
  
  uVar5 = 0;
  hHandle = CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,0,"Sonic Foundry NetMedia Provider Guard");
  if (hHandle != (HANDLE)0x0) {
    pHVar1 = (HCURSOR)FUN_0041b280(0x7f02);
    pHVar1 = SetCursor(pHVar1);
    DVar2 = WaitForSingleObject(hHandle,3000);
    if (DVar2 != 0x102) {
      iVar12 = 1;
      pCVar11 = (LPCSTR)0x0;
      uVar10 = 0;
      pBVar8 = (LPBYTE)0x0;
      uVar6 = 1;
      iVar3 = FUN_00401310();
      iVar3 = FUN_0041a4a0(iVar3,uVar6,pBVar8,uVar10,pCVar11,iVar12);
      if (iVar3 == 0) {
        uVar5 = 1;
      }
      else {
        uVar6 = iVar3 + 1;
        pvVar4 = GlobalAlloc(0x42,uVar6);
        _Source = GlobalLock(pvVar4);
        if (_Source == (uchar *)0x0) {
          uVar5 = 0x8007000e;
        }
        else {
          iVar12 = 1;
          pCVar11 = (LPCSTR)0x0;
          uVar7 = 1;
          puVar9 = _Source;
          uVar10 = uVar6;
          iVar3 = FUN_00401310();
          FUN_0041a4a0(iVar3,uVar7,puVar9,uVar10,pCVar11,iVar12);
          if (*param_2 < uVar6) {
            *param_2 = uVar6;
            uVar5 = 0x8004e03c;
          }
          else {
            _mbscpy(param_1,_Source);
          }
          pvVar4 = GlobalHandle(_Source);
          GlobalUnlock(pvVar4);
          pvVar4 = GlobalHandle(_Source);
          GlobalFree(pvVar4);
        }
      }
    }
    SetCursor(pHVar1);
    CloseHandle(hHandle);
    return uVar5;
  }
  return 0;
}


