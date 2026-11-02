/* Module: vegas30.exe
   Function: FUN_0041ebd0
   Address: 0041ebd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0041ebd0(int param_1,HWND param_2)

{
  if ((*(int *)(param_1 + 8) != 0) && (param_2 != (HWND)0x0)) {
    SetParent(*(HWND *)(param_1 + 0x1c8),param_2);
    FUN_0043bc40(param_1 + 0x204,0,*(undefined4 *)(param_1 + 0x1c8));
    FUN_0043bc40(param_1 + 600,0,*(undefined4 *)(param_1 + 0x1c8));
    FUN_0041eb90(param_1,param_2,param_1 + 0xa8);
    *(HWND *)(param_1 + 8) = param_2;
  }
  return 0;
}


