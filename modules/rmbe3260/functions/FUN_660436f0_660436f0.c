/* Module: rmbe3260.dll
   Function: FUN_660436f0
   Address: 660436f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_660436f0(int param_1,uint param_2,byte *param_3)

{
  uint uVar1;
  
  if (0x3fff < param_2) {
    uVar1 = param_2 & 0x3fffffff;
    *param_3 = (byte)(uVar1 >> 0x18) | (byte)(((uint)(param_1 != 0) << 0x1f) >> 0x18);
    param_3[1] = (byte)(uVar1 >> 0x10);
    param_3[2] = (byte)(uVar1 >> 8);
    param_3[3] = (byte)uVar1;
    return 4;
  }
  *param_3 = (byte)((param_2 & 0x3fff) >> 8) |
             (byte)(((-(uint)(param_1 != 0) & 2) + 1) * 0x4000 >> 8);
  param_3[1] = (byte)(param_2 & 0x3fff);
  return 2;
}


