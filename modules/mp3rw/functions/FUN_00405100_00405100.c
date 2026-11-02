/* Module: mp3rw.dll
   Function: FUN_00405100
   Address: 00405100
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00405100(HWND param_1)

{
  HWND hWnd;
  BYTE *pBVar1;
  uint *puVar2;
  uchar local_40 [64];
  
  hWnd = GetDlgItem(param_1,0x1b8a);
  if (hWnd != (HWND)0x0) {
    SendMessageA(hWnd,0x143,0,0x490864);
    puVar2 = &DAT_004a4b18;
    do {
      pBVar1 = FUN_0041f9f0(DAT_004a811c,*puVar2);
      FUN_00420fe0(local_40,pBVar1);
      SendMessageA(hWnd,0x143,0,(LPARAM)local_40);
      puVar2 = puVar2 + 2;
    } while (puVar2 < &DAT_004a52c0);
    SendMessageA(hWnd,0x14e,0,0);
    return 1;
  }
  return 0;
}


