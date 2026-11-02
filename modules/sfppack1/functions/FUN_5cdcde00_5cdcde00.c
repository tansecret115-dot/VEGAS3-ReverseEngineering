/* Module: sfppack1.dll
   Function: FUN_5cdcde00
   Address: 5cdcde00
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5cdcde00(void)

{
  uint uVar1;
  uint3 uVar2;
  
  uVar1 = ftol();
  uVar2 = (uint3)(uVar1 >> 8);
  if ((int)uVar1 < -0x80) {
    return (uint)uVar2 << 8;
  }
  if (0x7f < (int)uVar1) {
    return CONCAT31(uVar2,0xff);
  }
  return uVar1 ^ 0x80;
}


