/* Module: vidcap30.exe
   Function: FUN_00433c70
   Address: 00433c70
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00433c70(HWND param_1,HMENU param_2)

{
  byte local_410 [1040];
  
  if ((param_1 != (HWND)0x0) && (param_2 != (HMENU)0x0)) {
    SendMessageA(param_1,0x602,0,(LPARAM)local_410);
    if ((local_410[0] & 4) != 0) {
      CheckMenuItem(param_2,0x9cc6,8);
    }
    if ((local_410[0] & 8) != 0) {
      CheckMenuItem(param_2,0x9cc7,8);
    }
    if ((local_410[0] & 0x10) != 0) {
      CheckMenuItem(param_2,0x9cc8,8);
    }
    if ((local_410[0] & 0x20) != 0) {
      CheckMenuItem(param_2,0x9d5a,8);
    }
    if ((local_410[0] & 1) == 0) {
      CheckMenuItem(param_2,0x9d58,8);
    }
  }
  return;
}


