/* Module: wmfdist2.exe
   Function: FUN_01004609
   Address: 01004609
   Source: Ghidra pseudocode (Stage 10 batch) */


ushort FUN_01004609(ushort param_1)

{
  ushort uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0x80;
  }
  else {
    uVar1 = param_1 & 0x27;
  }
  return uVar1;
}


