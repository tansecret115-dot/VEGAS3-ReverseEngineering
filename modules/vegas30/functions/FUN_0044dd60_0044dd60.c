/* Module: vegas30.exe
   Function: FUN_0044dd60
   Address: 0044dd60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0044dd60(int param_1,HWND param_2)

{
  if ((*(int *)(param_1 + 8) != 0) && (param_2 != (HWND)0x0)) {
    SetParent(*(HWND *)(param_1 + 0x84),param_2);
    FUN_0043bc40(param_1 + 0x1bc,0,*(undefined4 *)(param_1 + 0x84));
    FUN_0043bc40(param_1 + 0x15c,0,*(undefined4 *)(param_1 + 0x84));
    *(HWND *)(param_1 + 8) = param_2;
    FUN_00455400(*(undefined4 *)(param_1 + 0x80));
    FUN_00446620(param_1);
  }
  return 0;
}


