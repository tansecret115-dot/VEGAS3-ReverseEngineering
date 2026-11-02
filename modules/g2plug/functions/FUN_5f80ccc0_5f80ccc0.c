/* Module: g2plug.dll
   Function: FUN_5f80ccc0
   Address: 5f80ccc0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f80ccc0(HWND param_1,uint param_2)

{
  HWND hWnd;
  int iVar1;
  int iVar2;
  CHAR local_40 [64];
  
  iVar2 = 0;
  if (param_2 < 2) {
    param_2 = 1;
  }
  hWnd = GetDlgItem(param_1,0x3ee);
  if (hWnd != (HWND)0x0) {
    SendMessageA(hWnd,0x184,0,0);
    for (; (param_2 != 0 && (iVar2 < 9)); iVar2 = iVar2 + 1) {
      if ((param_2 & 1) != 0) {
        iVar1 = FUN_5f80c9f0(iVar2);
        FUN_5f8172d0(DAT_5f87746c,iVar1 + 0x37f,local_40,0x40);
        SendMessageA(hWnd,0x180,0,(LPARAM)local_40);
      }
      param_2 = (int)param_2 >> 1;
    }
  }
  return;
}


