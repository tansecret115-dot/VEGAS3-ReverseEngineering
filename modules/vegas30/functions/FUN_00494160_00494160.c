/* Module: vegas30.exe
   Function: FUN_00494160
   Address: 00494160
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined8 FUN_00494160(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined8 uVar1;
  
  if (DAT_006476c0 == 0) {
    return CONCAT44(param_3,param_2);
  }
  if (param_3 < 0) {
    ftol();
    uVar1 = ftol();
    return CONCAT44(-((int)((ulonglong)uVar1 >> 0x20) + (uint)((int)uVar1 != 0)),-(int)uVar1);
  }
  ftol();
  uVar1 = ftol();
  return uVar1;
}


