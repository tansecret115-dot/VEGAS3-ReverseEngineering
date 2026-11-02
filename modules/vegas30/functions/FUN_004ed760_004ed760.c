/* Module: vegas30.exe
   Function: FUN_004ed760
   Address: 004ed760
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004ed760(HWND param_1,HMENU param_2)

{
  byte local_410 [1040];
  
  if ((param_1 != (HWND)0x0) && (param_2 != (HMENU)0x0)) {
    SendMessageA(param_1,0x602,0,(LPARAM)local_410);
    if ((local_410[0] & 4) != 0) {
      CheckMenuItem(param_2,0x1459,8);
    }
    if ((local_410[0] & 8) != 0) {
      CheckMenuItem(param_2,0x145a,8);
    }
    if ((local_410[0] & 0x10) != 0) {
      CheckMenuItem(param_2,0x145b,8);
    }
    if ((local_410[0] & 0x20) != 0) {
      CheckMenuItem(param_2,0x145c,8);
    }
    if ((local_410[0] & 1) == 0) {
      CheckMenuItem(param_2,0x145d,8);
    }
  }
  return;
}


