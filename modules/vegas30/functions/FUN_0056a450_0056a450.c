/* Module: vegas30.exe
   Function: FUN_0056a450
   Address: 0056a450
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_0056a450(int param_1,undefined4 param_2,uint param_3)

{
  if ((param_3 & 0x4000) != 0) {
    *(undefined4 *)(param_1 + 0x2cc) = 1;
    FUN_0056f9d0();
    FUN_0056f550();
    InvalidateRect(*(HWND *)(param_1 + 0x24),(RECT *)0x0,1);
    FUN_005733a0();
    FUN_005749b0();
  }
  if ((param_3 & 0x8000) != 0) {
    FUN_0056f880();
    InvalidateRect(*(HWND *)(param_1 + 0x24),(RECT *)0x0,1);
  }
  return;
}


