/* Module: vegas30.exe
   Function: FUN_00428240
   Address: 00428240
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00428240(int param_1,HWND param_2)

{
  LONG LVar1;
  
  if ((*(int *)(param_1 + 8) != 0) && (param_2 != (HWND)0x0)) {
    SetParent(*(HWND *)(param_1 + 0xb8),param_2);
    SetParent(*(HWND *)(param_1 + 0xd0),param_2);
    SetParent(*(HWND *)(param_1 + 0xfc),param_2);
    LVar1 = GetWindowLongA(*(HWND *)(param_1 + 0xb8),0);
    FUN_0043bc40(LVar1 + 0x20,LVar1 + 0x34,*(undefined4 *)(param_1 + 0xb8));
    FUN_0043bc40(LVar1 + 0x58,LVar1 + 0x6c,*(undefined4 *)(param_1 + 0xb8));
    return 0;
  }
  return 0;
}


