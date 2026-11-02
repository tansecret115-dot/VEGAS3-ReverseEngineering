/* Module: vidcap30.exe
   Function: FUN_00415ac0
   Address: 00415ac0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00415ac0(HWND param_1)

{
  HWND hWnd;
  LRESULT LVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  WPARAM wParam;
  WPARAM *pWVar5;
  WPARAM local_28 [8];
  int local_8;
  
  hWnd = GetDlgItem(param_1,0x9c4b);
  LVar1 = SendMessageA(hWnd,0x1004,0,0);
  wParam = 0;
  if (0 < LVar1) {
    do {
      pWVar5 = local_28;
      for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
        *pWVar5 = 0;
        pWVar5 = pWVar5 + 1;
      }
      local_28[0] = 4;
      local_28[1] = wParam;
      SendMessageA(hWnd,0x1005,0,(LPARAM)local_28);
      iVar4 = local_8;
      uVar2 = SendMessageA(hWnd,0x102c,wParam,0xf000);
      if ((uVar2 >> 0xc == 1) || ((*(byte *)(iVar4 + 0x38) & 0x20) == 0)) {
        uVar3 = 0;
      }
      else {
        uVar3 = 4;
      }
      FUN_00443b20(iVar4,uVar3,4);
      wParam = wParam + 1;
    } while ((int)wParam < LVar1);
  }
  return;
}


