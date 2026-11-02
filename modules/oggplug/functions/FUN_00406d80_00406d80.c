/* Module: oggplug.dll
   Function: FUN_00406d80
   Address: 00406d80
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00406d80(int param_1)

{
  int iVar1;
  int *piVar2;
  HWND hWnd;
  BYTE *pBVar3;
  WPARAM wParam;
  int *local_12c;
  WPARAM local_128;
  int local_124;
  int *local_120;
  int local_11c [6];
  uchar local_104 [260];
  
  hWnd = GetDlgItem(*(HWND *)(param_1 + 0x10),0x7d7);
  local_11c[0] = 96000;
  local_11c[1] = 0x1f400;
  iVar1 = *(int *)(*(int *)(param_1 + 0x30) + 0x424);
  local_11c[2] = 160000;
  local_11c[3] = 0x2ee00;
  local_11c[4] = 0x3e800;
  piVar2 = *(int **)(iVar1 + 0x3e);
  local_11c[5] = 350000;
  if ((piVar2 == (int *)0x0) || (local_120 = piVar2, 3 < *(uint *)(iVar1 + 0x3a))) {
    SendMessageA(hWnd,0x14b,0,0);
    local_12c = local_11c;
    local_128 = 0;
    local_124 = 6;
    do {
      iVar1 = *local_12c;
      pBVar3 = (BYTE *)FUN_0040ae50(DAT_00510c0c,0x3f7);
      FUN_00410930(local_104,pBVar3);
      wParam = SendMessageA(hWnd,0x143,0,(LPARAM)local_104);
      SendMessageA(hWnd,0x151,wParam,iVar1);
      if (*local_120 == iVar1) {
        local_128 = wParam;
      }
      local_12c = local_12c + 1;
      local_124 = local_124 + -1;
    } while (local_124 != 0);
    SendMessageA(hWnd,0x14e,local_128,0);
  }
  return;
}


