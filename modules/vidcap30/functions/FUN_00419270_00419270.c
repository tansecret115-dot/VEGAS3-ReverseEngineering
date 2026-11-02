/* Module: vidcap30.exe
   Function: FUN_00419270
   Address: 00419270
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00419270(HWND param_1,int param_2)

{
  HWND hWnd;
  int iVar1;
  bool bVar2;
  undefined1 local_50 [80];
  
  hWnd = GetDlgItem(param_1,0x9c4a);
  bVar2 = false;
  SendMessageA(hWnd,0x14b,0,0);
  iVar1 = _SfLoadString_16(DAT_005ba2a0,0x8c,local_50,0x50);
  if (iVar1 != 0) {
    SendMessageA(hWnd,0x143,0,(LPARAM)local_50);
    iVar1 = lstrcmpA((LPCSTR)(param_2 + 0x494),PTR_DAT_005b3dd8);
    if (iVar1 == 0) {
      SendMessageA(hWnd,0x14e,0,0);
      bVar2 = true;
    }
  }
  if (!bVar2) {
    SendMessageA(hWnd,0x14e,0,0);
  }
  return;
}


