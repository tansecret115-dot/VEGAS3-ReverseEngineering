/* Module: vegas30.exe
   Function: FUN_004ff130
   Address: 004ff130
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_004ff130(HWND param_1,int *param_2)

{
  undefined4 *dwNewLong;
  
  dwNewLong = calloc(1,0x1c4);
  if (dwNewLong != (undefined4 *)0x0) {
    SetWindowLongA(param_1,0,(LONG)dwNewLong);
    *dwNewLong = param_1;
    dwNewLong[1] = *param_2;
    dwNewLong[2] = *(undefined4 *)(*param_2 + 0x80);
  }
  return dwNewLong != (undefined4 *)0x0;
}


