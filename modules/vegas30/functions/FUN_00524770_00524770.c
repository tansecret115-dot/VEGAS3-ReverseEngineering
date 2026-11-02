/* Module: vegas30.exe
   Function: FUN_00524770
   Address: 00524770
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00524770(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int local_42c;
  int local_428;
  tagRECT local_424;
  undefined1 local_414 [1040];
  undefined1 local_4 [4];
  
  *(undefined4 *)(param_1 + 0x1bc) = 1;
  if (*(int *)(param_1 + 0x120) != 0) {
    GetWindowRect(*(HWND *)(param_1 + 8),&local_424);
    local_42c = local_424.right - local_424.left;
    local_428 = local_424.bottom - local_424.top;
    FUN_0052b000(&local_42c);
    FUN_0052b170(*(undefined4 *)(param_1 + 0x88),1);
    *(undefined4 *)(param_1 + 0x88) = 0;
  }
  if (*(int *)(param_1 + 0x100) != 0) {
    FUN_00509da0(*(undefined4 *)(param_1 + 0xfc));
    FUN_005088e0();
  }
  uVar1 = FUN_005256c0(param_1);
  iVar2 = FUN_0050a0a0(uVar1,local_4);
  if (-1 < iVar2) {
    SendMessageA(*(HWND *)(param_1 + 0xb0),0x602,0,(LPARAM)local_414);
    FUN_005242d0(param_1,local_414);
  }
  FUN_00508c50(*(undefined4 *)(param_1 + 0xfc));
  *(undefined4 *)(param_1 + 0xfc) = 0;
  FUN_0043c0e0(*(undefined4 *)(param_1 + 0xe4));
  *(undefined4 *)(param_1 + 0xe4) = 0;
  if (*(undefined4 **)(param_1 + 0x128) != (undefined4 *)0x0) {
    **(undefined4 **)(param_1 + 0x128) = *(undefined4 *)(param_1 + 0xec);
  }
  return;
}


