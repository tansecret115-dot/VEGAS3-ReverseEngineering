/* Module: mcplugrw.dll
   Function: FUN_0040aa10
   Address: 0040aa10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0040aa10(HWND param_1,int param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  uint nResult;
  
  GetWindowLongA(param_1,-0x15);
  uVar1 = 0;
  if (param_2 == 0x110) {
    uVar1 = FUN_0040aa60(param_1,param_4);
  }
  else if (((param_2 == 0x111) && (nResult = param_3 & 0xffff, nResult != 0)) && (nResult < 3)) {
    EndDialog(param_1,nResult);
    return 1;
  }
  return uVar1;
}


