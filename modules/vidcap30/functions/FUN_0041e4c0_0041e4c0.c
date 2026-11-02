/* Module: vidcap30.exe
   Function: FUN_0041e4c0
   Address: 0041e4c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041e4c0(HWND param_1,HWND param_2)

{
  LRESULT LVar1;
  HWND pHVar2;
  short *psVar3;
  int iVar4;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  BOOL BVar5;
  
  LVar1 = SendMessageA(param_2,0x147,0,0);
  psVar3 = *(short **)(DAT_005bc2b8 + LVar1 * 4);
  pHVar2 = GetDlgItem(param_1,0x9c4b);
  SendMessageA(pHVar2,0x184,0,0);
  iVar4 = 0;
  do {
    if (*psVar3 == 0) break;
    SendMessageA(pHVar2,0x180,0,*(LPARAM *)(psVar3 + 2));
    iVar4 = iVar4 + 1;
    psVar3 = psVar3 + 10;
  } while (iVar4 < 200);
  lParam = 0;
  wParam = 0;
  Msg = 0x184;
  pHVar2 = GetDlgItem(param_1,0x9c4c);
  SendMessageA(pHVar2,Msg,wParam,lParam);
  BVar5 = 0;
  pHVar2 = GetDlgItem(param_1,40000);
  EnableWindow(pHVar2,BVar5);
  BVar5 = 0;
  pHVar2 = GetDlgItem(param_1,0x9c41);
  EnableWindow(pHVar2,BVar5);
  return;
}


