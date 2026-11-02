/* Module: vfplugs.dll
   Function: FUN_0047e4f0
   Address: 0047e4f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0047e4f0(void)

{
  uint uVar1;
  DWORD local_4;
  
  local_4 = 0;
  if (DAT_0053b258 != 0) {
    return DAT_0053b254;
  }
  FUN_0047e560(&local_4);
  uVar1 = FUN_0047d840(local_4,0);
  DAT_0053b254 = FUN_0047d880(0,uVar1);
  DAT_0053b258 = 1;
  return DAT_0053b254;
}


