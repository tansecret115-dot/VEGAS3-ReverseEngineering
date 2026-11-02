/* Module: sfmarket2.dll
   Function: FUN_0041cb00
   Address: 0041cb00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0041cb00(void)

{
  uint uVar1;
  DWORD local_4;
  
  local_4 = 0;
  if (DAT_004aae2c != 0) {
    return DAT_004aae28;
  }
  FUN_0041cb70(&local_4);
  uVar1 = FUN_0041be50(local_4,0);
  DAT_004aae28 = FUN_0041be90(0,uVar1);
  DAT_004aae2c = 1;
  return DAT_004aae28;
}


