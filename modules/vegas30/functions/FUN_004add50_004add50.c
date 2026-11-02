/* Module: vegas30.exe
   Function: FUN_004add50
   Address: 004add50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004add50(int param_1)

{
  tagPOINT local_8;
  
  if ((*(int *)(param_1 + 0x16c) != 0) && ((*(uint *)(param_1 + 0x18) & 0x1000000) != 0)) {
    GetCursorPos(&local_8);
    ScreenToClient(*(HWND *)(param_1 + 4),&local_8);
    FUN_00499ea0(param_1,0,local_8.x,local_8.y);
    FUN_004abb60(param_1,*(undefined4 *)(param_1 + 0x16c),0,1);
  }
  return 0;
}


