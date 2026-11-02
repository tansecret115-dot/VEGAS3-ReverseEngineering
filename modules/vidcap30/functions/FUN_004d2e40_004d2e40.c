/* Module: vidcap30.exe
   Function: FUN_004d2e40
   Address: 004d2e40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004d2e40(HWND param_1,undefined4 param_2,int param_3)

{
  HWND pHVar1;
  int iVar2;
  int iVar3;
  
  SetWindowLongA(param_1,-0x15,param_3);
  *(HWND *)(param_3 + 0x48) = param_1;
  pHVar1 = GetDlgItem(param_1,0x12e);
  *(HWND *)(param_3 + 0xc4) = pHVar1;
  pHVar1 = GetDlgItem(*(HWND *)(param_3 + 0x48),0x12f);
  *(HWND *)(param_3 + 0xd8) = pHVar1;
  GetWindowRect(*(HWND *)(param_3 + 0x48),(LPRECT)(param_3 + 0x4c));
  GetWindowRect(*(HWND *)(param_3 + 0xc4),(LPRECT)(param_3 + 200));
  MapWindowPoints((HWND)0x0,*(HWND *)(param_3 + 0x48),(LPPOINT)(param_3 + 200),2);
  GetWindowRect(*(HWND *)(param_3 + 0xd8),(LPRECT)(param_3 + 0xdc));
  MapWindowPoints((HWND)0x0,*(HWND *)(param_3 + 0x48),(LPPOINT)(param_3 + 0xdc),2);
  iVar2 = *(int *)(param_3 + 0x54) - ((LPRECT)(param_3 + 0x4c))->left;
  iVar3 = *(int *)(param_3 + 0x58) - *(int *)(param_3 + 0x50);
  *(int *)(param_3 + 0x5c) = iVar2;
  *(int *)(param_3 + 100) = iVar2;
  *(int *)(param_3 + 0x60) = iVar3;
  *(int *)(param_3 + 0x68) = iVar3;
  iVar2 = FUN_004d0a10(param_3);
  if (iVar2 != 0) {
    FUN_004d0d00(param_3);
    FUN_004d1120(param_3);
    FUN_004d1260(param_3);
    FUN_004d1850(param_3,0);
  }
  _SfWndCenter_16(param_1,0,0,0x8001);
  if ((*(HWND *)(param_3 + 0x84) != (HWND)0x0) && (*(HWND *)(param_3 + 0xd8) != (HWND)0x0)) {
    SetWindowPos(*(HWND *)(param_3 + 0x84),*(HWND *)(param_3 + 0xd8),0,0,0,0,0x13);
    if (*(HWND *)(param_3 + 0x9c) != (HWND)0x0) {
      SetWindowPos(*(HWND *)(param_3 + 0x9c),*(HWND *)(param_3 + 0x84),0,0,0,0,0x13);
    }
  }
  return 1;
}


