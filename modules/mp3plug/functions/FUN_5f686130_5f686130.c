/* Module: mp3plug.dll
   Function: FUN_5f686130
   Address: 5f686130
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f686130(HWND param_1,undefined4 param_2)

{
  HWND hWnd;
  undefined4 *puVar1;
  int iVar2;
  CHAR **ppCVar3;
  HWND local_128;
  undefined4 local_124;
  undefined4 local_120;
  CHAR *local_11c [4];
  int local_10c;
  undefined4 *local_104;
  CHAR local_100 [256];
  
  hWnd = GetDlgItem(param_1,0x405);
  SendMessageA(hWnd,0x1309,0,0);
  if (hWnd != (HWND)0x0) {
    puVar1 = malloc(0x14);
    if (puVar1 != (undefined4 *)0x0) {
      puVar1[4] = param_2;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0x3ed;
      puVar1[3] = &LAB_5f683c80;
      ppCVar3 = local_11c;
      for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
        *ppCVar3 = (CHAR *)0x0;
        ppCVar3 = ppCVar3 + 1;
      }
      local_11c[0] = (CHAR *)0x9;
      FUN_5f69dd80(DAT_5f74d2f4,0x83,local_100,0xff);
      local_11c[3] = local_100;
      local_10c = lstrlenA(local_100);
      local_10c = local_10c + 1;
      local_104 = puVar1;
      SendMessageA(hWnd,0x1307,0,(LPARAM)local_11c);
    }
    puVar1 = malloc(0x14);
    if (puVar1 != (undefined4 *)0x0) {
      puVar1[4] = param_2;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 1000;
      puVar1[3] = FUN_5f6848a0;
      ppCVar3 = local_11c;
      for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
        *ppCVar3 = (CHAR *)0x0;
        ppCVar3 = ppCVar3 + 1;
      }
      local_11c[0] = (CHAR *)0x9;
      FUN_5f69dd80(DAT_5f74d2f4,0x84,local_100,0xff);
      local_11c[3] = local_100;
      local_10c = lstrlenA(local_100);
      local_10c = local_10c + 1;
      local_104 = puVar1;
      SendMessageA(hWnd,0x1307,1,(LPARAM)local_11c);
    }
  }
  local_124 = 0;
  local_120 = 0xfffffdd9;
  local_128 = hWnd;
  SendMessageA(param_1,0x4e,0x405,(LPARAM)&local_128);
  ShowWindow(param_1,5);
  return;
}


