/* Module: sfnetmedia.dll
   Function: FUN_00425720
   Address: 00425720
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00425720(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_004255d0(param_1);
  if (iVar1 == 0) {
    uVar2 = FUN_00425610(param_1);
    return uVar2;
  }
  return 0x80070057;
}


