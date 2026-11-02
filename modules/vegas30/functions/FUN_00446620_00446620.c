/* Module: vegas30.exe
   Function: FUN_00446620
   Address: 00446620
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00446620(int param_1)

{
  uchar *puVar1;
  uchar *puVar2;
  int iVar3;
  LPCSTR pCVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar5 = 2;
  puVar2 = (uchar *)(param_1 + 0x268);
  puVar1 = puVar2;
  do {
    *puVar1 = '\0';
    puVar1 = puVar1 + 0x104;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  if (param_1 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0xac) == 0) {
    return;
  }
  switch(*(undefined4 *)(param_1 + 0xa8)) {
  case 1:
    if ((*(uint *)(param_1 + 0x9c) & 0x200) == 0) {
      puVar1 = (uchar *)_SfGetString_8(DAT_00647204,0x5074);
      _mbscpy(puVar2,puVar1);
      FUN_00445010(param_1,0,param_1 + 0x36c,0x104);
    }
    else {
      puVar1 = (uchar *)_SfGetString_8(DAT_00647204,0x5073);
      _mbscpy(puVar2,puVar1);
      puVar2 = *(uchar **)(*(int *)(param_1 + 0xac) + 0xc);
      if (puVar2 == (uchar *)0x0) {
        iVar5 = *(int *)(*(int *)(param_1 + 0xac) + 0x50);
        if (((iVar5 == 0) || (*(LPCSTR *)(iVar5 + 0x20) == (LPCSTR)0x0)) ||
           (iVar3 = lstrlenA(*(LPCSTR *)(iVar5 + 0x20)), iVar3 == 0)) {
          iVar5 = FUN_005c9450(DAT_0064b138,*(undefined4 *)(param_1 + 0xac));
          iVar5 = iVar5 + 1;
          uVar6 = _SfGetString_8(DAT_00647204,0x5075);
          SfPrintF(param_1 + 0x36c,uVar6,iVar5);
        }
        else {
          _mbscpy((uchar *)(param_1 + 0x36c),*(uchar **)(iVar5 + 0x20));
        }
      }
      else {
        _mbscpy((uchar *)(param_1 + 0x36c),puVar2);
      }
    }
    pCVar4 = (LPCSTR)_SfGetString_8(DAT_00647204,0x5073);
    SetWindowTextA(*(HWND *)(param_1 + 8),pCVar4);
    return;
  case 2:
    puVar1 = (uchar *)_SfGetString_8(DAT_00647204,0x5070);
    _mbscpy(puVar2,puVar1);
    puVar2 = (uchar *)FUN_005c6890(*(undefined4 *)(param_1 + 0xac));
    _mbscpy((uchar *)(param_1 + 0x36c),puVar2);
    uVar6 = 0x5070;
    goto LAB_00446901;
  case 3:
    puVar1 = (uchar *)_SfGetString_8(DAT_00647204,0x5071);
    _mbscpy(puVar2,puVar1);
    puVar2 = (uchar *)FUN_005c6890(*(undefined4 *)(param_1 + 0xac));
    _mbscpy((uchar *)(param_1 + 0x36c),puVar2);
    uVar6 = 0x5071;
    break;
  case 4:
    puVar1 = (uchar *)_SfGetString_8(DAT_00647204,0x5076);
    _mbscpy(puVar2,puVar1);
    *(undefined1 *)(param_1 + 0x36c) = 0;
    uVar6 = 0x5076;
    break;
  case 5:
    puVar1 = (uchar *)_SfGetString_8(DAT_00647204,0x6dc9);
    _mbscpy(puVar2,puVar1);
    iVar5 = (**(code **)(**(int **)(param_1 + 0xb0) + 0x54))
                      (*(int **)(param_1 + 0xb0),param_1 + 0x36c,0x104);
    if (iVar5 < 0) {
      FUN_00445010(param_1,0,param_1 + 0x36c,0x104);
    }
    uVar6 = 0x5073;
    goto LAB_00446901;
  case 6:
    puVar1 = (uchar *)_SfGetString_8(DAT_00647204,0x5086);
    _mbscpy(puVar2,puVar1);
    uVar6 = FUN_005f2d10();
    puVar2 = (uchar *)_SfGetFileNamePtrA_4(uVar6);
    _mbscpy((uchar *)(param_1 + 0x36c),puVar2);
    uVar6 = 0x5086;
    break;
  case 7:
  case 8:
    puVar1 = (uchar *)_SfGetString_8(DAT_00647204,0x5074);
    _mbscpy(puVar2,puVar1);
    FUN_00445010(param_1,0,param_1 + 0x36c,0x104);
    uVar6 = 0x5073;
    break;
  default:
    uVar6 = 0x5087;
LAB_00446901:
    pCVar4 = (LPCSTR)_SfGetString_8(DAT_00647204,uVar6);
    SetWindowTextA(*(HWND *)(param_1 + 8),pCVar4);
    return;
  }
  pCVar4 = (LPCSTR)_SfGetString_8(DAT_00647204,uVar6);
  SetWindowTextA(*(HWND *)(param_1 + 8),pCVar4);
  return;
}


