/* Module: sftrans1.dll
   Function: FUN_004938d0
   Address: 004938d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004938d0(HWND param_1,LPCWSTR param_2)

{
  HWND pHVar1;
  WPARAM WVar2;
  WPARAM WVar3;
  HWND pHVar4;
  undefined4 extraout_ECX;
  CHAR local_34 [12];
  CHAR local_28 [31];
  undefined1 local_9;
  
  pHVar1 = GetDlgItem(param_1,0x6bd);
  if (pHVar1 != (HWND)0x0) {
    if ((param_2 == (LPCWSTR)0x0) || (*param_2 != L'\0')) {
      WideCharToMultiByte(0,0,param_2,-1,local_28,0x20,(LPCSTR)0x0,(LPBOOL)0x0);
    }
    else if (&stack0x00000000 != (undefined1 *)0x28) {
      local_28[0] = '\0';
    }
    local_9 = 0;
    WVar2 = SendMessageA(pHVar1,0x14c,0xffffffff,(LPARAM)local_28);
    WVar3 = SendMessageA(pHVar1,0x147,0,0);
    if (WVar2 != WVar3) {
      SendMessageA(pHVar1,0x14e,WVar2,0);
    }
  }
  pHVar1 = GetDlgItem(param_1,0x6be);
  WVar2 = 0;
  if (pHVar1 != (HWND)0x0) {
    FUN_004d5f50(*(undefined4 *)(param_2 + 0x20),local_34,0);
    WVar3 = SendMessageA(pHVar1,0x158,0xffffffff,(LPARAM)local_34);
    if (WVar3 == 0xffffffff) {
      WVar2 = SetWindowTextA(pHVar1,local_34);
    }
    else {
      WVar2 = SendMessageA(pHVar1,0x147,0,0);
      if (WVar3 != WVar2) {
        WVar2 = SendMessageA(pHVar1,0x14e,WVar3,0);
      }
    }
  }
  FUN_0052d290(0x9c49,CONCAT31((int3)(WVar2 >> 8),(char)param_2[0x22]) & 0xffffff01 | 4);
  FUN_0052d290(0x9c4a,CONCAT31((uint3)(*(uint *)(param_2 + 0x22) >> 9),
                               (char)(*(uint *)(param_2 + 0x22) >> 1)) & 0xffffff01 | 4);
  FUN_0052d290(0x9c4b,CONCAT31((int3)((uint)*(int *)(param_2 + 0x2c) >> 8),
                               *(int *)(param_2 + 0x2c) == 0) | 4);
  FUN_0052d290(0x9c4c,CONCAT31((int3)((uint)*(int *)(param_2 + 0x2c) >> 8),
                               *(int *)(param_2 + 0x2c) == 1) | 4);
  FUN_0052d290(0x9c4d,CONCAT31((int3)((uint)extraout_ECX >> 8),*(int *)(param_2 + 0x2c) == 2) | 4);
  pHVar1 = GetDlgItem(param_1,0x6c1);
  if (pHVar1 != (HWND)0x0) {
    SendMessageA(pHVar1,0xa05,0,(LPARAM)(param_2 + 0x24));
  }
  pHVar1 = GetDlgItem(param_1,0x6ab);
  if (pHVar1 != (HWND)0x0) {
    SendMessageA(pHVar1,0xf1,*(WPARAM *)(param_2 + 0x2e),0);
  }
  pHVar1 = GetDlgItem(param_1,0x6c2);
  pHVar4 = GetDlgItem(param_1,0x6c4);
  FUN_00493b70(pHVar1,pHVar4,*(undefined4 *)(param_2 + 0x30),*(undefined4 *)(param_2 + 0x32),0,2000,
               0,0,0,0x3fd00000);
  pHVar1 = GetDlgItem(param_1,0x6c0);
  pHVar4 = GetDlgItem(param_1,0x6bf);
  FUN_00493b70(pHVar1,pHVar4,*(undefined4 *)(param_2 + 0x34),*(undefined4 *)(param_2 + 0x36),0,2000,
               0,0,0,0x3fd00000);
  pHVar1 = GetDlgItem(param_1,0x6d0);
  pHVar4 = GetDlgItem(param_1,0x6bc);
  FUN_00493b70(pHVar1,pHVar4,*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3a),0,2000,
               0,0,0,0x40000000);
  return;
}


