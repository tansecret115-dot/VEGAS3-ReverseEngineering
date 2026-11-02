/* Module: vegas30.exe
   Function: FUN_00453030
   Address: 00453030
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00453030(int param_1)

{
  if (*(HWND *)(param_1 + 4) != (HWND)0x0) {
    SendMessageA(*(HWND *)(param_1 + 4),5,0,
                 CONCAT22(*(undefined2 *)(param_1 + 0x14),*(undefined2 *)(param_1 + 0x10)));
    InvalidateRect(*(HWND *)(param_1 + 4),(RECT *)0x0,1);
  }
  return;
}


