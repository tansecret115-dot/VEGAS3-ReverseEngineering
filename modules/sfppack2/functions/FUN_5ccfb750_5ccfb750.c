/* Module: sfppack2.dll
   Function: FUN_5ccfb750
   Address: 5ccfb750
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5ccfb750(int param_1)

{
  HWND pHVar1;
  LPARAM *pLVar2;
  
  pLVar2 = &DAT_5cd62694;
  do {
    pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x14),pLVar2[-1]);
    if (pHVar1 != (HWND)0x0) {
      SendMessageA(pHVar1,0x60e,0,*pLVar2);
      SendMessageA(pHVar1,0x60f,0,pLVar2[1]);
      SendMessageA(pHVar1,0x611,0,pLVar2[2]);
    }
    pLVar2 = pLVar2 + 4;
  } while ((int)pLVar2 < 0x5cd626e4);
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x14),0x7e2);
  if (pHVar1 != (HWND)0x0) {
    SendMessageA(pHVar1,0x607,0,-0x348);
    SendMessageA(pHVar1,0x609,0,0);
    SendMessageA(pHVar1,0x60b,0,-0x348);
    SendMessageA(pHVar1,0x60d,0,0);
    SendMessageA(pHVar1,0x601,0,0x10);
    SendMessageA(pHVar1,0x60f,0,3);
    SendMessageA(pHVar1,0x619,1,0);
    SendMessageA(pHVar1,0x61c,0,7);
    SendMessageA(pHVar1,0x61d,0,7);
    SendMessageA(pHVar1,0x618,0,*(LPARAM *)(param_1 + 0x14));
    SendMessageA(pHVar1,0x623,0,*(LPARAM *)(param_1 + 0x14));
    SendMessageA(pHVar1,0x612,0,*(LPARAM *)(param_1 + 0x14));
  }
  FUN_5ccfb880(*(HWND *)(param_1 + 0x14),2);
  return 1;
}


