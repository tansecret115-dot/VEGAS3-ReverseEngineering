/* Module: sfppack2.dll
   Function: FUN_5cd4a6f0
   Address: 5cd4a6f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cd4a6f0(void)

{
  uint uVar1;
  DWORD local_4;
  
  local_4 = 0;
  if (DAT_5cd764d8 != 0) {
    return DAT_5cd764d4;
  }
  FUN_5cd4a760(&local_4);
  uVar1 = FUN_5cd49a40(local_4,0);
  DAT_5cd764d4 = FUN_5cd49a80(0,uVar1);
  DAT_5cd764d8 = 1;
  return DAT_5cd764d4;
}


