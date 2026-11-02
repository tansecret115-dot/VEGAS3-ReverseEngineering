/* Module: vidcap30.exe
   Function: FUN_00503d20
   Address: 00503d20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00503d20(HWND param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  iVar2 = FUN_00501410(LVar1,&local_8);
  if (iVar2 != 0) {
    *(undefined4 *)(LVar1 + 0x140) = *(undefined4 *)(LVar1 + 0x13c);
    SetCapture(*(HWND *)(LVar1 + 8));
    if (((*(byte *)(LVar1 + 4) & 0x10) != 0) && (*(HWND *)(LVar1 + 0xc) != (HWND)0x0)) {
      SendMessageA(*(HWND *)(LVar1 + 0xc),0x111,*(ushort *)(LVar1 + 0x450) | 0x30000,(LPARAM)param_1
                  );
    }
    FUN_00500820(LVar1);
    FUN_00501360(LVar1);
    hWnd = *(HWND *)(LVar1 + 8);
    uVar3 = GetDlgCtrlID(hWnd);
    PostMessageA(*(HWND *)(LVar1 + 0xc),0x111,uVar3 & 0xffff | 0x7000000,(LPARAM)hWnd);
  }
  FUN_00503cf0(*(undefined4 *)(LVar1 + 8));
  return 1;
}


