/* Module: vegas30.exe
   Function: FUN_0040dea0
   Address: 0040dea0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0040dea0(undefined4 *param_1)

{
  if (param_1[0x2d] != 0) {
    FUN_0040dd90(param_1);
    DestroyWindow((HWND)param_1[0x2d]);
    param_1[0x2d] = 0;
    FUN_00401f40();
    if (((byte)DAT_0064761c & 2) != 0) {
      SetFocus(DAT_00647624);
    }
    if (param_1[0x48] != 0) {
      param_1[0x48] = 0;
      PostMessageA((HWND)*param_1,0x601,1,0);
    }
  }
  return;
}


