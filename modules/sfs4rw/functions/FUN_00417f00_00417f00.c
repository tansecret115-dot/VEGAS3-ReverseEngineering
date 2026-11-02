/* Module: sfs4rw.dll
   Function: FUN_00417f00
   Address: 00417f00
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00417f00(uint param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = FUN_00417e50(param_1,-param_2 - 1);
  uVar1 = FUN_00417e50(param_1 >> 8 & 0xff,uVar1);
  uVar1 = FUN_00417e50(param_1 >> 0x10,uVar1);
  FUN_00417e50(param_1 >> 0x18,uVar1);
  return;
}


