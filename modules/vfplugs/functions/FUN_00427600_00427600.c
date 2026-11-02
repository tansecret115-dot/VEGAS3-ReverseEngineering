/* Module: vfplugs.dll
   Function: FUN_00427600
   Address: 00427600
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00427600(HWND param_1,uint *param_2)

{
  uint *dwNewLong;
  
  dwNewLong = LocalAlloc(0x40,0xcc);
  if (dwNewLong == (uint *)0x0) {
    return;
  }
  SetWindowLongA(param_1,0,(LONG)dwNewLong);
  FUN_004273e0(dwNewLong,param_1,param_2,0x4241f0);
  return;
}


