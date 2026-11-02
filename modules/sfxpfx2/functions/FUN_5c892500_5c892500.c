/* Module: sfxpfx2.dll
   Function: FUN_5c892500
   Address: 5c892500
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5c892500(HWND param_1)

{
  LPCSTR pCVar1;
  BYTE *pBVar2;
  BOOL bEnable;
  HWND hWnd;
  code *pcVar3;
  uchar *puVar4;
  uchar local_380 [244];
  undefined1 auStack_28c [128];
  undefined1 auStack_20c [116];
  undefined1 auStack_198 [116];
  undefined1 auStack_124 [292];
  
  if (DAT_5c8e93bc == -1) {
    pCVar1 = FUN_5c8a8180(DAT_5c8e93f8,0x3ec);
    pcVar3 = SetDlgItemTextA_exref;
    SetDlgItemTextA(param_1,0x1fe,pCVar1);
    puVar4 = (uchar *)0x0;
  }
  else if (DAT_5c8e93bc < 1) {
    pCVar1 = FUN_5c8a8180(DAT_5c8e93f8,0x3ed);
    pcVar3 = SetDlgItemTextA_exref;
    SetDlgItemTextA(param_1,0x1fe,pCVar1);
    puVar4 = FUN_5c8a8180(DAT_5c8e93f8,0x3ee);
  }
  else {
    pCVar1 = FUN_5c8a8180(DAT_5c8e93f8,0x3ef);
    pcVar3 = SetDlgItemTextA_exref;
    SetDlgItemTextA(param_1,0x1fe,pCVar1);
    pBVar2 = FUN_5c8a8180(DAT_5c8e93f8,0x3f0);
    FUN_5c8b65c0(local_380,pBVar2);
    puVar4 = local_380;
  }
  (*pcVar3)(param_1,0x1ff,puVar4);
  if (DAT_5c8e93bc != 0) {
    FUN_5c8a4400((int)auStack_28c);
    (*pcVar3)(param_1,0x1f9,auStack_20c);
    (*pcVar3)(param_1,0x1fa,auStack_198);
    (*pcVar3)(param_1,0x1fb,auStack_124);
  }
  if ((DAT_5c8e93bc == -1) || (*(int *)(DAT_5c8e93c0 + 0x680) != 0)) {
    bEnable = 0;
  }
  else {
    bEnable = 1;
  }
  hWnd = GetDlgItem(param_1,0x1fd);
  EnableWindow(hWnd,bEnable);
  return;
}


