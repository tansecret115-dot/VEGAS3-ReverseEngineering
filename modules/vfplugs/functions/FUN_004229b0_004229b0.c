/* Module: vfplugs.dll
   Function: FUN_004229b0
   Address: 004229b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004229b0(HWND param_1,uint *param_2)

{
  uint *dwNewLong;
  
  dwNewLong = calloc(1,0xc4);
  if (dwNewLong == (uint *)0x0) {
    return;
  }
  SetWindowLongA(param_1,0,(LONG)dwNewLong);
  FUN_00422ab0(dwNewLong,param_1,param_2,0x4229f0);
  return;
}


