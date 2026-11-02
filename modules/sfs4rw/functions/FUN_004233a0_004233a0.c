/* Module: sfs4rw.dll
   Function: FUN_004233a0
   Address: 004233a0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_004233a0(uint param_1)

{
  undefined8 uVar1;
  
  if (DAT_004a9b94 == 0) {
    uVar1 = FUN_00423200();
    DAT_004a98ec = (uint)uVar1;
    DAT_004a9b94 = 1;
  }
  if (param_1 == 0) {
    param_1 = 0xffffffff;
  }
  return DAT_004a98ec & param_1;
}


