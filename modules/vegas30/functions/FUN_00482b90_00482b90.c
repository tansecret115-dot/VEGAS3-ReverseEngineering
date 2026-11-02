/* Module: vegas30.exe
   Function: FUN_00482b90
   Address: 00482b90
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_00482b90(undefined4 param_1,uchar *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  LPCSTR lpString;
  HGLOBAL pvVar4;
  LPCSTR pCVar5;
  LPCSTR pMem;
  bool bVar6;
  undefined4 uVar7;
  uchar local_104 [260];
  
  bVar6 = true;
  iVar1 = FUN_00480860(param_2,local_104,0x104);
  if (iVar1 != 0) {
    iVar1 = lstrcmpA((LPCSTR)param_2,(LPCSTR)local_104);
    if (iVar1 != 0) {
      lpString = (LPCSTR)_SfGetString_8(DAT_00647204,0x6e7a);
      iVar1 = lstrlenA(lpString);
      pvVar4 = GlobalAlloc(0x40,iVar1 + 0x104);
      pCVar5 = GlobalLock(pvVar4);
      pMem = lpString;
      if (pCVar5 != (LPCSTR)0x0) {
        SfPrintF(pCVar5,lpString,local_104);
        pMem = pCVar5;
      }
      uVar3 = 0x34;
      uVar2 = _SfGetString_8(DAT_00647204,0x6e79);
      iVar1 = _SfMessageBox_16(param_1,pMem,uVar2,uVar3);
      bVar6 = iVar1 == 6;
      if (bVar6) {
        _mbscpy(param_2,local_104);
      }
      if (pMem != lpString) {
        pvVar4 = GlobalHandle(pMem);
        GlobalUnlock(pvVar4);
        pvVar4 = GlobalHandle(pMem);
        GlobalFree(pvVar4);
      }
    }
    return bVar6;
  }
  uVar7 = 0x30;
  uVar2 = _SfGetString_8(DAT_00647204,0x6e79);
  uVar3 = _SfGetString_8(DAT_00647204,0x6e78);
  _SfMessageBox_16(param_1,uVar3,uVar2,uVar7);
  return false;
}


