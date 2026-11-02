/* Module: sfs4rw.dll
   Function: FUN_00418bb0
   Address: 00418bb0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00418bb0(void)

{
  uint uVar1;
  DWORD local_4;
  
  local_4 = 0;
  if (DAT_004a965c != 0) {
    return DAT_004a9658;
  }
  FUN_00418c20(&local_4);
  uVar1 = FUN_00417f00(local_4,0);
  DAT_004a9658 = FUN_00417f40(0,uVar1);
  DAT_004a965c = 1;
  return DAT_004a9658;
}


