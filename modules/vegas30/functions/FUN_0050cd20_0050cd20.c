/* Module: vegas30.exe
   Function: FUN_0050cd20
   Address: 0050cd20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0050cd20(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0050c870(*(undefined4 *)(param_1 + 0x98),param_2,param_3,param_4);
  if (param_1 != 0) {
    InvalidateRect(*(HWND *)(param_1 + 0x180),(RECT *)0x0,1);
    InvalidateRect(*(HWND *)(*(int *)(param_1 + 0x90) + 4),(RECT *)0x0,0);
    if (((*(byte *)(param_1 + 0x154) & 1) != 0) && (*(HWND *)(param_1 + 0x168) != (HWND)0x0)) {
      InvalidateRect(*(HWND *)(param_1 + 0x168),(RECT *)0x0,0);
    }
  }
  DAT_0064767c = DAT_0064767c | 0x800;
  FUN_00453250(DAT_00647630,0);
  return uVar1;
}


