/* Module: sfs4rw.dll
   Function: FUN_00425450
   Address: 00425450
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00425450(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_00425300(param_1);
  if (iVar1 == 0) {
    uVar2 = FUN_00425340(param_1);
    return uVar2;
  }
  return 0x80070057;
}


