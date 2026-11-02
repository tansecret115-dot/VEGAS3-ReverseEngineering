/* Module: vegas30k.dll
   Function: FUN_0112f450
   Address: 0112f450
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0112f450(int param_1,int param_2,int param_3,HWND param_4,uchar *param_5)

{
  uchar uVar1;
  LRESULT LVar2;
  int iVar3;
  uchar *puVar4;
  WPARAM wParam;
  int iVar5;
  uchar *puVar6;
  uchar *lpsz;
  WPARAM local_128;
  undefined4 local_124;
  uint local_120;
  int local_11c;
  uchar *local_118;
  uchar local_104;
  uchar local_103 [259];
  
  wParam = 0;
  local_124 = 2;
  if (((*(uint *)(param_1 + 0x4e0) & 0x100000) != 0) &&
     (LVar2 = SendMessageA(param_4,0x1019,0,(LPARAM)&local_124), LVar2 != 0)) {
    do {
      wParam = wParam + 1;
      LVar2 = SendMessageA(param_4,0x1019,wParam,(LPARAM)&local_124);
    } while (LVar2 != 0);
    if (0 < (int)wParam) {
      SendMessageA(param_4,0x103b,wParam,param_2 * 0x60 + 0x8a8 + param_1);
    }
  }
  iVar5 = 0;
  iVar3 = SendMessageA(param_4,0x1019,0,(LPARAM)&local_124);
  while (iVar3 != 0) {
    if (-1 < param_2) {
      iVar3 = iVar5 + param_2 * 0x1a;
      iVar5 = iVar5 + 1;
      *(undefined2 *)(param_1 + 0x708 + iVar3 * 2) = (undefined2)local_11c;
    }
    SendMessageA(param_4,0x101c,0,0);
    iVar3 = SendMessageA(param_4,0x1019,0,(LPARAM)&local_124);
  }
  _mbscpy(&local_104,param_5);
  local_128 = 0;
  puVar6 = &local_104;
  do {
    uVar1 = *puVar6;
    lpsz = puVar6;
    while ((uVar1 != '\0' && (uVar1 != '\t'))) {
      puVar4 = lpsz + 1;
      lpsz = lpsz + 1;
      uVar1 = *puVar4;
    }
    if (*lpsz != '\0') {
      puVar4 = (uchar *)CharNextA((LPCSTR)lpsz);
      *lpsz = '\0';
      lpsz = puVar4;
    }
    uVar1 = *puVar6;
    if (uVar1 == '\r') {
      puVar6 = puVar6 + 1;
    }
    local_120 = (uint)(uVar1 != '\r');
    local_124 = 7;
    local_11c = (int)*(short *)(param_1 + 0x708 + (local_128 + param_3 * 0x1a) * 2);
    local_118 = puVar6;
    SendMessageA(param_4,0x101b,local_128,(LPARAM)&local_124);
    local_128 = local_128 + 1;
    puVar6 = lpsz;
  } while (*lpsz != '\0');
  if ((*(uint *)(param_1 + 0x4e0) & 0x100000) != 0) {
    SendMessageA(param_4,0x103a,local_128,param_3 * 0x60 + 0x8a8 + param_1);
  }
  return;
}


