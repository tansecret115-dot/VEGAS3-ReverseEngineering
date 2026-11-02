/* Module: mp3plug.dll
   Function: FUN_5f6863f0
   Address: 5f6863f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f6863f0(HWND param_1)

{
  undefined4 *puVar1;
  HWND hWnd;
  int iVar2;
  undefined4 local_1c [7];
  
  hWnd = GetDlgItem(param_1,0x405);
  if (hWnd != (HWND)0x0) {
    puVar1 = local_1c;
    for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    }
    local_1c[0] = 8;
    SendMessageA(hWnd,0x1305,0,(LPARAM)local_1c);
    return 1;
  }
  return 1;
}


