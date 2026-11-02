/* Module: vidcap30.exe
   Function: FUN_004576f0
   Address: 004576f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004576f0(HWND param_1,int param_2)

{
  HWND hWnd;
  LRESULT LVar1;
  int iVar2;
  undefined4 *puVar3;
  tagRECT local_30;
  undefined4 local_20 [8];
  
  hWnd = GetDlgItem(param_1,0x9c80);
  DeleteObject(*(HGDIOBJ *)(param_2 + 4));
  puVar3 = local_20;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  SendMessageA(hWnd,0x103b,*(WPARAM *)(param_2 + 0x188),param_2 + 0x110);
  local_20[0] = 2;
  LVar1 = SendMessageA(hWnd,0x1019,0,(LPARAM)local_20);
  if (LVar1 != 0) {
    puVar3 = (undefined4 *)(param_2 + 0x98);
    do {
      *puVar3 = local_20[2];
      puVar3 = puVar3 + 1;
      SendMessageA(hWnd,0x101c,0,0);
      LVar1 = SendMessageA(hWnd,0x1019,0,(LPARAM)local_20);
    } while (LVar1 != 0);
  }
  *(undefined4 *)(param_2 + 0x90) = 1;
  FUN_0041f6d0(param_2 + 0x8c,0x46a);
  GetWindowRect(param_1,&local_30);
  DAT_005bb220 = local_30.right - local_30.left;
  DAT_005bb224 = local_30.bottom - local_30.top;
  return;
}


