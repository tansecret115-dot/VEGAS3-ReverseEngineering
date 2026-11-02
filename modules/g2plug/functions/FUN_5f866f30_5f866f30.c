/* Module: g2plug.dll
   Function: FUN_5f866f30
   Address: 5f866f30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f866f30(HWND param_1,undefined4 param_2,LPVOID param_3)

{
  HWND pHVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  SetWindowLongA(param_1,-0x15,(LONG)param_3);
  *(HWND *)((int)param_3 + 0x48) = param_1;
  pHVar1 = GetDlgItem(param_1,0x12e);
  *(HWND *)((int)param_3 + 0xc4) = pHVar1;
  pHVar1 = GetDlgItem(*(HWND *)((int)param_3 + 0x48),0x12f);
  *(HWND *)((int)param_3 + 0xd8) = pHVar1;
  GetWindowRect(*(HWND *)((int)param_3 + 0x48),(LPRECT)((int)param_3 + 0x4c));
  GetWindowRect(*(HWND *)((int)param_3 + 0xc4),(LPRECT)((int)param_3 + 200));
  MapWindowPoints((HWND)0x0,*(HWND *)((int)param_3 + 0x48),(LPPOINT)((int)param_3 + 200),2);
  GetWindowRect(*(HWND *)((int)param_3 + 0xd8),(LPRECT)((int)param_3 + 0xdc));
  MapWindowPoints((HWND)0x0,*(HWND *)((int)param_3 + 0x48),(LPPOINT)((int)param_3 + 0xdc),2);
  iVar2 = *(int *)((int)param_3 + 0x54) - ((LPRECT)((int)param_3 + 0x4c))->left;
  iVar4 = *(int *)((int)param_3 + 0x58) - *(int *)((int)param_3 + 0x50);
  *(int *)((int)param_3 + 0x5c) = iVar2;
  *(int *)((int)param_3 + 100) = iVar2;
  *(int *)((int)param_3 + 0x60) = iVar4;
  *(int *)((int)param_3 + 0x68) = iVar4;
  uVar3 = FUN_5f864b00((int)param_3);
  if (uVar3 != 0) {
    FUN_5f864df0(param_3);
    FUN_5f865210((int)param_3);
    FUN_5f865350((int)param_3);
    FUN_5f865940((int)param_3,0);
  }
  FUN_5f82c620(param_1,(HWND)0x0,(int *)0x0,0x8001);
  if ((*(HWND *)((int)param_3 + 0x84) != (HWND)0x0) && (*(HWND *)((int)param_3 + 0xd8) != (HWND)0x0)
     ) {
    SetWindowPos(*(HWND *)((int)param_3 + 0x84),*(HWND *)((int)param_3 + 0xd8),0,0,0,0,0x13);
    if (*(HWND *)((int)param_3 + 0x9c) != (HWND)0x0) {
      SetWindowPos(*(HWND *)((int)param_3 + 0x9c),*(HWND *)((int)param_3 + 0x84),0,0,0,0,0x13);
    }
  }
  return 1;
}


