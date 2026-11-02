/* Module: vegas30.exe
   Function: FUN_00425510
   Address: 00425510
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_00425510(HWND param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *dwNewLong;
  
  dwNewLong = calloc(1,0xc);
  if (dwNewLong != (undefined4 *)0x0) {
    SetWindowLongA(param_1,0,(LONG)dwNewLong);
    uVar1 = *param_2;
    dwNewLong[1] = param_1;
    *dwNewLong = uVar1;
  }
  return dwNewLong != (undefined4 *)0x0;
}


