/* Module: vegas30k.dll
   Function: FUN_0101de50
   Address: 0101de50
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_0101de50(uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1;
  if ((((uVar1 & 1) == 0) || ((uVar1 & 0x10) != 0)) && (((uVar1 & 8) == 0 || ((uVar1 & 4) != 0)))) {
    if ((uVar1 & 0x14) == 0) {
      return param_1[3] == 0;
    }
    return (bool)2;
  }
  return true;
}


