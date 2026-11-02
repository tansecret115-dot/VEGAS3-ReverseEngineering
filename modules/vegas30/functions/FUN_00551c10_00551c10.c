/* Module: vegas30.exe
   Function: FUN_00551c10
   Address: 00551c10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00551c10(int param_1,HWND param_2)

{
  if (((*(int *)(param_1 + 8) != 0) && (param_2 != (HWND)0x0)) &&
     (*(HWND *)(param_1 + 0x8c) != (HWND)0x0)) {
    SetParent(*(HWND *)(param_1 + 0x8c),param_2);
    FUN_0043bc40(param_1 + 0x90,param_1 + 0x94,*(undefined4 *)(param_1 + 0x8c));
  }
  return 0;
}


