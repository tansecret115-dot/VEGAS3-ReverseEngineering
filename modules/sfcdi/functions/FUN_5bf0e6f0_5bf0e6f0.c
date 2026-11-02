/* Module: sfcdi.dll
   Function: FUN_5bf0e6f0
   Address: 5bf0e6f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf0e6f0(undefined4 param_1,int param_2)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)(param_2 + 8);
  while ((0x2f < *pbVar1 && (*pbVar1 < 0x3a))) {
    pbVar1 = pbVar1 + 1;
    if (0xc < (int)(pbVar1 + (-8 - param_2))) {
      return 0;
    }
  }
  return 1;
}


