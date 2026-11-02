/* Module: sftrans1.dll
   Function: FUN_004b9bc0
   Address: 004b9bc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004b9bc0(HWND param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  LONG LVar1;
  int iVar2;
  uint uVar3;
  HWND hWnd;
  undefined4 local_8;
  undefined4 local_4;
  
  LVar1 = GetWindowLongA(param_1,0);
  *(undefined4 *)(LVar1 + 0x31c) = 0;
  *(undefined4 *)(LVar1 + 800) = 0;
  local_8 = param_3;
  local_4 = param_4;
  SetFocus(*(HWND *)(LVar1 + 8));
  iVar2 = FUN_004b72b0(LVar1,&local_8);
  if (iVar2 != 0) {
    *(undefined4 *)(LVar1 + 0x140) = *(undefined4 *)(LVar1 + 0x13c);
    SetCapture(*(HWND *)(LVar1 + 8));
    if (((*(byte *)(LVar1 + 4) & 0x10) != 0) && (*(HWND *)(LVar1 + 0xc) != (HWND)0x0)) {
      SendMessageA(*(HWND *)(LVar1 + 0xc),0x111,*(ushort *)(LVar1 + 0x450) | 0x30000,(LPARAM)param_1
                  );
    }
    FUN_004b66c0(LVar1);
    FUN_004b7200(LVar1);
    hWnd = *(HWND *)(LVar1 + 8);
    uVar3 = GetDlgCtrlID(hWnd);
    PostMessageA(*(HWND *)(LVar1 + 0xc),0x111,uVar3 & 0xffff | 0x7000000,(LPARAM)hWnd);
  }
  FUN_004b9b90(*(undefined4 *)(LVar1 + 8));
  return 1;
}


