/* Module: mpgmux.dll
   Function: FUN_1000c613
   Address: 1000c613
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_1000c613(FILE *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if ((param_1->_flag & 0x40) == 0) {
    FUN_1000eaab((uint)param_1);
    uVar1 = __fclose_lk(param_1);
    FUN_1000eafd((uint)param_1);
  }
  else {
    param_1->_flag = 0;
  }
  return uVar1;
}


