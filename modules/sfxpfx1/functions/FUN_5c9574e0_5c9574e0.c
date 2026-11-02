/* Module: sfxpfx1.dll
   Function: FUN_5c9574e0
   Address: 5c9574e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5c9574e0(HWND param_1)

{
  undefined4 *puVar1;
  HWND pHVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  HWND hWnd;
  UINT Msg;
  char *pcVar6;
  CHAR local_104 [260];
  
  puVar1 = (undefined4 *)GetWindowLongA(param_1,0);
  pHVar2 = GetCapture();
  if (param_1 == pHVar2) {
    ReleaseCapture();
  }
  uVar3 = FUN_5c957330(puVar1,(LONG *)0x0);
  if ((uVar3 == puVar1[1]) && (0 < (int)uVar3)) {
    iVar4 = GetWindowTextA(param_1,local_104,0x104);
    if (iVar4 == 0) {
      uVar5 = GetDlgCtrlID((HWND)*puVar1);
      if (uVar3 != uVar5) goto LAB_5c95758d;
      uVar3 = 0;
      Msg = 0x614;
      pHVar2 = (HWND)0x0;
    }
    else {
      if (puVar1[2] == 0) {
        uVar5 = GetDlgCtrlID((HWND)*puVar1);
        if (uVar3 == uVar5) {
          pcVar6 = (char *)0x68;
          pHVar2 = GetParent(param_1);
          FUN_5c966d70(pHVar2,pcVar6);
          goto LAB_5c95758d;
        }
      }
      uVar3 = uVar3 & 0xffff;
      Msg = 0x111;
      pHVar2 = param_1;
    }
    hWnd = GetParent(param_1);
    PostMessageA(hWnd,Msg,uVar3,(LPARAM)pHVar2);
  }
LAB_5c95758d:
  puVar1[1] = 0xffffffff;
  InvalidateRect(param_1,(RECT *)0x0,1);
  return;
}


