/* Module: Setup.exe
   Function: FUN_00407bd0
   Address: 00407bd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00407bd0(undefined4 *param_1,undefined4 param_2,LPCSTR param_3)

{
  HFONT pHVar1;
  
  pHVar1 = _SfGetUIFont_4(100);
  *param_1 = param_2;
  param_1[2] = param_3;
  param_1[1] = 0x50010000;
  _SfGetTextExtent_16(pHVar1,param_3,-1,(LPSIZE)(param_1 + 3));
  return;
}


