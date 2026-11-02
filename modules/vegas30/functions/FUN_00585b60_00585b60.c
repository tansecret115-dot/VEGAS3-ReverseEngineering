/* Module: vegas30.exe
   Function: FUN_00585b60
   Address: 00585b60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00585b60(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = FUN_005859d0(param_1,param_2,2);
  if (((uVar1 & 1) == 0) && ((uVar1 & 0x80000000) == 0)) {
    return 0;
  }
  return 1;
}


