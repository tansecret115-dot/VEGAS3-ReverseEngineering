/* Module: mcplug.dll
   Function: FUN_00470590
   Address: 00470590
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00470590(void)

{
  uint uVar1;
  DWORD local_4;
  
  local_4 = 0;
  if (DAT_004ae45c != 0) {
    return DAT_004ae458;
  }
  FUN_00470600(&local_4);
  uVar1 = FUN_0046f8e0(local_4,0);
  DAT_004ae458 = FUN_0046f920(0,uVar1);
  DAT_004ae45c = 1;
  return DAT_004ae458;
}


