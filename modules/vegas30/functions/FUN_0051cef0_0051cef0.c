/* Module: vegas30.exe
   Function: FUN_0051cef0
   Address: 0051cef0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0051cef0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  LONG LVar3;
  uint uVar4;
  tagRECT local_10;
  
  LVar3 = 0;
  if (*(HWND *)(param_1 + 0x168) != (HWND)0x0) {
    DestroyWindow(*(HWND *)(param_1 + 0x168));
    *(undefined4 *)(param_1 + 0x168) = 0;
    *(uint *)(param_1 + 0x154) = *(uint *)(param_1 + 0x154) & 0xfffffffe;
  }
  if (((*(byte *)(param_1 + 0xa8) & 1) != 0) &&
     (iVar1 = *(int *)(param_1 + 0x98), (*(byte *)(iVar1 + 4) & 0x20) != 0)) {
    uVar4 = 0x340;
    if (iVar1 != 0) {
      uVar4 = *(int *)(iVar1 + 0x9c) + 0x340;
    }
    if (*(HWND *)(param_1 + 0x180) != (HWND)0x0) {
      LVar3 = GetWindowLongA(*(HWND *)(param_1 + 0x180),-0x15);
    }
    uVar2 = _SfCreateDialogParam_20
                      (DAT_00647204,uVar4 & 0xffff,*(undefined4 *)(param_1 + 8),&LAB_0051c830,LVar3)
    ;
    *(undefined4 *)(param_1 + 0x168) = uVar2;
    *(uint *)(param_1 + 0x154) = *(uint *)(param_1 + 0x154) | 1;
  }
  GetWindowRect(*(HWND *)(param_1 + 8),&local_10);
  SendMessageA(*(HWND *)(param_1 + 8),5,0,
               (local_10.bottom - local_10.top) * 0x10000 | local_10.right - local_10.left & 0xffffU
              );
  FUN_0051df70(param_1);
  return;
}


