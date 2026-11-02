/* Module: sfppack3.dll
   Function: FUN_5cc3b9f0
   Address: 5cc3b9f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5cc3b9f0(int param_1)

{
  HWND pHVar1;
  LPARAM *pLVar2;
  
  pLVar2 = &DAT_5cc942a4;
  do {
    pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x14),pLVar2[-1]);
    if (pHVar1 != (HWND)0x0) {
      SendMessageA(pHVar1,0x60e,0,*pLVar2);
      SendMessageA(pHVar1,0x60f,0,pLVar2[1]);
      SendMessageA(pHVar1,0x611,0,pLVar2[2]);
    }
    pLVar2 = pLVar2 + 4;
  } while ((int)pLVar2 < 0x5cc942d4);
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x14),0xbc7);
  if (pHVar1 != (HWND)0x0) {
    SendMessageA(pHVar1,0x607,0,-100);
    SendMessageA(pHVar1,0x609,0,100);
    SendMessageA(pHVar1,0x60b,0,0);
    SendMessageA(pHVar1,0x60d,0,1000);
    SendMessageA(pHVar1,0x601,0,0x20);
    SendMessageA(pHVar1,0x60f,0,2);
    SendMessageA(pHVar1,0x619,0,0);
    SendMessageA(pHVar1,0x61c,0,2);
    SendMessageA(pHVar1,0x61d,0,2);
    SendMessageA(pHVar1,0x618,0,*(LPARAM *)(param_1 + 0x14));
    SendMessageA(pHVar1,0x623,0,*(LPARAM *)(param_1 + 0x14));
    SendMessageA(pHVar1,0x612,0,*(LPARAM *)(param_1 + 0x14));
  }
  FUN_5cc3bb10(*(HWND *)(param_1 + 0x14),2);
  return 1;
}


