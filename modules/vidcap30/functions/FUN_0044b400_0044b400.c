/* Module: vidcap30.exe
   Function: FUN_0044b400
   Address: 0044b400
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0044b400(HWND param_1,HMENU param_2)

{
  uint local_410 [260];
  
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
    if ((local_410[0] & 0x80) != 0) {
      CheckMenuRadioItem(param_2,0x9cc9,0x9ccb,0x9ccb,0);
    }
    if ((local_410[0] & 0x20) != 0) {
      CheckMenuRadioItem(param_2,0x9cc9,0x9ccb,0x9cc9,0);
    }
    if (((local_410[0] & 0x40) != 0) || ((local_410[0] & 0xa0) == 0)) {
      CheckMenuRadioItem(param_2,0x9cc9,0x9ccb,0x9cca,0);
    }
    if ((local_410[0] & 1) == 0) {
      CheckMenuItem(param_2,0x9d58,8);
    }
    EnableMenuItem(param_2,0x9d8a,~local_410[0] >> 5 & 1);
  }
  return;
}


