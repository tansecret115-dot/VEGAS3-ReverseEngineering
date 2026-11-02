/* Module: vegas30.exe
   Function: FUN_0050cfd0
   Address: 0050cfd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0050cfd0(int param_1)

{
  uchar *puVar1;
  LPCSTR pCVar2;
  uchar *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int local_10;
  int local_c;
  
  if (((param_1 != 0) && ((*(byte *)(param_1 + 0xa8) & 1) != 0)) && (*(int *)(param_1 + 0x98) != 0))
  {
    FUN_0050cf80(param_1,&local_10);
    puVar3 = (uchar *)(param_1 + 0x294);
    iVar6 = 2;
    puVar1 = puVar3;
    do {
      *puVar1 = '\0';
      puVar1 = puVar1 + 0x104;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    if (local_10 == 1) {
      pCVar2 = (LPCSTR)_SfGetString_8(DAT_00647204,0x6996);
      SetWindowTextA(*(HWND *)(param_1 + 8),pCVar2);
      puVar1 = (uchar *)_SfGetString_8(DAT_00647204,0x6996);
      _mbscpy(puVar3,puVar1);
      if (*(uchar **)(local_c + 0xc) != (uchar *)0x0) {
        _mbscpy((uchar *)(param_1 + 0x398),*(uchar **)(local_c + 0xc));
        return;
      }
      iVar6 = *(int *)(local_c + 0x50);
      if ((iVar6 != 0) && (*(LPCSTR *)(iVar6 + 0x20) != (LPCSTR)0x0)) {
        iVar4 = lstrlenA(*(LPCSTR *)(iVar6 + 0x20));
        if (iVar4 != 0) {
          _mbscpy((uchar *)(param_1 + 0x398),*(uchar **)(iVar6 + 0x20));
          return;
        }
      }
      iVar6 = FUN_005c9450(DAT_0064b138,local_c);
      iVar6 = iVar6 + 1;
      uVar5 = _SfGetString_8(DAT_00647204,0x5075);
      SfPrintF(param_1 + 0x398,uVar5,iVar6);
    }
    else if (local_10 == 2) {
      pCVar2 = (LPCSTR)_SfGetString_8(DAT_00647204,0x6995);
      SetWindowTextA(*(HWND *)(param_1 + 8),pCVar2);
      puVar1 = (uchar *)_SfGetString_8(DAT_00647204,0x6995);
      _mbscpy(puVar3,puVar1);
      puVar3 = (uchar *)FUN_005c6890(local_c);
      _mbscpy((uchar *)(param_1 + 0x398),puVar3);
      return;
    }
  }
  return;
}


