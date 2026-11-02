/* Module: vegas30.exe
   Function: FUN_00423a70
   Address: 00423a70
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_00423a70(HWND param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *dwNewLong;
  
  dwNewLong = calloc(1,0x80);
  if (dwNewLong != (undefined4 *)0x0) {
    SetWindowLongA(param_1,0,(LONG)dwNewLong);
    uVar1 = *param_2;
    dwNewLong[1] = param_1;
    *dwNewLong = uVar1;
    FUN_00423ac0(dwNewLong,param_1);
  }
  return dwNewLong != (undefined4 *)0x0;
}


